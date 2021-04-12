/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)style;
-(id)initWithFrame:(CGRect)arg1 style:(id)arg2 backgroundColor:(id)arg3 ;
-(void)setGlowAnimationEnabled:(BOOL)arg1 ;
-(id)_baseImage;
-(void)_setGlowAnimationEnabled:(BOOL)arg1 waitForNextCycle:(BOOL)arg2 ;
-(void)_startGlowAnimationWaitForNextCycle:(BOOL)arg1 ;
-(void)_stopGlowAnimation;
-(BOOL)_styleCanGlow;
-(id)_glowImage;
-(id)_backgroundImageName;
-(void)setSuppressesGlow:(BOOL)arg1 ;
@end

