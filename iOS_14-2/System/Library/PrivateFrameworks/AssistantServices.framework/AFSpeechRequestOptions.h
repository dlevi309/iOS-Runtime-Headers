/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, AFSpeechRecordingAlertPolicy, NSNumber, NSFileHandle, NSDictionary, AFMyriadContext, NSXPCListenerEndpoint, NSURL, AFSpeechSynthesisRecord, CLLocation, AFLanguageDetectionUserContext, NSUUID;

@interface AFSpeechRequestOptions : NSObject <NSSecureCoding> {

	BOOL _isEyesFree;
	BOOL _useAutomaticEndpointing;
	BOOL _useStreamingDictation;
	BOOL _isInitialBringUp;
	BOOL _acousticIdEnabled;
	BOOL _releaseAudioSessionOnRecordingCompletion;
	BOOL _usePrelisteningMode;
	BOOL _pendCallbacksUntilAfterContinuation;
	BOOL _useBorealisBuffer;
	BOOL _reloadSmartSiriVolume;
	BOOL _skipPersonalizedASR;
	BOOL _suppressStartAlert;
	BOOL _suppressStopAlert;
	BOOL _hasPlayedStartAlert;
	BOOL _isOnPhoneCall;
	BOOL _isMediaPlaying;
	float _mediaPlaybackVolume;
	long long _activationEvent;
	NSString* _activationDeviceIdentifier;
	NSString* _serverCommandId;
	long long _endpointerOperationMode;
	AFSpeechRecordingAlertPolicy* _recordingAlertPolicy;
	double _homeButtonDownEventTime;
	unsigned long long _homeButtonDownEventMachAbsoluteTime;
	double _activationEventTime;
	unsigned long long _activationEventMachAbsoluteTime;
	double _expectedActivationEventTime;
	unsigned long long _stopRecordingHostTime;
	NSNumber* _homeButtonUpFromBeep;
	long long _audioFileType;
	NSFileHandle* _audioFileHandle;
	NSDictionary* _voiceTriggerEventInfo;
	AFMyriadContext* _myriadContext;
	NSString* _recordDeviceIdentifier;
	NSXPCListenerEndpoint* _speechRecordingEventListeningEndpoint;
	NSNumber* _notifyState;
	NSURL* _audioFileURL;
	unsigned long long _bargeInOptions;
	AFSpeechSynthesisRecord* _speechSynthesisRecord;
	CLLocation* _location;
	NSString* _locationStatus;
	NSDictionary* _clientAnalyticsContext;
	NSDictionary* _startContext;
	NSDictionary* _stopContext;
	AFLanguageDetectionUserContext* _languageDetectionUserContext;
	long long _dictationInputOrigin;
	NSUUID* _turnIdentifier;
	long long _presentationMode;
	NSString* _preheatTestLanguage;
	NSURL* _preheatTestModelPath;
	NSString* _applicationDisplayName;
	NSString* _applicationBundleIdentifier;

}

@property (nonatomic,copy) NSString * applicationDisplayName;                                            //@synthesize applicationDisplayName=_applicationDisplayName - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifier;                                       //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (assign,nonatomic) long long activationEvent;                                                  //@synthesize activationEvent=_activationEvent - In the implementation block
@property (nonatomic,copy) NSString * activationDeviceIdentifier;                                        //@synthesize activationDeviceIdentifier=_activationDeviceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isEyesFree;                                                            //@synthesize isEyesFree=_isEyesFree - In the implementation block
@property (nonatomic,copy) NSString * serverCommandId;                                                   //@synthesize serverCommandId=_serverCommandId - In the implementation block
@property (assign,nonatomic) BOOL useAutomaticEndpointing;                                               //@synthesize useAutomaticEndpointing=_useAutomaticEndpointing - In the implementation block
@property (assign,nonatomic) long long endpointerOperationMode;                                          //@synthesize endpointerOperationMode=_endpointerOperationMode - In the implementation block
@property (nonatomic,copy) AFSpeechRecordingAlertPolicy * recordingAlertPolicy;                          //@synthesize recordingAlertPolicy=_recordingAlertPolicy - In the implementation block
@property (assign,nonatomic) BOOL useStreamingDictation;                                                 //@synthesize useStreamingDictation=_useStreamingDictation - In the implementation block
@property (assign,nonatomic) double homeButtonDownEventTime;                                             //@synthesize homeButtonDownEventTime=_homeButtonDownEventTime - In the implementation block
@property (assign,nonatomic) unsigned long long homeButtonDownEventMachAbsoluteTime;                     //@synthesize homeButtonDownEventMachAbsoluteTime=_homeButtonDownEventMachAbsoluteTime - In the implementation block
@property (assign,nonatomic) double activationEventTime;                                                 //@synthesize activationEventTime=_activationEventTime - In the implementation block
@property (assign,nonatomic) unsigned long long activationEventMachAbsoluteTime;                         //@synthesize activationEventMachAbsoluteTime=_activationEventMachAbsoluteTime - In the implementation block
@property (assign,nonatomic) double expectedActivationEventTime;                                         //@synthesize expectedActivationEventTime=_expectedActivationEventTime - In the implementation block
@property (assign,nonatomic) unsigned long long stopRecordingHostTime;                                   //@synthesize stopRecordingHostTime=_stopRecordingHostTime - In the implementation block
@property (assign,nonatomic) BOOL isInitialBringUp;                                                      //@synthesize isInitialBringUp=_isInitialBringUp - In the implementation block
@property (nonatomic,copy) NSNumber * homeButtonUpFromBeep;                                              //@synthesize homeButtonUpFromBeep=_homeButtonUpFromBeep - In the implementation block
@property (assign,nonatomic) BOOL acousticIdEnabled;                                                     //@synthesize acousticIdEnabled=_acousticIdEnabled - In the implementation block
@property (assign,nonatomic) long long audioFileType;                                                    //@synthesize audioFileType=_audioFileType - In the implementation block
@property (nonatomic,retain) NSFileHandle * audioFileHandle;                                             //@synthesize audioFileHandle=_audioFileHandle - In the implementation block
@property (nonatomic,copy) NSDictionary * voiceTriggerEventInfo;                                         //@synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo - In the implementation block
@property (nonatomic,copy) AFMyriadContext * myriadContext;                                              //@synthesize myriadContext=_myriadContext - In the implementation block
@property (assign,nonatomic) BOOL releaseAudioSessionOnRecordingCompletion;                              //@synthesize releaseAudioSessionOnRecordingCompletion=_releaseAudioSessionOnRecordingCompletion - In the implementation block
@property (nonatomic,copy) NSString * recordDeviceIdentifier;                                            //@synthesize recordDeviceIdentifier=_recordDeviceIdentifier - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * speechRecordingEventListeningEndpoint;              //@synthesize speechRecordingEventListeningEndpoint=_speechRecordingEventListeningEndpoint - In the implementation block
@property (assign,nonatomic) BOOL usePrelisteningMode;                                                   //@synthesize usePrelisteningMode=_usePrelisteningMode - In the implementation block
@property (assign,nonatomic) BOOL pendCallbacksUntilAfterContinuation;                                   //@synthesize pendCallbacksUntilAfterContinuation=_pendCallbacksUntilAfterContinuation - In the implementation block
@property (assign,nonatomic) BOOL useBorealisBuffer;                                                     //@synthesize useBorealisBuffer=_useBorealisBuffer - In the implementation block
@property (assign,nonatomic) BOOL reloadSmartSiriVolume;                                                 //@synthesize reloadSmartSiriVolume=_reloadSmartSiriVolume - In the implementation block
@property (assign,nonatomic) BOOL skipPersonalizedASR;                                                   //@synthesize skipPersonalizedASR=_skipPersonalizedASR - In the implementation block
@property (nonatomic,copy) NSNumber * notifyState;                                                       //@synthesize notifyState=_notifyState - In the implementation block
@property (nonatomic,copy) NSURL * audioFileURL;                                                         //@synthesize audioFileURL=_audioFileURL - In the implementation block
@property (assign,nonatomic) BOOL suppressStartAlert;                                                    //@synthesize suppressStartAlert=_suppressStartAlert - In the implementation block
@property (assign,nonatomic) BOOL suppressStopAlert;                                                     //@synthesize suppressStopAlert=_suppressStopAlert - In the implementation block
@property (assign,nonatomic) BOOL hasPlayedStartAlert;                                                   //@synthesize hasPlayedStartAlert=_hasPlayedStartAlert - In the implementation block
@property (assign,nonatomic) unsigned long long bargeInOptions;                                          //@synthesize bargeInOptions=_bargeInOptions - In the implementation block
@property (nonatomic,copy) AFSpeechSynthesisRecord * speechSynthesisRecord;                              //@synthesize speechSynthesisRecord=_speechSynthesisRecord - In the implementation block
@property (nonatomic,copy) CLLocation * location;                                                        //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * locationStatus;                                                    //@synthesize locationStatus=_locationStatus - In the implementation block
@property (nonatomic,copy) NSString * btDeviceAddress; 
@property (nonatomic,copy) NSDictionary * clientAnalyticsContext;                                        //@synthesize clientAnalyticsContext=_clientAnalyticsContext - In the implementation block
@property (nonatomic,copy) NSDictionary * startContext;                                                  //@synthesize startContext=_startContext - In the implementation block
@property (nonatomic,copy) NSDictionary * stopContext;                                                   //@synthesize stopContext=_stopContext - In the implementation block
@property (assign,nonatomic) BOOL isOnPhoneCall;                                                         //@synthesize isOnPhoneCall=_isOnPhoneCall - In the implementation block
@property (assign,nonatomic) BOOL isMediaPlaying;                                                        //@synthesize isMediaPlaying=_isMediaPlaying - In the implementation block
@property (assign,nonatomic) float mediaPlaybackVolume;                                                  //@synthesize mediaPlaybackVolume=_mediaPlaybackVolume - In the implementation block
@property (nonatomic,copy) AFLanguageDetectionUserContext * languageDetectionUserContext;                //@synthesize languageDetectionUserContext=_languageDetectionUserContext - In the implementation block
@property (assign,nonatomic) long long dictationInputOrigin;                                             //@synthesize dictationInputOrigin=_dictationInputOrigin - In the implementation block
@property (nonatomic,copy) NSUUID * turnIdentifier;                                                      //@synthesize turnIdentifier=_turnIdentifier - In the implementation block
@property (assign,nonatomic) long long presentationMode;                                                 //@synthesize presentationMode=_presentationMode - In the implementation block
@property (nonatomic,copy) NSString * preheatTestLanguage;                                               //@synthesize preheatTestLanguage=_preheatTestLanguage - In the implementation block
@property (nonatomic,copy) NSURL * preheatTestModelPath;                                                 //@synthesize preheatTestModelPath=_preheatTestModelPath - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setReleaseAudioSessionOnRecordingCompletion:(BOOL)arg1 ;
-(void)setDictationInputOrigin:(long long)arg1 ;
-(void)setLanguageDetectionUserContext:(AFLanguageDetectionUserContext *)arg1 ;
-(NSDictionary *)stopContext;
-(long long)dictationInputOrigin;
-(NSUUID *)turnIdentifier;
-(id)initWithActivationEvent:(long long)arg1 ;
-(void)setUseStreamingDictation:(BOOL)arg1 ;
-(void)setEndpointerOperationMode:(long long)arg1 ;
-(void)setActivationDeviceIdentifier:(NSString *)arg1 ;
-(void)setTurnIdentifier:(NSUUID *)arg1 ;
-(NSString *)locationStatus;
-(void)setSuppressStopAlert:(BOOL)arg1 ;
-(void)setStopContext:(NSDictionary *)arg1 ;
-(void)setUseAutomaticEndpointing:(BOOL)arg1 ;
-(CLLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isVoiceTrigger;
-(NSString *)recordDeviceIdentifier;
-(NSDictionary *)startContext;
-(void)setLocation:(CLLocation *)arg1 ;
-(BOOL)isEyesFree;
-(AFMyriadContext *)myriadContext;
-(NSString *)activationDeviceIdentifier;
-(void)setIsEyesFree:(BOOL)arg1 ;
-(void)setServerCommandId:(NSString *)arg1 ;
-(void)setIsInitialBringUp:(BOOL)arg1 ;
-(id)description;
-(void)setRecordingAlertPolicy:(AFSpeechRecordingAlertPolicy *)arg1 ;
-(void)setHomeButtonDownEventTime:(double)arg1 ;
-(void)setHomeButtonDownEventMachAbsoluteTime:(unsigned long long)arg1 ;
-(void)setActivationEventMachAbsoluteTime:(unsigned long long)arg1 ;
-(void)setAcousticIdEnabled:(BOOL)arg1 ;
-(void)setStopRecordingHostTime:(unsigned long long)arg1 ;
-(void)setHomeButtonUpFromBeep:(NSNumber *)arg1 ;
-(void)setAudioFileType:(long long)arg1 ;
-(void)setAudioFileHandle:(NSFileHandle *)arg1 ;
-(void)setMyriadContext:(AFMyriadContext *)arg1 ;
-(void)setRecordDeviceIdentifier:(NSString *)arg1 ;
-(void)setAudioFileURL:(NSURL *)arg1 ;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setSpeechRecordingEventListeningEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)setPendCallbacksUntilAfterContinuation:(BOOL)arg1 ;
-(void)setUseBorealisBuffer:(BOOL)arg1 ;
-(void)setHasPlayedStartAlert:(BOOL)arg1 ;
-(void)setBargeInOptions:(unsigned long long)arg1 ;
-(void)setStartContext:(NSDictionary *)arg1 ;
-(void)setSpeechSynthesisRecord:(AFSpeechSynthesisRecord *)arg1 ;
-(void)setReloadSmartSiriVolume:(BOOL)arg1 ;
-(void)setSkipPersonalizedASR:(BOOL)arg1 ;
-(void)setClientAnalyticsContext:(NSDictionary *)arg1 ;
-(void)setLocationStatus:(NSString *)arg1 ;
-(void)setIsOnPhoneCall:(BOOL)arg1 ;
-(BOOL)isMediaPlaying;
-(void)setIsMediaPlaying:(BOOL)arg1 ;
-(void)setMediaPlaybackVolume:(float)arg1 ;
-(void)setPreheatTestLanguage:(NSString *)arg1 ;
-(void)setPreheatTestModelPath:(NSURL *)arg1 ;
-(BOOL)isRaiseToSpeak;
-(void)setBtDeviceAddress:(NSString *)arg1 ;
-(NSString *)btDeviceAddress;
-(long long)endpointerOperationMode;
-(AFSpeechRecordingAlertPolicy *)recordingAlertPolicy;
-(BOOL)useStreamingDictation;
-(double)homeButtonDownEventTime;
-(unsigned long long)homeButtonDownEventMachAbsoluteTime;
-(BOOL)isInitialBringUp;
-(long long)audioFileType;
-(NSNumber *)homeButtonUpFromBeep;
-(BOOL)acousticIdEnabled;
-(NSFileHandle *)audioFileHandle;
-(NSXPCListenerEndpoint *)speechRecordingEventListeningEndpoint;
-(BOOL)usePrelisteningMode;
-(void)setUsePrelisteningMode:(BOOL)arg1 ;
-(NSURL *)audioFileURL;
-(long long)activationEvent;
-(double)expectedActivationEventTime;
-(void)setActivationEventTime:(double)arg1 ;
-(void)setExpectedActivationEventTime:(double)arg1 ;
-(BOOL)useBorealisBuffer;
-(BOOL)reloadSmartSiriVolume;
-(BOOL)skipPersonalizedASR;
-(BOOL)hasPlayedStartAlert;
-(unsigned long long)bargeInOptions;
-(AFSpeechSynthesisRecord *)speechSynthesisRecord;
-(NSDictionary *)clientAnalyticsContext;
-(long long)presentationMode;
-(BOOL)isOnPhoneCall;
-(float)mediaPlaybackVolume;
-(NSString *)preheatTestLanguage;
-(NSURL *)preheatTestModelPath;
-(BOOL)suppressStopAlert;
-(BOOL)suppressStartAlert;
-(void)setSuppressStartAlert:(BOOL)arg1 ;
-(double)activationEventTime;
-(unsigned long long)activationEventMachAbsoluteTime;
-(void)setNotifyState:(NSNumber *)arg1 ;
-(AFLanguageDetectionUserContext *)languageDetectionUserContext;
-(BOOL)useAutomaticEndpointing;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)notifyState;
-(void)setActivationEvent:(long long)arg1 ;
-(BOOL)pendCallbacksUntilAfterContinuation;
-(NSString *)serverCommandId;
-(unsigned long long)stopRecordingHostTime;
-(void)setApplicationDisplayName:(NSString *)arg1 ;
-(NSDictionary *)voiceTriggerEventInfo;
-(void)setVoiceTriggerEventInfo:(NSDictionary *)arg1 ;
-(BOOL)releaseAudioSessionOnRecordingCompletion;
-(NSString *)applicationDisplayName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(void)setPresentationMode:(long long)arg1 ;
@end

