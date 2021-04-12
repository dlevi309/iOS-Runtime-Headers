/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <libobjc.A.dylib/TUAudioFrequencyControllerDelegate.h>
#import <libobjc.A.dylib/TUMomentsControllerDelegate.h>
#import <libobjc.A.dylib/AVCRemoteVideoClientDelegate.h>

@class NSString;

@interface ConversationKit.ConversationController : NSObject <TUAudioFrequencyControllerDelegate, TUMomentsControllerDelegate, AVCRemoteVideoClientDelegate> {

	 remoteParticipants;
	 includeLocalParticipantInVisibleParticipants;
	 carPlayDisconnectRequiresLocalVideoEnable;
	 audioFrequencyController;
	 audioCallbackQueue;
	 $__lazy_storage_$_momentsController;
	 lastRegisteredMomentsProvider;
	 blockedCallerLookupQueue;
	 recentPresentationContexts;
	 scheduledIsChangingMirroredVideoResetDates;
	 conversationState;
	 deviceOrientation;
	 broadcastingState;
	 didAddVisibleParticipant;
	 didRemoveVisibleParticipant;
	 didUpdateVisibleParticipant;
	 visibleParticipantDidBecomeActive;
	 didStartVideoForVisibleParticipant;
	 participantsMediaPrioritiesDidChange;
	 participantAudioPowerDidChange;
	 audioRouteDidChange;
	 cameraZoomAvailabiltyDidChange;
	 carPlayConnectedDidChange;
	 didUpdateLocalParticipant;
	 didUpdateRecordingLocalVideo;
	 didStartVideoForLocalParticipant;
	 conversationStateDidChange;
	 blockedParticipantsAdded;
	 blocklistCheckedHandles;
	 needsUserConfirmationForBlockedCaller;
	 enableVideoOnJoin;
	 participantMediaProviderCreator;
	 callCenter;
	 call;
	 blockedCallerChecker;
	 localVideoRecordingTransactionID;

}

@property (readonly,nonatomic) NSString * description; 
-(void)remoteVideoClientDidReceiveFirstFrame:(id)arg1 ;
-(void)remoteVideoClient:(id)arg1 remoteVideoDidPause:(BOOL)arg2 ;
-(void)remoteVideoClient:(id)arg1 videoDidDegrade:(BOOL)arg2 ;
-(void)remoteVideoClient:(id)arg1 videoDidSuspend:(BOOL)arg2 ;
-(void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2 ;
-(void)momentsController:(id)arg1 didUpdateCapabilities:(id)arg2 forProvider:(id)arg3 ;
-(void)frequencyController:(id)arg1 audioPowerChanged:(float)arg2 forParticipantWithStreamToken:(long long)arg3 ;
-(void)handleLocalVideoPreviewFirstFrameArrived:(id)arg1 ;
-(void)handleSendingVideoChanged:(id)arg1 ;
-(void)handleCameraZoomBecameAvailable:(id)arg1 ;
-(void)handleCameraZoomBecameUnavailable:(id)arg1 ;
-(void)handleScreenConnectionDidUpdate:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)dealloc;
@end

