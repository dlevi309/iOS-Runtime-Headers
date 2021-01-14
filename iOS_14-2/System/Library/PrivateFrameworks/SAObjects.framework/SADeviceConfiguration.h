/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SADeviceConfiguration : SABaseClientBoundCommand

@property (assign,nonatomic) double audioSessionActivationDelay; 
@property (assign,nonatomic) double audioSessionActivationDelayAboveMediaPlaybackVolumeThreshold; 
@property (assign,nonatomic) BOOL hasAudioSessionActivationDelay; 
@property (assign,nonatomic) double initialInterstitialDelay; 
@property (assign,nonatomic) double initialInterstitialDelayForCarPlay; 
@property (assign,nonatomic) double initialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking; 
@property (assign,nonatomic) double mediaPlaybackVolumeThresholdForAudioSessionActivationDelay; 
+(id)deviceConfiguration;
+(id)deviceConfigurationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(double)audioSessionActivationDelay;
-(void)setAudioSessionActivationDelay:(double)arg1 ;
-(double)audioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;
-(void)setAudioSessionActivationDelayAboveMediaPlaybackVolumeThreshold:(double)arg1 ;
-(BOOL)hasAudioSessionActivationDelay;
-(void)setHasAudioSessionActivationDelay:(BOOL)arg1 ;
-(double)initialInterstitialDelay;
-(void)setInitialInterstitialDelay:(double)arg1 ;
-(double)initialInterstitialDelayForCarPlay;
-(void)setInitialInterstitialDelayForCarPlay:(double)arg1 ;
-(double)initialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking;
-(void)setInitialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking:(double)arg1 ;
-(double)mediaPlaybackVolumeThresholdForAudioSessionActivationDelay;
-(id)encodedClassName;
-(void)setMediaPlaybackVolumeThresholdForAudioSessionActivationDelay:(double)arg1 ;
-(BOOL)requiresResponse;
@end

