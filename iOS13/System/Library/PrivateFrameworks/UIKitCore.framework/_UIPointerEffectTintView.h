/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>
#import <UIKitCore/_UILumaTrackingBackdropViewDelegate.h>

@interface _UIPointerEffectTintView : UIVisualEffectView <_UILumaTrackingBackdropViewDelegate> {

	unsigned long long _luminance;
	BOOL _disabled;
	BOOL _pressed;

}

@property (assign,getter=isDisabled,nonatomic) BOOL disabled;              //@synthesize disabled=_disabled - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                //@synthesize pressed=_pressed - In the implementation block
-(BOOL)isDisabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isPressed;
-(void)setPressed:(BOOL)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)_updateAlpha;
-(void)backgroundLumaView:(id)arg1 didTransitionToLevel:(unsigned long long)arg2 ;
-(void)_updateBackgroundEffects;
@end

