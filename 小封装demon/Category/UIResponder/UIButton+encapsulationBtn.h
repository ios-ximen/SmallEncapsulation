//
//  UIButton+encapsulationBtn.h
//  1111111111
//
//  Created by niujinfeng on 17/4/12.
//  Copyright © 2017年 niujinfeng. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, MKButtonEdgeInsetsStyle) {
    MKButtonEdgeInsetsStyleTop, // image在上，label在下
    MKButtonEdgeInsetsStyleLeft, // image在左，label在右
    MKButtonEdgeInsetsStyleBottom, // image在下，label在上
    MKButtonEdgeInsetsStyleRight // image在右，label在左
};

typedef void(^btnClickedBlock) (); //关联block对象（按钮的点击事件）

@interface UIButton (encapsulationBtn)

+ (instancetype _Nullable )buttonWithType:(UIButtonType)buttonType title:(NSString *_Nullable)title titleColor:(UIColor *_Nullable)titleColor imageName:(NSString *_Nullable)imageName bgImageName:(NSString *_Nullable)bgImageName highImageName:(NSString *_Nullable)highImageName selBgImageName:(NSString *_Nullable)selBgImageName btnClickedBlock:(btnClickedBlock _Nullable )block;

+ (instancetype _Nullable )buttonWithType:(UIButtonType)buttonType title:(NSString *_Nullable)title titleColor:(UIColor *_Nullable)titleColor  disBGImageName:(NSString *_Nullable)disBGImageName normalBGImageName:(NSString *_Nullable)normalBGImageName;

/**
 *  扩大button点击区域(4边扩大相同值)
 */
@property (nonatomic, assign) CGFloat enlargedEdge;

/**
 *  扩大button点击区域(4边分别设置)
 */
-(void)setEnlargedEdgeWithTop:(CGFloat)top left:(CGFloat)left bottom:(CGFloat)bottom right:(CGFloat)right;

/**
 *  设置button的titleLabel和imageView的布局样式，及间距
 *
 *  @param style titleLabel和imageView的布局样式
 *  @param space titleLabel和imageView的间距
 */
- (void)layoutButtonWithEdgeInsetsStyle:(MKButtonEdgeInsetsStyle)style
                        imageTitleSpace:(CGFloat)space;
@end
