/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSDate, NSString, TUCallModel, TUCallNotificationManager, TUProxyCall, NSObject, TUCallServicesInterface, TUVideoCallAttributes, NSDictionary, NSUUID, TUCallProvider, TUSenderIdentity, TUCallDisplayContext, NSSet, TUCallCenter, TUHandle, NSData, TUDialRequest;

@interface TUCall : NSObject <NSSecureCoding> {

	BOOL _endpointOnCurrentDevice;
	BOOL _shouldSuppressRingtone;
	BOOL _wantsHoldMusic;
	BOOL _wasDialAssisted;
	BOOL _supportsRecents;
	BOOL _hasUpdatedAudio;
	BOOL _video;
	BOOL _ringtoneSuppressedRemotely;
	BOOL _wasPulledToCurrentDevice;
	int _disconnectedReason;
	int _faceTimeIDStatus;
	int _filteredOutReason;
	int _transitionStatus;
	int _hardPauseDigitsState;
	int _ttyType;
	NSDate* _dateCreated;
	NSDate* _dateAnsweredOrDialed;
	NSDate* _dateSentInvitation;
	NSDate* _dateStartedConnecting;
	NSDate* _dateConnected;
	NSDate* _dateEnded;
	NSString* _uniqueProxyIdentifier;
	NSString* _sourceIdentifier;
	TUCallModel* _model;
	TUCallNotificationManager* _callNotificationManager;
	TUProxyCall* _comparativeCall;
	NSObject*<OS_dispatch_queue> _queue;
	TUCallServicesInterface* _callServicesInterface;
	TUVideoCallAttributes* _videoCallAttributes;
	long long _verificationStatus;
	long long _priority;
	long long _provisionalHoldStatus;
	NSString* _isoCountryCode;
	long long _soundRegion;
	NSDictionary* _providerContext;
	double _hostCreationTime;
	double _hostMessageSendTime;
	double _clientMessageReceiveTime;
	NSString* _hardPauseDigits;
	CGSize _remoteScreenAspectRatio;

}

@property (nonatomic,copy) NSString * uniqueProxyIdentifier;                                             //@synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier - In the implementation block
@property (nonatomic,readonly) TUCallNotificationManager * callNotificationManager;                      //@synthesize callNotificationManager=_callNotificationManager - In the implementation block
@property (nonatomic,retain) TUProxyCall * comparativeCall;                                              //@synthesize comparativeCall=_comparativeCall - In the implementation block
@property (assign,nonatomic) int filteredOutReason;                                                      //@synthesize filteredOutReason=_filteredOutReason - In the implementation block
@property (assign,nonatomic) BOOL supportsRecents;                                                       //@synthesize supportsRecents=_supportsRecents - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                         //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) TUCallServicesInterface * callServicesInterface;                     //@synthesize callServicesInterface=_callServicesInterface - In the implementation block
@property (nonatomic,readonly) BOOL prefersExclusiveAccessToCellularNetwork; 
@property (nonatomic,retain) TUVideoCallAttributes * videoCallAttributes;                                //@synthesize videoCallAttributes=_videoCallAttributes - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * localSenderIdentityAccountUUID; 
@property (nonatomic,retain) NSDate * dateAnsweredOrDialed;                                              //@synthesize dateAnsweredOrDialed=_dateAnsweredOrDialed - In the implementation block
@property (nonatomic,retain) NSDate * dateSentInvitation;                                                //@synthesize dateSentInvitation=_dateSentInvitation - In the implementation block
@property (nonatomic,retain) NSDate * dateStartedConnecting;                                             //@synthesize dateStartedConnecting=_dateStartedConnecting - In the implementation block
@property (nonatomic,retain) NSDate * dateConnected;                                                     //@synthesize dateConnected=_dateConnected - In the implementation block
@property (nonatomic,retain) NSDate * dateEnded;                                                         //@synthesize dateEnded=_dateEnded - In the implementation block
@property (assign,nonatomic) long long verificationStatus;                                               //@synthesize verificationStatus=_verificationStatus - In the implementation block
@property (assign,nonatomic) long long priority;                                                         //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueProxyIdentifierUUID; 
@property (nonatomic,readonly) TUCallProvider * backingProvider; 
@property (nonatomic,readonly) TUCallProvider * displayProvider; 
@property (assign,nonatomic) long long provisionalHoldStatus;                                            //@synthesize provisionalHoldStatus=_provisionalHoldStatus - In the implementation block
@property (assign,nonatomic) int disconnectedReason;                                                     //@synthesize disconnectedReason=_disconnectedReason - In the implementation block
@property (nonatomic,copy) NSString * sourceIdentifier;                                                  //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * isoCountryCode;                                                    //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * callHistoryIdentifier; 
@property (nonatomic,readonly) int callStatus; 
@property (assign,nonatomic) int transitionStatus;                                                       //@synthesize transitionStatus=_transitionStatus - In the implementation block
@property (assign,nonatomic) int faceTimeIDStatus;                                                       //@synthesize faceTimeIDStatus=_faceTimeIDStatus - In the implementation block
@property (assign,nonatomic) BOOL hasUpdatedAudio;                                                       //@synthesize hasUpdatedAudio=_hasUpdatedAudio - In the implementation block
@property (assign,nonatomic) long long soundRegion;                                                      //@synthesize soundRegion=_soundRegion - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisplayLocationIfAvailable; 
@property (nonatomic,readonly) NSString * reminderString; 
@property (assign,getter=isVideo,nonatomic) BOOL video;                                                  //@synthesize video=_video - In the implementation block
@property (assign,nonatomic) BOOL wantsHoldMusic;                                                        //@synthesize wantsHoldMusic=_wantsHoldMusic - In the implementation block
@property (assign,getter=isEndpointOnCurrentDevice,nonatomic) BOOL endpointOnCurrentDevice;              //@synthesize endpointOnCurrentDevice=_endpointOnCurrentDevice - In the implementation block
@property (getter=isSOS,nonatomic,readonly) BOOL sos; 
@property (getter=isRemoteUplinkMuted,nonatomic,readonly) BOOL remoteUplinkMuted; 
@property (nonatomic,readonly) float remoteMeterLevel; 
@property (nonatomic,readonly) float localMeterLevel; 
@property (nonatomic,copy,readonly) NSUUID * localSenderIdentityUUID; 
@property (nonatomic,copy,readonly) TUSenderIdentity * localSenderIdentity; 
@property (assign,nonatomic) BOOL shouldSuppressRingtone;                                                //@synthesize shouldSuppressRingtone=_shouldSuppressRingtone - In the implementation block
@property (assign,nonatomic) BOOL ringtoneSuppressedRemotely;                                            //@synthesize ringtoneSuppressedRemotely=_ringtoneSuppressedRemotely - In the implementation block
@property (getter=isWiFiCall,nonatomic,readonly) BOOL wiFiCall; 
@property (getter=isVoIPCall,nonatomic,readonly) BOOL voipCall; 
@property (nonatomic,readonly) NSDictionary * providerContext;                                           //@synthesize providerContext=_providerContext - In the implementation block
@property (nonatomic,readonly) long long faceTimeTransportType; 
@property (nonatomic,readonly) NSDictionary * callStats; 
@property (nonatomic,readonly) NSString * endedErrorString; 
@property (nonatomic,readonly) NSString * endedReasonString; 
@property (getter=isMediaStalled,nonatomic,readonly) BOOL mediaStalled; 
@property (getter=isVideoDegraded,nonatomic,readonly) BOOL videoDegraded; 
@property (getter=isVideoPaused,nonatomic,readonly) BOOL videoPaused; 
@property (getter=isVideoMirrored,nonatomic,readonly) BOOL videoMirrored; 
@property (nonatomic,readonly) long long videoStreamToken; 
@property (nonatomic,readonly) long long inputAudioPowerSpectrumToken; 
@property (nonatomic,readonly) long long outputAudioPowerSpectrumToken; 
@property (assign,nonatomic) BOOL requiresRemoteVideo; 
@property (nonatomic,readonly) CGSize remoteAspectRatio; 
@property (nonatomic,readonly) CGRect remoteVideoContentRect; 
@property (nonatomic,readonly) long long cameraType; 
@property (nonatomic,readonly) long long remoteCameraOrientation; 
@property (nonatomic,readonly) long long remoteScreenOrientation; 
@property (nonatomic,readonly) CGSize remoteScreenAspectRatio;                                           //@synthesize remoteScreenAspectRatio=_remoteScreenAspectRatio - In the implementation block
@property (nonatomic,readonly) int callRelaySupport; 
@property (nonatomic,readonly) BOOL isSendingAudio; 
@property (assign,nonatomic) BOOL isSendingVideo; 
@property (nonatomic,readonly) BOOL isActive; 
@property (getter=isThirdPartyVideo,nonatomic,readonly) BOOL thirdPartyVideo; 
@property (nonatomic,copy,readonly) NSDictionary * endedReasonUserInfo; 
@property (assign,nonatomic) double hostCreationTime;                                                    //@synthesize hostCreationTime=_hostCreationTime - In the implementation block
@property (assign,nonatomic) double hostMessageSendTime;                                                 //@synthesize hostMessageSendTime=_hostMessageSendTime - In the implementation block
@property (assign,nonatomic) double clientMessageReceiveTime;                                            //@synthesize clientMessageReceiveTime=_clientMessageReceiveTime - In the implementation block
@property (assign,nonatomic) BOOL wasPulledToCurrentDevice;                                              //@synthesize wasPulledToCurrentDevice=_wasPulledToCurrentDevice - In the implementation block
@property (assign,nonatomic) int hardPauseDigitsState;                                                   //@synthesize hardPauseDigitsState=_hardPauseDigitsState - In the implementation block
@property (nonatomic,copy) NSString * hardPauseDigits;                                                   //@synthesize hardPauseDigits=_hardPauseDigits - In the implementation block
@property (nonatomic,readonly) NSString * hardPauseDigitsDisplayString; 
@property (nonatomic,copy) TUCallModel * model;                                                          //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) TUCallDisplayContext * displayContext; 
@property (nonatomic,readonly) BOOL shouldSuppressInCallUI; 
@property (getter=isMutuallyExclusiveCall,nonatomic,readonly) BOOL mutuallyExclusiveCall; 
@property (getter=isConversation,nonatomic,readonly) BOOL conversation; 
@property (nonatomic,copy,readonly) NSSet * remoteParticipantHandles; 
@property (nonatomic,readonly) BOOL wantsStagingArea; 
@property (assign,nonatomic) int ttyType;                                                                //@synthesize ttyType=_ttyType - In the implementation block
@property (nonatomic,__weak,readonly) TUCallCenter * callCenter; 
@property (nonatomic,copy,readonly) NSString * suggestedDisplayName; 
@property (nonatomic,readonly) BOOL wasDeclined; 
@property (nonatomic,readonly) TUCallProvider * provider; 
@property (nonatomic,readonly) int service; 
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) BOOL statusIsProvisional; 
@property (getter=isHostedOnCurrentDevice,nonatomic,readonly) BOOL hostedOnCurrentDevice; 
@property (nonatomic,readonly) BOOL shouldPlayDTMFTone; 
@property (getter=isRTT,nonatomic,readonly) BOOL rtt; 
@property (getter=isTTY,nonatomic,readonly) BOOL tty; 
@property (nonatomic,readonly) BOOL supportsTTYWithVoice; 
@property (nonatomic,copy,readonly) NSString * audioCategory; 
@property (nonatomic,copy,readonly) NSString * audioMode; 
@property (nonatomic,readonly) BOOL needsManualInCallSounds; 
@property (getter=isVoicemail,nonatomic,readonly) BOOL voicemail; 
@property (nonatomic,readonly) BOOL isOnHold; 
@property (nonatomic,readonly) NSDate * dateCreated;                                                     //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,readonly) BOOL hasSentInvitation; 
@property (getter=isConnecting,nonatomic,readonly) BOOL connecting; 
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (getter=isOutgoing,nonatomic,readonly) BOOL outgoing; 
@property (getter=isIncoming,nonatomic,readonly) BOOL incoming; 
@property (getter=isBlocked,nonatomic,readonly) BOOL blocked; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,copy,readonly) NSUUID * callGroupUUID; 
@property (getter=isConferenced,nonatomic,readonly) BOOL conferenced; 
@property (assign,getter=isUplinkMuted,nonatomic) BOOL uplinkMuted; 
@property (assign,getter=isDownlinkMuted,nonatomic) BOOL downlinkMuted; 
@property (nonatomic,copy,readonly) NSString * destinationID; 
@property (nonatomic,copy,readonly) NSString * contactIdentifier; 
@property (nonatomic,readonly) TUHandle * handle; 
@property (nonatomic,readonly) int abUID; 
@property (nonatomic,copy,readonly) NSString * callUUID; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * displayFirstName; 
@property (nonatomic,copy,readonly) NSString * companyName; 
@property (nonatomic,copy,readonly) NSString * callerNameFromNetwork; 
@property (nonatomic,copy,readonly) NSString * localizedLabel; 
@property (nonatomic,readonly) double callDuration; 
@property (nonatomic,copy,readonly) NSString * callDurationString; 
@property (assign,nonatomic) BOOL wasDialAssisted;                                                       //@synthesize wasDialAssisted=_wasDialAssisted - In the implementation block
@property (getter=isEmergencyCall,nonatomic,readonly) BOOL emergencyCall; 
@property (getter=isEmergency,nonatomic,readonly) BOOL emergency; 
@property (getter=isUsingBaseband,nonatomic,readonly) BOOL usingBaseband; 
@property (nonatomic,readonly) NSData * localFrequency; 
@property (nonatomic,readonly) NSData * remoteFrequency; 
@property (nonatomic,copy,readonly) TUDialRequest * dialRequestForRedial; 
@property (nonatomic,readonly) BOOL supportsDTMFTones; 
+(BOOL)supportsSecureCoding;
+(id)_supplementalDialTelephonyCallStringForLocString:(id)arg1 destination:(id)arg2 isPhoneNumber:(BOOL)arg3 includeFaceTimeAudio:(BOOL)arg4 ;
+(id)supplementalDialTelephonyCallStringForDestination:(id)arg1 isPhoneNumber:(BOOL)arg2 ;
+(id)supplementalDialTelephonyCallString;
+(id)faceTimeSupplementalDialTelephonyCallStringIncludingFTA:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TUHandle *)handle;
-(BOOL)isActive;
-(int)status;
-(long long)priority;
-(NSString *)displayName;
-(void)setPriority:(long long)arg1 ;
-(BOOL)isBlocked;
-(TUCallModel *)model;
-(void)setModel:(TUCallModel *)arg1 ;
-(long long)cameraType;
-(NSString *)contactIdentifier;
-(NSString *)isoCountryCode;
-(int)callStatus;
-(int)service;
-(BOOL)isIncoming;
-(TUCallProvider *)provider;
-(double)startTime;
-(BOOL)isVideo;
-(void)hold;
-(TUCallDisplayContext *)displayContext;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(double)callDuration;
-(NSString *)sourceIdentifier;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(BOOL)isOutgoing;
-(BOOL)isConnected;
-(BOOL)setMuted:(BOOL)arg1 ;
-(NSString *)destinationID;
-(NSDate *)dateCreated;
-(BOOL)isSOS;
-(BOOL)isConnecting;
-(BOOL)isMuted;
-(NSString *)localizedLabel;
-(NSString *)companyName;
-(NSString *)audioCategory;
-(BOOL)isVideoMirrored;
-(int)ttyType;
-(void)setTtyType:(int)arg1 ;
-(NSSet *)remoteParticipantHandles;
-(long long)remoteCameraOrientation;
-(BOOL)isHostedOnCurrentDevice;
-(BOOL)isEndpointOnCurrentDevice;
-(BOOL)isConferenced;
-(NSDate *)dateConnected;
-(BOOL)isConversation;
-(NSUUID *)callGroupUUID;
-(NSString *)uniqueProxyIdentifier;
-(NSString *)callUUID;
-(id)initWithCall:(id)arg1 ;
-(BOOL)isUplinkMuted;
-(BOOL)isDownlinkMuted;
-(BOOL)isTTY;
-(void)setUplinkMuted:(BOOL)arg1 ;
-(void)setDownlinkMuted:(BOOL)arg1 ;
-(NSString *)callerNameFromNetwork;
-(BOOL)isVoicemail;
-(BOOL)isEmergency;
-(BOOL)shouldSuppressInCallUI;
-(BOOL)wantsStagingArea;
-(id)initWithUniqueProxyIdentifier:(id)arg1 ;
-(BOOL)wantsHoldMusic;
-(void)setUniqueProxyIdentifier:(NSString *)arg1 ;
-(void)setWantsHoldMusic:(BOOL)arg1 ;
-(void)setCallServicesInterface:(TUCallServicesInterface *)arg1 ;
-(void)updateWithCall:(id)arg1 ;
-(void)updateComparativeCall;
-(TUProxyCall *)comparativeCall;
-(TUCallNotificationManager *)callNotificationManager;
-(NSUUID *)localSenderIdentityUUID;
-(NSUUID *)localSenderIdentityAccountUUID;
-(void)setEndpointOnCurrentDevice:(BOOL)arg1 ;
-(void)setIsSendingVideo:(BOOL)arg1 ;
-(TUCallCenter *)callCenter;
-(BOOL)isSendingVideo;
-(void)setComparativeCall:(TUProxyCall *)arg1 ;
-(void)resetProvisionalState;
-(long long)soundRegion;
-(NSString *)displayFirstName;
-(void)setSupportsRecents:(BOOL)arg1 ;
-(BOOL)shouldSuppressRingtone;
-(int)faceTimeIDStatus;
-(NSString *)hardPauseDigits;
-(int)hardPauseDigitsState;
-(BOOL)needsManualInCallSounds;
-(BOOL)hasSentInvitation;
-(BOOL)isUsingBaseband;
-(BOOL)isOnHold;
-(BOOL)isSendingAudio;
-(BOOL)isThirdPartyVideo;
-(BOOL)isMediaStalled;
-(BOOL)isVideoDegraded;
-(BOOL)isVideoPaused;
-(NSString *)audioMode;
-(BOOL)supportsTTYWithVoice;
-(CGSize)remoteAspectRatio;
-(CGRect)remoteVideoContentRect;
-(long long)remoteScreenOrientation;
-(CGSize)remoteScreenAspectRatio;
-(BOOL)prefersExclusiveAccessToCellularNetwork;
-(BOOL)isRemoteUplinkMuted;
-(NSDictionary *)providerContext;
-(BOOL)supportsRecents;
-(id)initWithUniqueProxyIdentifier:(id)arg1 endpointOnCurrentDevice:(BOOL)arg2 ;
-(TUCallProvider *)backingProvider;
-(TUCallProvider *)displayProvider;
-(NSDictionary *)endedReasonUserInfo;
-(NSString *)endedErrorString;
-(NSString *)endedReasonString;
-(int)callRelaySupport;
-(NSData *)localFrequency;
-(NSData *)remoteFrequency;
-(float)localMeterLevel;
-(float)remoteMeterLevel;
-(BOOL)isMutuallyExclusiveCall;
-(long long)inputAudioPowerSpectrumToken;
-(long long)outputAudioPowerSpectrumToken;
-(TUVideoCallAttributes *)videoCallAttributes;
-(long long)videoStreamToken;
-(void)disconnectWithReason:(int)arg1 ;
-(void)answerWithRequest:(id)arg1 ;
-(int)disconnectedReason;
-(void)setDisconnectedReason:(int)arg1 ;
-(void)setShouldSuppressRingtone:(BOOL)arg1 ;
-(int)transitionStatus;
-(void)setTransitionStatus:(int)arg1 ;
-(void)setHardPauseDigitsState:(int)arg1 ;
-(void)setHardPauseDigits:(NSString *)arg1 ;
-(void)setVideoCallAttributes:(TUVideoCallAttributes *)arg1 ;
-(BOOL)requiresRemoteVideo;
-(CGSize)localAspectRatioForOrientation:(long long)arg1 ;
-(void)playDTMFToneForKey:(unsigned char)arg1 ;
-(void)sendHardPauseDigits;
-(void)setRemoteVideoLayer:(id)arg1 forMode:(long long)arg2 ;
-(void)setLocalVideoLayer:(id)arg1 forMode:(long long)arg2 ;
-(void)setRequiresRemoteVideo:(BOOL)arg1 ;
-(void)setRemoteVideoPresentationSize:(CGSize)arg1 ;
-(void)setRemoteVideoPresentationState:(int)arg1 ;
-(void)setVideo:(BOOL)arg1 ;
-(TUSenderIdentity *)localSenderIdentity;
-(void)_handleStatusChange;
-(int)filteredOutReason;
-(long long)verificationStatus;
-(TUCallServicesInterface *)callServicesInterface;
-(void)resetWantsHoldMusic;
-(long long)provisionalHoldStatus;
-(void)setProvisionalHoldStatus:(long long)arg1 ;
-(NSDate *)dateSentInvitation;
-(NSDate *)dateStartedConnecting;
-(void)setRingtoneSuppressedRemotely:(BOOL)arg1 ;
-(void)suppressRingtone;
-(BOOL)wasDialAssisted;
-(BOOL)isEqualToCall:(id)arg1 ;
-(NSDate *)dateEnded;
-(NSString *)callDurationString;
-(NSDate *)dateAnsweredOrDialed;
-(BOOL)wasPulledToCurrentDevice;
-(double)hostCreationTime;
-(double)hostMessageSendTime;
-(double)clientMessageReceiveTime;
-(void)setIsOnHold:(BOOL)arg1 ;
-(void)unhold;
-(NSString *)hardPauseDigitsDisplayString;
-(NSUUID *)uniqueProxyIdentifierUUID;
-(BOOL)wasDeclined;
-(void)suppressRingtoneDueToRemoteSuppression;
-(BOOL)isWiFiCall;
-(BOOL)isVoIPCall;
-(BOOL)isRTT;
-(long long)faceTimeTransportType;
-(TUDialRequest *)dialRequestForRedial;
-(void)groupWithOtherCall:(id)arg1 ;
-(void)ungroup;
-(BOOL)shouldDisplayLocationIfAvailable;
-(NSString *)callHistoryIdentifier;
-(NSString *)reminderString;
-(id)statusDisplayStringWithLabel:(id)arg1 ;
-(BOOL)statusIsProvisional;
-(BOOL)isEmergencyCall;
-(BOOL)shouldPlayDTMFTone;
-(BOOL)supportsDTMFTones;
-(NSString *)suggestedDisplayName;
-(int)abUID;
-(BOOL)hasRelaySupport:(int)arg1 ;
-(id)serviceDisplayString;
-(id)supplementalInCallString;
-(id)errorAlertTitle;
-(id)errorAlertMessage;
-(NSDictionary *)callStats;
-(BOOL)isVideoUpgradeFromCall:(id)arg1 ;
-(BOOL)isDialRequestVideoUpgrade:(id)arg1 ;
-(void)setFaceTimeIDStatus:(int)arg1 ;
-(void)setDateAnsweredOrDialed:(NSDate *)arg1 ;
-(void)setDateSentInvitation:(NSDate *)arg1 ;
-(void)setDateStartedConnecting:(NSDate *)arg1 ;
-(void)setDateConnected:(NSDate *)arg1 ;
-(void)setDateEnded:(NSDate *)arg1 ;
-(void)setWasDialAssisted:(BOOL)arg1 ;
-(void)setFilteredOutReason:(int)arg1 ;
-(void)setVerificationStatus:(long long)arg1 ;
-(BOOL)hasUpdatedAudio;
-(void)setHasUpdatedAudio:(BOOL)arg1 ;
-(void)setSoundRegion:(long long)arg1 ;
-(BOOL)ringtoneSuppressedRemotely;
-(void)setHostCreationTime:(double)arg1 ;
-(void)setHostMessageSendTime:(double)arg1 ;
-(void)setClientMessageReceiveTime:(double)arg1 ;
-(void)setWasPulledToCurrentDevice:(BOOL)arg1 ;
@end

