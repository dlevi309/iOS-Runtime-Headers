/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <libobjc.A.dylib/AVCRemoteVideoClientDelegate.h>
#import <libobjc.A.dylib/TUMomentsControllerDelegate.h>
#import <libobjc.A.dylib/TUAudioFrequencyControllerDelegate.h>

@class NSString;

@interface ConversationKit.ConversationController : NSObject <AVCRemoteVideoClientDelegate, TUMomentsControllerDelegate, TUAudioFrequencyControllerDelegate> {

	??? localParticipant;
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
	??? conversationUUID;

}

@property (readonly,nonatomic) NSString * description; 
-(void)handleCameraZoomBecameAvailable:(id)arg1 ;
-(void)handleCameraZoomBecameUnavailable:(id)arg1 ;
-(void)handleLocalVideoPreviewFirstFrameArrived:(id)arg1 ;
-(void)handleScreenConnectionDidUpdate:(id)arg1 ;
-(void)remoteVideoClientDidReceiveFirstFrame:(id)arg1 ;
-(void)remoteVideoClient:(id)arg1 remoteVideoDidPause:(BOOL)arg2 ;
-(void)remoteVideoClient:(id)arg1 videoDidDegrade:(BOOL)arg2 ;
-(void)remoteVideoClient:(id)arg1 videoDidSuspend:(BOOL)arg2 ;
-(void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2 ;
-(void)momentsController:(id)arg1 didUpdateCapabilities:(id)arg2 forProvider:(id)arg3 ;
-(void)frequencyController:(id)arg1 audioPowerChanged:(float)arg2 forParticipantWithStreamToken:(long long)arg3 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
@end

