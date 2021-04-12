/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) BOOL beepBeforeInstruction; 
@property (nonatomic,copy) NSString * voiceLanguage; 
@property (assign,nonatomic) BOOL shouldUseGuidanceEventManager; 
+(id)settingsWithSettings:(id)arg1 ;
-(void)setMaxAlternateRoutesCount:(unsigned long long)arg1 ;
-(void)setVoiceLanguage:(NSString *)arg1 ;
-(void)setVoiceVolume:(unsigned long long)arg1 ;
-(void)setDistanceUnits:(unsigned long long)arg1 ;
-(void)setSpeechEnabled:(BOOL)arg1 ;
-(void)setShouldUseGuidanceEventManager:(BOOL)arg1 ;
-(void)setPauseSpokenAudio:(BOOL)arg1 ;
-(void)setMuteSpeechOverride:(BOOL)arg1 ;
-(void)setBeepBeforeInstruction:(BOOL)arg1 ;
@end

