/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStatusBarStyleAttributes, UIImageView;

@interface UIStatusBarBackgroundView : UIView {

	UIStatusBarStyleAttributes* _style;
	UIImageView* _glowView;
	BOOL _glowEnabled;
	BOOL _suppressGlow;

}
-(id)initWithFrame:(CGRect)arg1 style:(id)arg2 backgroundColor:(id)arg3 ;
-(void)setGlowAnimationEnabled:(BOOL)arg1 ;
-(BOOL)_styleCanGlow;
-(void)setSuppressesGlow:(BOOL)arg1 ;
-(void)_setGlowAnimationEnabled:(BOOL)arg1 waitForNextCycle:(BOOL)arg2 ;
-(void)_stopGlowAnimation;
-(void)_startGlowAnimationWaitForNextCycle:(BOOL)arg1 ;
-(id)_backgroundImageName;
-(id)_baseImage;
-(id)_glowImage;
-(id)style;
@end

