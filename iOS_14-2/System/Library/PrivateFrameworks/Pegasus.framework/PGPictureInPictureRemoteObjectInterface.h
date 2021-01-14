/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/


@protocol PGPictureInPictureRemoteObjectInterface <NSObject>
@required
-(oneway void)initializePictureInPictureWithControlsStyle:(long long)arg1 preferredContentSize:(CGSize)arg2 completionHandler:(/*^block*/id)arg3;
-(oneway void)setupStartAnimated:(BOOL)arg1 hostedWindowHostingHandle:(id)arg2 sceneSessionPersistentIdentifier:(id)arg3 preferredContentSize:(CGSize)arg4 initialInterfaceOrientation:(long long)arg5 initialLayerFrame:(CGRect)arg6 playbackState:(id)arg7 completionHandler:(/*^block*/id)arg8;
-(oneway void)startPictureInPictureAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)updateInitialLayerFrameForInteractiveTransitionAnimationUponBackgrounding:(CGRect)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(oneway void)updateSourceSceneSessionPersistentIdentifierForInteractiveTransitionAnimationUponBackgrounding:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(oneway void)updatePreferredContentSize:(CGSize)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(oneway void)checkActivePictureInPictureCancellationPolicyWithCompletion:(/*^block*/id)arg1;
-(oneway void)rotateContentContainer:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(oneway void)setupStopAnimated:(BOOL)arg1 needsApplicationActivation:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(oneway void)stopPictureInPictureAnimated:(BOOL)arg1 withFinalInterfaceOrientation:(long long)arg2 finalLayerFrame:(CGRect)arg3 completionHandler:(/*^block*/id)arg4;
-(oneway void)cleanupWithCompletionHandler:(/*^block*/id)arg1;
-(oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)updatePlaybackStateWithDiff:(id)arg1;
-(oneway void)stopPictureInPictureAndRestoreUserInterface;

@end

