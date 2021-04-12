/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
*/


@protocol AFUISiriViewControllerDelegate <NSObject>
@optional
-(void)siriViewController:(id)arg1 requestsDismissalWithReason:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)siriViewController:(id)arg1 requestsPresentation:(/*^block*/id)arg2;
-(void)siriViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3 launchOptions:(long long)arg4 replyHandler:(/*^block*/id)arg5;
-(void)siriViewController:(id)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg2;
-(void)siriViewControllerDidFinishDismissing:(id)arg1;
-(void)siriViewController:(id)arg1 presentedIntentWithBundleId:(id)arg2;
-(void)siriViewController:(id)arg1 requestsDismissal:(/*^block*/id)arg2;
-(void)dismissSiriViewController:(id)arg1 delayForTTS:(BOOL)arg2;
-(void)dismissSiriViewController:(id)arg1 delayForTTS:(BOOL)arg2 withDismissalReason:(unsigned long long)arg3;
-(void)siriViewController:(id)arg1 didEndSession:(id)arg2;
-(void)siriViewController:(id)arg1 didCompleteRequestWithError:(id)arg2;
-(void)siriSessionShouldExtendAudioSessionForImminentPhoneCall;
-(void)siriSessionShouldEndExtendAudioSessionForImminentPhoneCall;
-(void)siriViewController:(id)arg1 willStartTest:(id)arg2;
-(void)siriViewController:(id)arg1 didFinishTest:(id)arg2;
-(void)siriViewController:(id)arg1 failTest:(id)arg2 withReason:(id)arg3;
-(void)extendCurrentTTSRequested;
-(void)siriViewControllerSpeechRequestStartedFromSiriOrb;
-(void)siriViewControllerSpeechRequestCancelledFromSiriOrb;

@required
-(void)siriViewController:(id)arg1 didEncounterUnexpectedError:(id)arg2;
-(void)startGuidedAccessForSiriViewController:(id)arg1;
-(id)siriViewController:(id)arg1 willStartRequestWithOptions:(id)arg2;
-(void)userRelevantEventDidOccurInSiriViewController:(id)arg1;
-(BOOL)siriViewControllerShouldEndSession:(id)arg1;
-(void)siriViewControllerDidChangeVisibility:(id)arg1;
-(void)siriViewControllerSessionDidResetContext:(id)arg1;
-(void)siriViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(BOOL)arg2;
-(void)siriViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2;
-(void)siriViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(BOOL)siriViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(BOOL)arg4;
-(BOOL)siriViewController:(id)arg1 attemptUnlockWithPassword:(id)arg2;
-(void)siriViewController:(id)arg1 didHideStatusView:(BOOL)arg2;
-(void)siriViewController:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;
-(BOOL)siriViewControllerShouldSupportTextInput:(id)arg1;

@end

