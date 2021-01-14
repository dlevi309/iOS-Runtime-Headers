/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
*/

#import <VFX/VFX-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface VFXCore.VFXCoreView : UIView {

	 displayClockHandle;
	 renderTargetHandle;
	 metalLayer;
	 colorPixelFormat;
	 depthStencilPixelFormat;
	 sampleCount;
	 entityManager;
	 paused;
	 sizeDirty;
	 drawableSize;
	 isTicking;
	 _currentDrawable;

}

@property (assign,nonatomic) CGRect frame; 
@property (retain,nonatomic) UIColor * backgroundColor; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)frame;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(UIColor *)backgroundColor;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(id)initWithCoder:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
@end

