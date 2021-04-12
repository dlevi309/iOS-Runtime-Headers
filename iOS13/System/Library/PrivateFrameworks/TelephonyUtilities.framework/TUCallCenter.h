/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/TUCallContainer.h>

@protocol OS_dispatch_queue;
@class TUCallServicesInterface, TUAudioDeviceController, TUVideoDeviceController, TURouteController, TUCallFilterController, CNContactStore, TUCallProviderManager, TUConversationManager, NSObject, NSString, NSArray, TUCall;

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
@property (nonatomic,copy,readonly) NSArray * callGroupsOnDefaultPairedDevice; 
+(id)sharedInstance;
+(id)sharedContactStore;
+(id)sharedInstanceWithQueue:(id)arg1 server:(id)arg2 shouldRegister:(BOOL)arg3 ;
+(id)callCenterWithQueue:(id)arg1 server:(id)arg2 shouldRegister:(BOOL)arg3 ;
+(id)callCenterWithQueue:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)debugDescription;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(NSArray *)currentCalls;
-(BOOL)isAmbiguous;
-(id)callsPassingTest:(/*^block*/id)arg1 ;
-(id)conferenceCall;
-(id)callPassingTest:(/*^block*/id)arg1 ;
-(TUCall *)incomingVideoCall;
-(TUCall *)activeVideoCall;
-(NSArray *)currentVideoCalls;
-(id)callPassingTest:(/*^block*/id)arg1 sortedUsingComparator:(/*^block*/id)arg2 ;
-(unsigned long long)currentCallCount;
-(TUCall *)incomingCall;
-(id)callWithStatus:(int)arg1 ;
-(unsigned long long)currentAudioAndVideoCallCount;
-(id)audioOrVideoCallWithStatus:(int)arg1 ;
-(unsigned long long)countOfCallsPassingTest:(/*^block*/id)arg1 ;
-(BOOL)anyCallPassesTest:(/*^block*/id)arg1 ;
-(BOOL)allCallsPassTest:(/*^block*/id)arg1 ;
-(NSArray *)currentAudioAndVideoCalls;
-(NSArray *)callsOnDefaultPairedDevice;
-(NSArray *)conferenceParticipantCalls;
-(id)callsWithStatus:(int)arg1 ;
-(id)audioAndVideoCallsWithStatus:(int)arg1 ;
-(id)callsWithGroupUUID:(id)arg1 ;
-(id)videoCallWithStatus:(int)arg1 ;
-(id)callWithUniqueProxyIdentifier:(id)arg1 ;
-(id)callWithCallUUID:(id)arg1 ;
-(id)displayedCallFromCalls:(id)arg1 ;
-(BOOL)allCallsAreOfService:(int)arg1 ;
-(NSArray *)incomingCalls;
-(NSArray *)displayedCalls;
-(NSArray *)displayedAudioAndVideoCalls;
-(NSArray *)callsHostedElsewhere;
-(NSArray *)callsWithAnEndpointElsewhere;
-(NSArray *)callsHostedOrAnEndpointElsewhere;
-(TUCall *)currentVideoCall;
-(unsigned long long)currentVideoCallCount;
-(unsigned long long)callCountOnDefaultPairedDevice;
-(BOOL)hasCurrentCalls;
-(BOOL)hasCurrentAudioCalls;
-(BOOL)hasCurrentVideoCalls;
-(BOOL)anyCallIsHostedOnCurrentDevice;
-(BOOL)anyCallIsEndpointOnCurrentDevice;
-(NSArray *)currentCallGroups;
-(NSArray *)callGroupsOnDefaultPairedDevice;
-(id)_allCalls;
-(id)displayedCall;
-(id)frontmostCall;
-(id)frontmostAudioOrVideoCall;
-(BOOL)existingCallsHaveMultipleProviders;
-(CGSize)localLandscapeAspectRatio;
-(CGSize)localPortraitAspectRatio;
-(void)setLocalLandscapeAspectRatio:(CGSize)arg1 ;
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 ;
-(void)launchAppForDialRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCallServicesInterface:(TUCallServicesInterface *)arg1 ;
-(id)callServicesClientCapabilities;
-(void)fetchCurrentCalls;
-(TURouteController *)pairedHostDeviceRouteController;
-(TUCallProviderManager *)providerManager;
-(void)joinConversationWithRequest:(id)arg1 ;
-(void)swapCalls;
-(void)disconnectCurrentCallAndActivateHeld;
-(void)disconnectAllCalls;
-(void)pullRelayingCallsFromClient;
-(void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1 ;
-(void)pushHostedCallsToDestination:(id)arg1 ;
-(void)pullHostedCallsFromPairedHostDevice;
-(void)willEnterBackgroundForAllCalls;
-(void)enteredBackgroundForAllCalls;
-(void)shouldSuppressInCallStatusBar:(BOOL)arg1 ;
-(id<TUCallContainerPrivate>)callContainer;
-(void)dialWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pullCallFromClientUsingHandoffActivityUserInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPairedHostDeviceRouteController:(TURouteController *)arg1 ;
-(void)registerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)answerWithRequest:(id)arg1 ;
-(TUCallServicesInterface *)callServicesInterface;
-(void)holdCall:(id)arg1 ;
-(void)unholdCall:(id)arg1 ;
-(TUAudioDeviceController *)audioDeviceController;
-(BOOL)isRelayCallingSupportedForProvider:(id)arg1 isVideo:(BOOL)arg2 ;
-(BOOL)_shouldPreferRelayOverDirectSecondaryCallingForRelayingCallingAvailability:(int)arg1 isRelayCallingSupported:(BOOL)arg2 isEmergencyCallbackPossible:(BOOL)arg3 ;
-(BOOL)_existingCallsAllowDialRequest:(id)arg1 allowVoiceWithData:(BOOL)arg2 ;
-(BOOL)_isEmergencyDialRequest:(id)arg1 ;
-(BOOL)isDirectCallingCurrentlyAvailableForProvider:(id)arg1 isVideo:(BOOL)arg2 ;
-(TUCallFilterController *)callFilterController;
-(BOOL)_isCallingAvailableOnSecondaryDeviceWithRelayCallingAvailability:(int)arg1 isProviderAvailable:(BOOL)arg2 isRelayAllowed:(BOOL)arg3 isEmergency:(BOOL)arg4 supportsBasebandCalling:(BOOL)arg5 shouldUseRelay:(BOOL*)arg6 ;
-(BOOL)_canDialWithRequest:(id)arg1 shouldUseRelay:(BOOL*)arg2 ;
-(id)_dialWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2 wantsHoldMusic:(BOOL)arg3 ;
-(void)endActiveAndAnswerCall:(id)arg1 ;
-(void)endHeldAndAnswerCall:(id)arg1 ;
-(void)disconnectCall:(id)arg1 withReason:(int)arg2 ;
-(void)updateCall:(id)arg1 withAnswerRequest:(id)arg2 ;
-(void)_preflightDisconnectForCalls:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)disconnectCallPreflight;
-(BOOL)isHoldAndAnswerAllowed;
-(BOOL)isEndAndAnswerAllowed;
-(TURouteController *)routeController;
-(BOOL)launchAppForJoinRequest:(id)arg1 ;
-(TUConversationManager *)conversationManager;
-(BOOL)isMergeable;
-(unsigned long long)_callGroupCountForCall:(id)arg1 withCall:(id)arg2 ;
-(TUVideoDeviceController *)videoDeviceController;
-(BOOL)shouldPreferRelayOverDirectSecondaryCallingForProvider:(id)arg1 isVideo:(BOOL)arg2 ;
-(BOOL)canDialWithRequest:(id)arg1 ;
-(id)dialWithRequest:(id)arg1 ;
-(void)applicationWillLaunchForStartCallInteraction:(id)arg1 ;
-(void)sendFieldModeDigits:(id)arg1 forProvider:(id)arg2 ;
-(void)answerCall:(id)arg1 ;
-(void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2 ;
-(void)answerCallWithHoldMusic:(id)arg1 ;
-(void)holdActiveAndAnswerCall:(id)arg1 ;
-(void)endActiveOrHeldAndAnswerCall:(id)arg1 ;
-(void)reportLocalPreviewStoppedForCall:(id)arg1 ;
-(void)resumeCall:(id)arg1 ;
-(void)groupCall:(id)arg1 withOtherCall:(id)arg2 ;
-(void)ungroupCall:(id)arg1 ;
-(void)disconnectCall:(id)arg1 ;
-(void)handleActionForWiredHeadsetMiddleButtonPress;
-(void)handleActionForWiredHeadsetMiddleButtonLongPress;
-(void)setTTYType:(int)arg1 forCall:(id)arg2 ;
-(void)pushRelayingCallsToHost;
-(void)pickRouteForRapportDeviceWithMediaSystemIdentifier:(id)arg1 effectiveIdentifier:(id)arg2 ;
-(id)joinConversationWithConversationRequest:(id)arg1 ;
-(void)enteredForegroundForCall:(id)arg1 ;
-(id)activeConversationForCall:(id)arg1 ;
-(BOOL)isSwappable;
-(BOOL)isHoldAllowed;
-(BOOL)isTakingCallsPrivateAllowed;
-(BOOL)isHardPauseAvailable;
-(BOOL)isSendToVoicemailAllowed;
-(BOOL)canMergeCalls;
-(BOOL)isAddCallAllowed;
-(BOOL)canGroupCall:(id)arg1 withCall:(id)arg2 ;
-(void)setAudioDeviceController:(TUAudioDeviceController *)arg1 ;
-(void)setVideoDeviceController:(TUVideoDeviceController *)arg1 ;
-(void)setRouteController:(TURouteController *)arg1 ;
-(void)setCallFilterController:(TUCallFilterController *)arg1 ;
-(void)setProviderManager:(TUCallProviderManager *)arg1 ;
-(void)setConversationManager:(TUConversationManager *)arg1 ;
-(void)setDisconnectCallPreflight:(id)arg1 ;
@end

