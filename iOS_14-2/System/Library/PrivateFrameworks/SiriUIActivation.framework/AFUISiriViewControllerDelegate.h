/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
*/


@protocol AFUISiriViewControllerDelegate <NSObject>
@optional
-(void)setShareHomeGesture:(BOOL)arg1;
-(void)setShouldDismissForSwipesOutsideContent:(BOOL)arg1;
-(void)resetGestureBehaviors;
-(void)setShouldPassTouchesThroughToSpringBoard:(BOOL)arg1;
-(void)setShouldDismissForTapsOutsideContent:(BOOL)arg1;
-(void)setShouldDismissForTapOutsideContent:(BOOL)arg1;
-(void)extendCurrentTTSRequested;
-(void)siriSessionShouldExtendAudioSessionForImminentPhoneCall;
-(void)siriSessionShouldEndExtendAudioSessionForImminentPhoneCall;
-(void)dismissSiriViewController:(id)arg1 delayForTTS:(BOOL)arg2 withDismissalReason:(unsigned long long)arg3;
-(void)siriViewController:(id)arg1 voiceActivationMaskViewIsVisible:(BOOL)arg2;
-(void)dismissSiriViewController:(id)arg1 delayForTTS:(BOOL)arg2;
-(void)siriViewControllerDidFinishDismissing:(id)arg1;
-(void)siriViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3 launchOptions:(long long)arg4 replyHandler:(/*^block*/id)arg5;
-(void)siriViewController:(id)arg1 willStartTest:(id)arg2;
-(void)siriViewController:(id)arg1 didFinishTest:(id)arg2;
-(void)siriViewController:(id)arg1 failTest:(id)arg2 withReason:(id)arg3;
-(void)siriViewController:(id)arg1 requestsPresentation:(/*^block*/id)arg2;
-(void)siriViewController:(id)arg1 requestsDismissalWithReason:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)siriViewController:(id)arg1 requestsDismissal:(/*^block*/id)arg2;
-(void)siriViewController:(id)arg1 presentedIntentWithBundleId:(id)arg2;
-(void)siriViewController:(id)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg2;
-(void)siriViewController:(id)arg1 sceneDidActivateWithIdentifier:(id)arg2;
-(void)siriViewControllerDidDeactivateScene:(id)arg1;
-(void)siriViewControllerSpeechRequestStartedFromSiriOrb;
-(void)siriViewControllerSpeechRequestCancelledFromSiriOrb;
-(void)siriViewController:(id)arg1 willProcessAppLaunchWithBundleIdentifier:(id)arg2;
-(void)siriViewController:(id)arg1 failedToLaunchAppWithBundleIdentifier:(id)arg2;
-(void)siriViewControllerDidChangeToListeningMode:(id)arg1;
-(void)siriViewController:(id)arg1 didEndSession:(id)arg2;
-(void)siriViewController:(id)arg1 didCompleteRequestWithError:(id)arg2;

@required
-(void)siriViewControllerDidChangeVisibility:(id)arg1;
-(void)siriViewController:(id)arg1 didEncounterUnexpectedError:(id)arg2;
-(void)siriViewController:(id)arg1 updateHomeAffordanceForBlurVisibilty:(BOOL)arg2;
-(void)startGuidedAccessForSiriViewController:(id)arg1;
-(void)userRelevantEventDidOccurInSiriViewController:(id)arg1;
-(void)siriViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(BOOL)arg2;
-(void)siriViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2;
-(void)siriViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(BOOL)siriViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(BOOL)arg4;
-(void)siriViewController:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;
-(void)siriViewController:(id)arg1 didHideStatusView:(BOOL)arg2;
-(id)siriViewController:(id)arg1 willStartRequestWithOptions:(id)arg2;
-(BOOL)siriViewControllerShouldSupportTextInput:(id)arg1;
-(BOOL)siriViewControllerShouldEndSession:(id)arg1;
-(BOOL)siriViewController:(id)arg1 attemptUnlockWithPassword:(id)arg2;
-(void)siriViewControllerSessionDidResetContext:(id)arg1;
-(void)siriViewController:(id)arg1 onboardingScreenContinueButtonTappedWithRequestOptions:(id)arg2;

@end

