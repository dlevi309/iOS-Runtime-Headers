/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_cleanupAnimation;
-(id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2 ;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
-(BOOL)_shouldDismissBanner;
-(BOOL)waitsForAppActivation;
-(void)setWaitsForAppActivation:(BOOL)arg1 ;
@end

