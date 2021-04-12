/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBSceneLayoutAnimationWrapperView, BKSDisplayRenderOverlay;

@interface SBUIStartupToUserSetupAppZoomInAnimationController : SBUIMainScreenAnimationController {

	SBSceneLayoutAnimationWrapperView* _layoutAnimationWrapperView;
	BKSDisplayRenderOverlay* _persistentSnapshotOverlay;

}
-(id)animationSettings;
-(void)_startAnimation;
-(void)_setHidden:(BOOL)arg1 ;
-(void)_prepareAnimation;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(BOOL)_shouldDismissBanner;
-(id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2 ;
-(void)_cleanupAnimation;
-(id)_getTransitionWindow;
-(BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
@end

