/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SiriPresentationSpringBoardMainScreenViewControllerDelegate <SiriPresentationControllerDelegate>
@optional
-(void)siriPresentation:(id)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg2;

@required
-(void)screenWakeRequested;
-(void)screenWakeIdleTimerResetRequested;
-(BOOL)siriPresentation:(id)arg1 requestsDeviceUnlockWithPassword:(id)arg2;

@end

