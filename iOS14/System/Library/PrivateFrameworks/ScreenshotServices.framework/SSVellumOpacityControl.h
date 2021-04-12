/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)setValue:(double)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_leftImageView;
-(double)value;
-(id)_rightImageView;
@end

