/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class BKSDisplayRenderOverlay;

@interface SBUIStartupToHomescreenAnimationController : SBUIMainScreenAnimationController {

	BKSDisplayRenderOverlay* _persistentSnapshotOverlay;

}
-(id)animationSettings;
-(double)_animationDelay;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2 ;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(BOOL)_shouldDismissBanner;
@end

