/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNSettings.h>

@class NSString;

@interface MNMutableSettings : MNSettings

@property (assign,nonatomic) unsigned long long voiceVolume; 
@property (assign,nonatomic) unsigned long long distanceUnits; 
@property (assign,nonatomic) BOOL pauseSpokenAudio; 
@property (assign,nonatomic) BOOL muteSpeechOverride; 
@property (assign,nonatomic) BOOL speechEnabled; 
@property (assign,nonatomic) unsigned long long maxAlternateRoutesCount; 
@property (assign,nonatomic) BOOL drivingVoiceGuidance; 
@property (assign,nonatomic) BOOL walkingVoiceGuidance; 
@property (assign,nonatomic) BOOL beepBeforeInstruction; 
@property (nonatomic,copy) NSString * voiceLanguage; 
@property (assign,nonatomic) double etaRequestInterval; 
@property (assign,nonatomic) double initialRequestDelay; 
@property (assign,nonatomic) double backgroundTimeWindow; 
@property (assign,nonatomic) long long fakeTrafficIncidentAlert; 
@property (assign,nonatomic) double initialTraceSpeedMultiplier; 
@property (assign,nonatomic) BOOL shouldLoadReroutesFromTrace; 
@property (assign,nonatomic) BOOL shouldLoadETAUpdatesFromTrace; 
@property (assign,nonatomic) BOOL isTracePlaybackCameraTestMode; 
@property (assign,nonatomic) BOOL shouldRecordTrace; 
@property (assign,nonatomic) double simulationSpeed; 
@property (assign,nonatomic) double simulationGPSError; 
@property (assign,nonatomic) BOOL shouldUseGuidanceEventManager; 
+(id)settingsWithSettings:(id)arg1 ;
-(void)setMaxAlternateRoutesCount:(unsigned long long)arg1 ;
-(void)setVoiceLanguage:(NSString *)arg1 ;
-(void)setVoiceVolume:(unsigned long long)arg1 ;
-(void)setDistanceUnits:(unsigned long long)arg1 ;
-(void)setPauseSpokenAudio:(BOOL)arg1 ;
-(void)setMuteSpeechOverride:(BOOL)arg1 ;
-(void)setSpeechEnabled:(BOOL)arg1 ;
-(void)setBeepBeforeInstruction:(BOOL)arg1 ;
-(void)setShouldUseGuidanceEventManager:(BOOL)arg1 ;
-(void)setDrivingVoiceGuidance:(BOOL)arg1 ;
-(void)setWalkingVoiceGuidance:(BOOL)arg1 ;
-(void)setEtaRequestInterval:(double)arg1 ;
-(void)setInitialRequestDelay:(double)arg1 ;
-(void)setBackgroundTimeWindow:(double)arg1 ;
-(void)setFakeTrafficIncidentAlert:(long long)arg1 ;
-(void)setInitialTraceSpeedMultiplier:(double)arg1 ;
-(void)setShouldLoadReroutesFromTrace:(BOOL)arg1 ;
-(void)setShouldLoadETAUpdatesFromTrace:(BOOL)arg1 ;
-(void)setIsTracePlaybackCameraTestMode:(BOOL)arg1 ;
-(void)setShouldRecordTrace:(BOOL)arg1 ;
-(void)setSimulationSpeed:(double)arg1 ;
-(void)setSimulationGPSError:(double)arg1 ;
@end

