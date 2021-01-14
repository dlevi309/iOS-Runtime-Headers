/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDisabled:(BOOL)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)backgroundLumaView:(id)arg1 didTransitionToLevel:(unsigned long long)arg2 ;
-(BOOL)isDisabled;
-(void)_updateAlpha;
-(BOOL)isPressed;
-(void)_updateBackgroundEffects;
@end

