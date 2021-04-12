/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SADeviceConfiguration : SABaseClientBoundCommand

@property (assign,nonatomic) double initialInterstitialDelay; 
@property (assign,nonatomic) double initialInterstitialDelayForCarPlay; 
@property (assign,nonatomic) double initialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking; 
+(id)deviceConfiguration;
+(id)deviceConfigurationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(double)initialInterstitialDelay;
-(void)setInitialInterstitialDelay:(double)arg1 ;
-(double)initialInterstitialDelayForCarPlay;
-(void)setInitialInterstitialDelayForCarPlay:(double)arg1 ;
-(double)initialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking;
-(void)setInitialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking:(double)arg1 ;
@end

