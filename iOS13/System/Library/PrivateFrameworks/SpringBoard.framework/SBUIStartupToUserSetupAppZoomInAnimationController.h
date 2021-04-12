/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBSceneLayoutAnimationWrapperView, BKSDisplayRenderOverlay;

@interface SBUIStartupToUserSetupAppZoomInAnimationController : SBUIMainScreenAnimationController {

	SBSceneLayoutAnimationWrapperView* _layoutAnimationWrapperView;
	BKSDisplayRenderOverlay* _persistentSnapshotOverlay;

}
-(void)_setHidden:(BOOL)arg1 ;
-(id)animationSettings;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2 ;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(id)_getTransitionWindow;
-(BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
-(BOOL)_shouldDismissBanner;
@end

