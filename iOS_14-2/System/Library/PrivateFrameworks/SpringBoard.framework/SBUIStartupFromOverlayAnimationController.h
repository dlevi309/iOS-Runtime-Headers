/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class BKSDisplayRenderOverlay, BSAnimationSettings, SBSceneLayoutAnimationWrapperView;

@interface SBUIStartupFromOverlayAnimationController : SBUIMainScreenAnimationController {

	BKSDisplayRenderOverlay* _overlay;
	BSAnimationSettings* _animationSettings;
	BOOL _waitsForAppActivation;
	SBSceneLayoutAnimationWrapperView* _layoutWrapperView;

}

@property (nonatomic,retain) BSAnimationSettings * animationSettings;              //@synthesize animationSettings=_animationSettings - In the implementation block
@property (assign,nonatomic) BOOL waitsForAppActivation;                           //@synthesize waitsForAppActivation=_waitsForAppActivation - In the implementation block
-(BSAnimationSettings *)animationSettings;
-(void)setAnimationSettings:(BSAnimationSettings *)arg1 ;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(BOOL)_shouldDismissBanner;
-(id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2 ;
-(void)_cleanupAnimation;
-(BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
-(BOOL)waitsForAppActivation;
-(void)setWaitsForAppActivation:(BOOL)arg1 ;
@end

