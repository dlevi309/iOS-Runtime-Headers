/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MNSettings : NSObject <NSSecureCoding> {

	unsigned long long _voiceVolume;
	unsigned long long _distanceUnits;
	BOOL _pauseSpokenAudio;
	BOOL _muteSpeechOverride;
	BOOL _speechEnabled;
	unsigned long long _maxAlternateRoutesCount;
	BOOL _drivingVoiceGuidance;
	BOOL _walkingVoiceGuidance;
	BOOL _beepBeforeInstruction;
	NSString* _voiceLanguage;
	double _etaRequestInterval;
	double _initialRequestDelay;
	double _backgroundTimeWindow;
	long long _fakeTrafficIncidentAlert;
	double _initialTraceSpeedMultiplier;
	BOOL _shouldLoadReroutesFromTrace;
	BOOL _shouldLoadETAUpdatesFromTrace;
	BOOL _isTracePlaybackCameraTestMode;
	BOOL _shouldRecordTrace;
	double _simulationSpeed;
	double _simulationGPSError;
	BOOL _shouldUseGuidanceEventManager;

}

@property (nonatomic,readonly) unsigned long long voiceVolume;                          //@synthesize voiceVolume=_voiceVolume - In the implementation block
@property (nonatomic,readonly) unsigned long long distanceUnits;                        //@synthesize distanceUnits=_distanceUnits - In the implementation block
@property (nonatomic,readonly) BOOL pauseSpokenAudio;                                   //@synthesize pauseSpokenAudio=_pauseSpokenAudio - In the implementation block
@property (nonatomic,readonly) BOOL muteSpeechOverride;                                 //@synthesize muteSpeechOverride=_muteSpeechOverride - In the implementation block
@property (nonatomic,readonly) BOOL speechEnabled;                                      //@synthesize speechEnabled=_speechEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long maxAlternateRoutesCount;              //@synthesize maxAlternateRoutesCount=_maxAlternateRoutesCount - In the implementation block
@property (nonatomic,readonly) BOOL drivingVoiceGuidance;                               //@synthesize drivingVoiceGuidance=_drivingVoiceGuidance - In the implementation block
@property (nonatomic,readonly) BOOL walkingVoiceGuidance;                               //@synthesize walkingVoiceGuidance=_walkingVoiceGuidance - In the implementation block
@property (nonatomic,readonly) BOOL beepBeforeInstruction;                              //@synthesize beepBeforeInstruction=_beepBeforeInstruction - In the implementation block
@property (nonatomic,readonly) NSString * voiceLanguage; 
@property (nonatomic,readonly) double etaRequestInterval;                               //@synthesize etaRequestInterval=_etaRequestInterval - In the implementation block
@property (nonatomic,readonly) double initialRequestDelay;                              //@synthesize initialRequestDelay=_initialRequestDelay - In the implementation block
@property (nonatomic,readonly) double backgroundTimeWindow;                             //@synthesize backgroundTimeWindow=_backgroundTimeWindow - In the implementation block
@property (nonatomic,readonly) long long fakeTrafficIncidentAlert;                      //@synthesize fakeTrafficIncidentAlert=_fakeTrafficIncidentAlert - In the implementation block
@property (nonatomic,readonly) double initialTraceSpeedMultiplier;                      //@synthesize initialTraceSpeedMultiplier=_initialTraceSpeedMultiplier - In the implementation block
@property (nonatomic,readonly) BOOL shouldLoadReroutesFromTrace;                        //@synthesize shouldLoadReroutesFromTrace=_shouldLoadReroutesFromTrace - In the implementation block
@property (nonatomic,readonly) BOOL shouldLoadETAUpdatesFromTrace;                      //@synthesize shouldLoadETAUpdatesFromTrace=_shouldLoadETAUpdatesFromTrace - In the implementation block
@property (nonatomic,readonly) BOOL isTracePlaybackCameraTestMode;                      //@synthesize isTracePlaybackCameraTestMode=_isTracePlaybackCameraTestMode - In the implementation block
@property (nonatomic,readonly) BOOL shouldRecordTrace;                                  //@synthesize shouldRecordTrace=_shouldRecordTrace - In the implementation block
@property (nonatomic,readonly) double simulationSpeed;                                  //@synthesize simulationSpeed=_simulationSpeed - In the implementation block
@property (nonatomic,readonly) double simulationGPSError;                               //@synthesize simulationGPSError=_simulationGPSError - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseGuidanceEventManager;                      //@synthesize shouldUseGuidanceEventManager=_shouldUseGuidanceEventManager - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldUseGuidanceEventManager;
-(unsigned long long)maxAlternateRoutesCount;
-(NSString *)voiceLanguage;
-(void)setVoiceLanguage:(NSString *)arg1 ;
-(unsigned long long)voiceVolume;
-(unsigned long long)distanceUnits;
-(BOOL)pauseSpokenAudio;
-(BOOL)muteSpeechOverride;
-(BOOL)speechEnabled;
-(BOOL)beepBeforeInstruction;
-(BOOL)drivingVoiceGuidance;
-(BOOL)walkingVoiceGuidance;
-(double)etaRequestInterval;
-(double)initialRequestDelay;
-(double)backgroundTimeWindow;
-(long long)fakeTrafficIncidentAlert;
-(double)initialTraceSpeedMultiplier;
-(BOOL)shouldLoadReroutesFromTrace;
-(BOOL)shouldLoadETAUpdatesFromTrace;
-(BOOL)isTracePlaybackCameraTestMode;
-(BOOL)shouldRecordTrace;
-(double)simulationSpeed;
-(double)simulationGPSError;
@end

