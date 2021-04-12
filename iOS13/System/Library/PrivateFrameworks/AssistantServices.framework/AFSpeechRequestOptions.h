/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSFileHandle, NSDictionary, AFMyriadContext, NSXPCListenerEndpoint, NSURL, AFSpeechSynthesisRecord, CLLocation, AFLanguageDetectionUserContext, NSUUID;

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
	BOOL _fetchSmartSiriVolume;
	BOOL _suppressStartAlert;
	BOOL _suppressStopAlert;
	BOOL _hasPlayedStartAlert;
	BOOL _isOnPhoneCall;
	long long _activationEvent;
	NSString* _activationDeviceIdentifier;
	NSString* _serverCommandId;
	long long _endpointerOperationMode;
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

}

@property (assign,nonatomic) long long activationEvent;                                                  //@synthesize activationEvent=_activationEvent - In the implementation block
@property (nonatomic,copy) NSString * activationDeviceIdentifier;                                        //@synthesize activationDeviceIdentifier=_activationDeviceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isEyesFree;                                                            //@synthesize isEyesFree=_isEyesFree - In the implementation block
@property (nonatomic,copy) NSString * serverCommandId;                                                   //@synthesize serverCommandId=_serverCommandId - In the implementation block
@property (assign,nonatomic) BOOL useAutomaticEndpointing;                                               //@synthesize useAutomaticEndpointing=_useAutomaticEndpointing - In the implementation block
@property (assign,nonatomic) long long endpointerOperationMode;                                          //@synthesize endpointerOperationMode=_endpointerOperationMode - In the implementation block
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
@property (assign,nonatomic) BOOL fetchSmartSiriVolume;                                                  //@synthesize fetchSmartSiriVolume=_fetchSmartSiriVolume - In the implementation block
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
@property (nonatomic,copy) AFLanguageDetectionUserContext * languageDetectionUserContext;                //@synthesize languageDetectionUserContext=_languageDetectionUserContext - In the implementation block
@property (assign,nonatomic) long long dictationInputOrigin;                                             //@synthesize dictationInputOrigin=_dictationInputOrigin - In the implementation block
@property (nonatomic,copy) NSUUID * turnIdentifier;                                                      //@synthesize turnIdentifier=_turnIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(BOOL)useAutomaticEndpointing;
-(void)setUseAutomaticEndpointing:(BOOL)arg1 ;
-(void)setReleaseAudioSessionOnRecordingCompletion:(BOOL)arg1 ;
-(void)setDictationInputOrigin:(long long)arg1 ;
-(AFLanguageDetectionUserContext *)languageDetectionUserContext;
-(void)setLanguageDetectionUserContext:(AFLanguageDetectionUserContext *)arg1 ;
-(id)initWithActivationEvent:(long long)arg1 ;
-(void)setUseStreamingDictation:(BOOL)arg1 ;
-(void)setActivationDeviceIdentifier:(NSString *)arg1 ;
-(void)setStartContext:(NSDictionary *)arg1 ;
-(void)setSuppressStopAlert:(BOOL)arg1 ;
-(void)setStopContext:(NSDictionary *)arg1 ;
-(NSDictionary *)stopContext;
-(NSString *)recordDeviceIdentifier;
-(long long)activationEvent;
-(BOOL)isVoiceTrigger;
-(void)setActivationEvent:(long long)arg1 ;
-(void)setTurnIdentifier:(NSUUID *)arg1 ;
-(BOOL)pendCallbacksUntilAfterContinuation;
-(NSString *)serverCommandId;
-(long long)dictationInputOrigin;
-(long long)audioFileType;
-(double)expectedActivationEventTime;
-(double)activationEventTime;
-(void)setActivationEventTime:(double)arg1 ;
-(void)setExpectedActivationEventTime:(double)arg1 ;
-(BOOL)suppressStopAlert;
-(BOOL)suppressStartAlert;
-(void)setSuppressStartAlert:(BOOL)arg1 ;
-(void)setNotifyState:(NSNumber *)arg1 ;
-(NSUUID *)turnIdentifier;
-(NSNumber *)notifyState;
-(NSDictionary *)voiceTriggerEventInfo;
-(void)setVoiceTriggerEventInfo:(NSDictionary *)arg1 ;
-(BOOL)releaseAudioSessionOnRecordingCompletion;
-(unsigned long long)activationEventMachAbsoluteTime;
-(NSString *)activationDeviceIdentifier;
-(void)setIsEyesFree:(BOOL)arg1 ;
-(void)setServerCommandId:(NSString *)arg1 ;
-(void)setEndpointerOperationMode:(long long)arg1 ;
-(void)setHomeButtonDownEventTime:(double)arg1 ;
-(void)setHomeButtonDownEventMachAbsoluteTime:(unsigned long long)arg1 ;
-(void)setActivationEventMachAbsoluteTime:(unsigned long long)arg1 ;
-(void)setStopRecordingHostTime:(unsigned long long)arg1 ;
-(void)setIsInitialBringUp:(BOOL)arg1 ;
-(void)setHomeButtonUpFromBeep:(NSNumber *)arg1 ;
-(void)setAcousticIdEnabled:(BOOL)arg1 ;
-(void)setAudioFileType:(long long)arg1 ;
-(void)setAudioFileHandle:(NSFileHandle *)arg1 ;
-(void)setMyriadContext:(AFMyriadContext *)arg1 ;
-(void)setRecordDeviceIdentifier:(NSString *)arg1 ;
-(void)setSpeechRecordingEventListeningEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)setPendCallbacksUntilAfterContinuation:(BOOL)arg1 ;
-(void)setUseBorealisBuffer:(BOOL)arg1 ;
-(void)setAudioFileURL:(NSURL *)arg1 ;
-(void)setHasPlayedStartAlert:(BOOL)arg1 ;
-(void)setBargeInOptions:(unsigned long long)arg1 ;
-(void)setSpeechSynthesisRecord:(AFSpeechSynthesisRecord *)arg1 ;
-(void)setFetchSmartSiriVolume:(BOOL)arg1 ;
-(void)setClientAnalyticsContext:(NSDictionary *)arg1 ;
-(void)setLocationStatus:(NSString *)arg1 ;
-(void)setIsOnPhoneCall:(BOOL)arg1 ;
-(BOOL)isRaiseToSpeak;
-(void)setBtDeviceAddress:(NSString *)arg1 ;
-(NSString *)btDeviceAddress;
-(BOOL)isEyesFree;
-(long long)endpointerOperationMode;
-(BOOL)useStreamingDictation;
-(double)homeButtonDownEventTime;
-(unsigned long long)homeButtonDownEventMachAbsoluteTime;
-(unsigned long long)stopRecordingHostTime;
-(BOOL)isInitialBringUp;
-(NSNumber *)homeButtonUpFromBeep;
-(BOOL)acousticIdEnabled;
-(NSFileHandle *)audioFileHandle;
-(AFMyriadContext *)myriadContext;
-(NSXPCListenerEndpoint *)speechRecordingEventListeningEndpoint;
-(BOOL)usePrelisteningMode;
-(void)setUsePrelisteningMode:(BOOL)arg1 ;
-(BOOL)useBorealisBuffer;
-(BOOL)fetchSmartSiriVolume;
-(NSURL *)audioFileURL;
-(BOOL)hasPlayedStartAlert;
-(unsigned long long)bargeInOptions;
-(AFSpeechSynthesisRecord *)speechSynthesisRecord;
-(NSString *)locationStatus;
-(NSDictionary *)clientAnalyticsContext;
-(NSDictionary *)startContext;
-(BOOL)isOnPhoneCall;
@end

