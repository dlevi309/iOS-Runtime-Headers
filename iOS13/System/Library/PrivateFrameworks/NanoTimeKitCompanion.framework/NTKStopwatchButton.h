/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIControl.h>

@class CLKDevice, UIView, NTKColoringImageView, UIColor;

@interface NTKStopwatchButton : UIControl {

	CLKDevice* _device;
	UIView* _innerView;
	NTKColoringImageView* _glyphView;
	UIColor* _glyphColor;
	UIColor* _glyphBackgroundColor;
	UIEdgeInsets _touchEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets touchEdgeInsets;                //@synthesize touchEdgeInsets=_touchEdgeInsets - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                        //@synthesize glyphColor=_glyphColor - In the implementation block
@property (nonatomic,retain) UIColor * glyphBackgroundColor;              //@synthesize glyphBackgroundColor=_glyphBackgroundColor - In the implementation block
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(UIColor *)glyphColor;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 ;
-(UIEdgeInsets)touchEdgeInsets;
-(void)setTouchEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIColor *)glyphBackgroundColor;
-(void)setGlyphBackgroundColor:(UIColor *)arg1 ;
@end

