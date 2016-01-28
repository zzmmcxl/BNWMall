//
//  GUITabScrollView.h
//  GUITabPagerViewController
//
//  Created by Guilherme Araújo on 26/02/15.
//  Copyright (c) 2015 Guilherme Araújo. All rights reserved.
//

#import <UIKit/UIKit.h>



@protocol GUITabScrollDelegate;

@interface GUITabScrollView : UIScrollView




@property (weak, nonatomic) id<GUITabScrollDelegate> tabScrollDelegate;

- (instancetype)initWithFrame:(CGRect)frame tabViews:(NSArray *)tabViews tabBarHeight:(CGFloat)height tabColor:(UIColor *)color;
- (void)animateToTabAtIndex:(NSInteger)index;
- (void)defaultAnimateToTabAtIndex:(NSInteger)index;
@end

@protocol GUITabScrollDelegate <NSObject>

- (void)tabScrollView:(GUITabScrollView *)tabScrollView didSelectTabAtIndex:(NSInteger)index;

@end
