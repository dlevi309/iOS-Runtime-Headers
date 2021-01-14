/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SiriPresentationSpringBoardMainScreenViewControllerDelegate <SiriPresentationControllerDelegate>
@optional
-(void)siriPresentation:(id)arg1 didUpdateHomeGestureSharing:(BOOL)arg2;
-(void)siriPresentation:(id)arg1 didUpdateShouldDismissForSwipesOutsideContent:(BOOL)arg2;
-(void)siriPresentation:(id)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg2;
-(void)siriPresentation:(id)arg1 didUpdateShouldDismissForTapsOutsideContent:(BOOL)arg2;
-(void)siriPresentation:(id)arg1 didUpdateShouldPassTouchesThroughToSpringBoard:(BOOL)arg2;
-(void)siriPresentation:(id)arg1 didUpdateShouldDismissForTapOutsideContentTo:(BOOL)arg2;

@required
-(void)screenWakeRequested;
-(void)screenWakeIdleTimerResetRequested;
-(BOOL)siriPresentation:(id)arg1 requestsDeviceUnlockWithPassword:(id)arg2;

@end

