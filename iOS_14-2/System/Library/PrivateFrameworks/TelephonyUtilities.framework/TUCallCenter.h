/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/TUCallContainer.h>

@protocol OS_dispatch_queue;
@class TUCallServicesInterface, TUAudioDeviceController, TUVideoDeviceController, TURouteController, TUCallFilterController, CNContactStore, TUCallProviderManager, TUConversationManager, NSObject, NSArray, TUCall, NSString;

@interface TUCallCenter : NSObject <TUCallContainer> {

	TUCallServicesInterface* _callServicesInterface;
	TUAudioDeviceController* _audioDeviceController;
	TUVideoDeviceController* _videoDeviceController;
	TURouteController* _routeController;
	TURouteController* _pairedHostDeviceRouteController;
	TUCallFilterController* _callFilterController;
	CNContactStore* _contactStore;
	TUCallProviderManager* _providerManager;
	TUConversationManager* _conversationManager;
	/*^block*/id _disconnectCallPreflight;
	NSObject*<OS_dispatch_queue> _queue;
	CGSize _localLandscapeAspectRatio;
	CGSize _localPortraitAspectRatio;

}

@property (nonatomic,retain) TUCallServicesInterface * callServicesInterface;                        //@synthesize callServicesInterface=_callServicesInterface - In the implementation block
@property (nonatomic,retain) TUAudioDeviceController * audioDeviceController;                        //@synthesize audioDeviceController=_audioDeviceController - In the implementation block
@property (nonatomic,retain) TUVideoDeviceController * videoDeviceController;                        //@synthesize videoDeviceController=_videoDeviceController - In the implementation block
@property (nonatomic,retain) TURouteController * routeController;                                    //@synthesize routeController=_routeController - In the implementation block
@property (nonatomic,retain) TURouteController * pairedHostDeviceRouteController;                    //@synthesize pairedHostDeviceRouteController=_pairedHostDeviceRouteController - In the implementation block
@property (nonatomic,retain) TUCallFilterController * callFilterController;                          //@synthesize callFilterController=_callFilterController - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                          //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) TUCallProviderManager * providerManager;                                //@synthesize providerManager=_providerManager - In the implementation block
@property (nonatomic,retain) TUConversationManager * conversationManager;                            //@synthesize conversationManager=_conversationManager - In the implementation block
@property (assign,nonatomic) CGSize localLandscapeAspectRatio;                                       //@synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio - In the implementation block
@property (assign,nonatomic) CGSize localPortraitAspectRatio;                                        //@synthesize localPortraitAspectRatio=_localPortraitAspectRatio - In the implementation block
@property (nonatomic,copy) id disconnectCallPreflight;                                               //@synthesize disconnectCallPreflight=_disconnectCallPreflight - In the implementation block
@property (nonatomic,readonly) id<TUCallContainerPrivate> callContainer; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) BOOL canMergeCalls; 
@property (getter=isAddCallAllowed,nonatomic,readonly) BOOL addCallAllowed; 
@property (getter=isAmbiguous,nonatomic,readonly) BOOL ambiguous; 
@property (getter=isEndAndAnswerAllowed,nonatomic,readonly) BOOL endAndAnswerAllowed; 
@property (getter=isHoldAndAnswerAllowed,nonatomic,readonly) BOOL holdAndAnswerAllowed; 
@property (nonatomic,copy,readonly) NSArray * currentCalls; 
@property (nonatomic,copy,readonly) NSArray * currentVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * currentAudioAndVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * incomingCalls; 
@property (nonatomic,copy,readonly) NSArray * displayedCalls; 
@property (nonatomic,copy,readonly) NSArray * displayedAudioAndVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * conferenceParticipantCalls; 
@property (nonatomic,copy,readonly) NSArray * callsHostedElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsWithAnEndpointElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsHostedOrAnEndpointElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsOnDefaultPairedDevice; 
@property (nonatomic,readonly) TUCall * incomingCall; 
@property (nonatomic,readonly) TUCall * incomingVideoCall; 
@property (nonatomic,readonly) TUCall * activeVideoCall; 
@property (nonatomic,readonly) TUCall * currentVideoCall; 
@property (nonatomic,readonly) unsigned long long currentCallCount; 
@property (nonatomic,readonly) unsigned long long currentVideoCallCount; 
@property (nonatomic,readonly) unsigned long long currentAudioAndVideoCallCount; 
@property (nonatomic,readonly) unsigned long long callCountOnDefaultPairedDevice; 
@property (nonatomic,readonly) BOOL hasCurrentCalls; 
@property (nonatomic,readonly) BOOL hasCurrentAudioCalls; 
@property (nonatomic,readonly) BOOL hasCurrentVideoCalls; 
@property (nonatomic,readonly) BOOL anyCallIsHostedOnCurrentDevice; 
@property (nonatomic,readonly) BOOL anyCallIsEndpointOnCurrentDevice; 
@property (nonatomic,copy,readonly) NSArray * currentCallGroups; 
@property (nonatomic,copy,readonly) NSArray * currentAudioAndVideoCallGroups; 
@property (nonatomic,copy,readonly) NSArray * callGroupsOnDefaultPairedDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)callCenterWithQueue:(id)arg1 server:(id)arg2 shouldRegister:(BOOL)arg3 ;
+(id)callCenterWithQueue:(id)arg1 ;
+(id)sharedInstance;
+(id)sharedContactStore;
+(id)sharedInstanceWithQueue:(id)arg1 server:(id)arg2 shouldRegister:(BOOL)arg3 ;
-(NSArray *)currentVideoCalls;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(BOOL)anyCallIsHostedOnCurrentDevice;
-(id)conferenceCall;
-(BOOL)hasCurrentVideoCalls;
-(TUCall *)activeVideoCall;
-(id)callWithUniqueProxyIdentifier:(id)arg1 ;
-(id)displayedCall;
-(id)frontmostCall;
-(unsigned long long)currentVideoCallCount;
-(NSArray *)callsHostedOrAnEndpointElsewhere;
-(id)videoCallWithStatus:(int)arg1 ;
-(id)callsWithGroupUUID:(id)arg1 ;
-(NSArray *)currentCalls;
-(BOOL)hasCurrentCalls;
-(unsigned long long)currentAudioAndVideoCallCount;
-(NSArray *)callsWithAnEndpointElsewhere;
-(BOOL)anyCallPassesTest:(/*^block*/id)arg1 ;
-(id)callPassingTest:(/*^block*/id)arg1 ;
-(id)_allCalls;
-(NSArray *)callsHostedElsewhere;
-(id)audioOrVideoCallWithStatus:(int)arg1 ;
-(id)callsPassingTest:(/*^block*/id)arg1 ;
-(TUCall *)incomingVideoCall;
-(TUCall *)incomingCall;
-(void)setDisconnectCallPreflight:(id)arg1 ;
-(id)callsWithStatus:(int)arg1 ;
-(id)displayedCallFromCalls:(id)arg1 ;
-(NSArray *)currentAudioAndVideoCalls;
-(NSArray *)conferenceParticipantCalls;
-(NSArray *)displayedCalls;
-(unsigned long long)callCountOnDefaultPairedDevice;
-(NSArray *)currentCallGroups;
-(id)initWithQueue:(id)arg1 ;
-(TUCall *)currentVideoCall;
-(BOOL)allCallsPassTest:(/*^block*/id)arg1 ;
-(id)callWithStatus:(int)arg1 ;
-(NSArray *)displayedAudioAndVideoCalls;
-(id)callWithCallUUID:(id)arg1 ;
-(NSArray *)currentAudioAndVideoCallGroups;
-(BOOL)hasCurrentAudioCalls;
-(id)callPassingTest:(/*^block*/id)arg1 sortedUsingComparator:(/*^block*/id)arg2 ;
-(void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1 ;
-(CNContactStore *)contactStore;
-(BOOL)_existingCallsAllowDialRequest:(id)arg1 allowVoiceWithData:(BOOL)arg2 ;
-(void)reportLocalPreviewStoppedForCall:(id)arg1 ;
-(id)_dialWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enteredForegroundForCall:(id)arg1 ;
-(void)pushHostedCallsToDestination:(id)arg1 ;
-(TUAudioDeviceController *)audioDeviceController;
-(CGSize)localLandscapeAspectRatio;
-(id)init;
-(TUVideoDeviceController *)videoDeviceController;
-(void)ungroupCall:(id)arg1 ;
-(BOOL)_isEmergencyDialRequest:(id)arg1 ;
-(BOOL)isEndAndAnswerAllowed;
-(void)sendFieldModeDigits:(id)arg1 forProvider:(id)arg2 ;
-(TURouteController *)routeController;
-(void)applicationWillLaunchForStartCallInteraction:(id)arg1 ;
-(id<TUCallContainerPrivate>)callContainer;
-(void)shouldAllowRingingCallStatusIndicator:(BOOL)arg1 ;
-(void)dialWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isTakingCallsPrivateAllowed;
-(BOOL)shouldPreferRelayOverDirectSecondaryCallingForProvider:(id)arg1 isVideo:(BOOL)arg2 ;
-(void)disconnectCall:(id)arg1 withReason:(int)arg2 ;
-(void)groupCall:(id)arg1 withOtherCall:(id)arg2 ;
-(void)activateInCallUIWithActivityContinuationIdentifier:(id)arg1 ;
-(TUCallProviderManager *)providerManager;
-(void)shouldSuppressInCallStatusBar:(BOOL)arg1 ;
-(BOOL)isAddCallAllowed;
-(void)unholdCall:(id)arg1 ;
-(void)disconnectCall:(id)arg1 ;
-(NSString *)debugDescription;
-(void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2 ;
-(BOOL)_shouldPreferRelayOverDirectSecondaryCallingForRelayingCallingAvailability:(int)arg1 isRelayCallingSupported:(BOOL)arg2 isEmergencyCallbackPossible:(BOOL)arg3 ;
-(BOOL)_canDialWithRequest:(id)arg1 shouldUseRelay:(BOOL*)arg2 ;
-(void)setAudioDeviceController:(TUAudioDeviceController *)arg1 ;
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 ;
-(id)joinConversationWithConversationRequest:(id)arg1 ;
-(BOOL)_isCallingAvailableOnSecondaryDeviceWithRelayCallingAvailability:(int)arg1 isProviderAvailable:(BOOL)arg2 isRelayAllowed:(BOOL)arg3 isEmergency:(BOOL)arg4 supportsBasebandCalling:(BOOL)arg5 shouldUseRelay:(BOOL*)arg6 ;
-(BOOL)canDialWithRequest:(id)arg1 ;
-(void)enteredBackgroundForAllCalls;
-(void)pickRouteForRapportDeviceWithMediaSystemIdentifier:(id)arg1 effectiveIdentifier:(id)arg2 ;
-(void)setTTYType:(int)arg1 forCall:(id)arg2 ;
-(BOOL)isMergeable;
-(void)setCallFilterController:(TUCallFilterController *)arg1 ;
-(void)handleActionForWiredHeadsetMiddleButtonPress;
-(void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2 wantsHoldMusic:(BOOL)arg3 ;
-(void)swapCalls;
-(void)pullRelayingCallsFromClient;
-(void)answerCall:(id)arg1 ;
-(void)setConversationManager:(TUConversationManager *)arg1 ;
-(void)endActiveAndAnswerCall:(id)arg1 ;
-(unsigned long long)_callGroupCountForCall:(id)arg1 withCall:(id)arg2 ;
-(void)endActiveOrHeldAndAnswerCall:(id)arg1 ;
-(NSArray *)callGroupsOnDefaultPairedDevice;
-(id)callServicesClientCapabilities;
-(BOOL)existingCallsHaveMultipleProviders;
-(void)setProviderManager:(TUCallProviderManager *)arg1 ;
-(void)joinConversationWithRequest:(id)arg1 ;
-(TUConversationManager *)conversationManager;
-(BOOL)anyCallIsEndpointOnCurrentDevice;
-(BOOL)isSendToVoicemailAllowed;
-(BOOL)isHardPauseAvailable;
-(void)endHeldAndAnswerCall:(id)arg1 ;
-(void)holdActiveAndAnswerCall:(id)arg1 ;
-(BOOL)allCallsAreOfService:(int)arg1 ;
-(void)answerCallWithHoldMusic:(id)arg1 ;
-(TUCallServicesInterface *)callServicesInterface;
-(BOOL)isHoldAllowed;
-(BOOL)canGroupCall:(id)arg1 withCall:(id)arg2 ;
-(id)disconnectCallPreflight;
-(BOOL)launchAppForJoinRequest:(id)arg1 ;
-(void)pullHostedCallsFromPairedHostDevice;
-(void)disconnectCurrentCallAndActivateHeld;
-(unsigned long long)currentCallCount;
-(void)handleActionForWiredHeadsetMiddleButtonPressWithSourceIdentifier:(id)arg1 allowBluetoothAnswerWithoutDowngrade:(BOOL)arg2 shouldForceDowngradeToAudio:(BOOL)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)updateCall:(id)arg1 withAnswerRequest:(id)arg2 ;
-(unsigned long long)countOfCallsPassingTest:(/*^block*/id)arg1 ;
-(void)answerWithRequest:(id)arg1 ;
-(void)holdCall:(id)arg1 ;
-(BOOL)canMergeCalls;
-(TUCallFilterController *)callFilterController;
-(BOOL)isAmbiguous;
-(void)setLocalLandscapeAspectRatio:(CGSize)arg1 ;
-(id)dialWithRequest:(id)arg1 ;
-(void)pushRelayingCallsToHost;
-(BOOL)isDirectCallingCurrentlyAvailableForProvider:(id)arg1 isVideo:(BOOL)arg2 ;
-(BOOL)isHoldAndAnswerAllowed;
-(void)launchAppForDialRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pullCallFromClientUsingHandoffActivityUserInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isSwappable;
-(void)fetchCurrentCalls;
-(void)_preflightDisconnectForCalls:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setRouteController:(TURouteController *)arg1 ;
-(NSArray *)callsOnDefaultPairedDevice;
-(TURouteController *)pairedHostDeviceRouteController;
-(CGSize)localPortraitAspectRatio;
-(void)disconnectAllCalls;
-(BOOL)isRelayCallingSupportedForProvider:(id)arg1 isVideo:(BOOL)arg2 ;
-(void)resumeCall:(id)arg1 ;
-(NSArray *)incomingCalls;
-(id)audioAndVideoCallsWithStatus:(int)arg1 ;
-(void)setPairedHostDeviceRouteController:(TURouteController *)arg1 ;
-(void)willEnterBackgroundForAllCalls;
-(id)frontmostAudioOrVideoCall;
-(void)registerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)activeConversationForCall:(id)arg1 ;
-(void)setVideoDeviceController:(TUVideoDeviceController *)arg1 ;
-(void)handleActionForWiredHeadsetMiddleButtonLongPress;
-(void)setCallServicesInterface:(TUCallServicesInterface *)arg1 ;
@end

