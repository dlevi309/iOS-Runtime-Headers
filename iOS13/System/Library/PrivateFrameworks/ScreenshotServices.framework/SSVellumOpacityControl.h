/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <UIKitCore/UIControl.h>

@class UISlider, UIImageView;

@interface SSVellumOpacityControl : UIControl {

	UISlider* _slider;
	UIImageView* _leadingImageView;
	UIImageView* _trailingImageView;

}

@property (assign,nonatomic) double value; 
+(double)preferredWidth;
-(double)value;
-(void)setValue:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(id)_leftImageView;
-(id)_rightImageView;
@end

