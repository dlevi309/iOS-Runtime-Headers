/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUIWorkspaceAnimationController.h>

@protocol BSInvalidatable;
@class SBWorkspaceTransitionRequest, NSSet, SBDeviceApplicationSceneEntity;

@interface SBUIMainScreenAnimationController : SBUIWorkspaceAnimationController {

	id<BSInvalidatable> _colorSamplingAssertion;
	id<BSInvalidatable> _wallpaperRequiredAssertion;

}

@property (nonatomic,retain) id<BSInvalidatable> colorSamplingAssertion;                                 //@synthesize colorSamplingAssertion=_colorSamplingAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> wallpaperRequiredAssertion;                             //@synthesize wallpaperRequiredAssertion=_wallpaperRequiredAssertion - In the implementation block
@property (nonatomic,readonly) SBWorkspaceTransitionRequest * transitionRequest; 
@property (nonatomic,copy,readonly) NSSet * toApplicationSceneEntities; 
@property (nonatomic,readonly) SBDeviceApplicationSceneEntity * toApplicationSceneEntity; 
@property (nonatomic,copy,readonly) NSSet * fromApplicationSceneEntities; 
@property (nonatomic,readonly) SBDeviceApplicationSceneEntity * fromApplicationSceneEntity; 
-(void)_begin;
-(void)_cleanupAnimation;
-(SBWorkspaceTransitionRequest *)transitionRequest;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(id)_getTransitionWindow;
-(BOOL)_shouldDismissBanner;
-(id)initWithWorkspaceTransitionRequest:(id)arg1 ;
-(void)__startAnimation;
-(BOOL)__wantsInitialProgressStateChange;
-(SBDeviceApplicationSceneEntity *)toApplicationSceneEntity;
-(SBDeviceApplicationSceneEntity *)fromApplicationSceneEntity;
-(id)_primaryAppOrAnyAppFromSet:(id)arg1 ;
-(void)_dismissBannerAnimated:(BOOL)arg1 ;
-(void)setColorSamplingAssertion:(id<BSInvalidatable>)arg1 ;
-(void)setWallpaperRequiredAssertion:(id<BSInvalidatable>)arg1 ;
-(id<BSInvalidatable>)colorSamplingAssertion;
-(id<BSInvalidatable>)wallpaperRequiredAssertion;
@end

