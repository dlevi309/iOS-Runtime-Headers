/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUIWorkspaceAnimationController.h>

@protocol BSInvalidatable;
@class SBWorkspaceTransitionRequest, NSSet, SBDeviceApplicationSceneEntity;

@interface SBUIMainScreenAnimationController : SBUIWorkspaceAnimationController {

	id<BSInvalidatable> _colorSamplingAssertion;
	id<BSInvalidatable> _wallpaperRequiredAssertion;
	id<BSInvalidatable> _bannerSuppressionAssertion;

}

@property (nonatomic,retain) id<BSInvalidatable> colorSamplingAssertion;                                 //@synthesize colorSamplingAssertion=_colorSamplingAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> wallpaperRequiredAssertion;                             //@synthesize wallpaperRequiredAssertion=_wallpaperRequiredAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> bannerSuppressionAssertion;                             //@synthesize bannerSuppressionAssertion=_bannerSuppressionAssertion - In the implementation block
@property (nonatomic,readonly) SBWorkspaceTransitionRequest * transitionRequest; 
@property (nonatomic,copy,readonly) NSSet * toApplicationSceneEntities; 
@property (nonatomic,readonly) SBDeviceApplicationSceneEntity * toApplicationSceneEntity; 
@property (nonatomic,copy,readonly) NSSet * fromApplicationSceneEntities; 
@property (nonatomic,readonly) SBDeviceApplicationSceneEntity * fromApplicationSceneEntity; 
-(void)_begin;
-(id<BSInvalidatable>)bannerSuppressionAssertion;
-(void)setBannerSuppressionAssertion:(id<BSInvalidatable>)arg1 ;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(BOOL)_shouldDismissBanner;
-(void)_cleanupAnimation;
-(SBWorkspaceTransitionRequest *)transitionRequest;
-(id)_getTransitionWindow;
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

