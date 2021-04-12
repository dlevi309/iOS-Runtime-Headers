/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalAudio.framework/PersonalAudio
*/

#import <HearingCore/HCSettings.h>

@class PAConfiguration, NSDictionary;

@interface PASettings : HCSettings

@property (assign,nonatomic) BOOL personalMediaEnabled; 
@property (nonatomic,retain) PAConfiguration * personalMediaConfiguration; 
@property (nonatomic,retain) PAConfiguration * audiogramConfiguration; 
@property (assign,nonatomic) unsigned long long personalAudioAccommodationTypes; 
@property (assign,nonatomic) unsigned long long currentEnrollmentProgress; 
@property (assign,nonatomic) BOOL configurationCameFromEnrollment; 
@property (assign,nonatomic) BOOL configurationCameFromUser; 
@property (assign,nonatomic) BOOL shouldUpdateAccessory; 
@property (nonatomic,retain) NSDictionary * transparencyCustomized; 
@property (nonatomic,retain) NSDictionary * transparencyAmplification; 
@property (nonatomic,retain) NSDictionary * transparencyBalance; 
@property (nonatomic,retain) NSDictionary * transparencyTone; 
@property (assign,nonatomic) BOOL personalSoundVisible; 
@property (assign,nonatomic) BOOL personalMediaDebugMode; 
+(id)sharedInstance;
-(id)preferenceKeyForSelector:(SEL)arg1 ;
-(void)logMessage:(id)arg1 ;
-(void)setPersonalAudioAccommodationTypes:(unsigned long long)arg1 ;
-(BOOL)personalSoundVisible;
-(double)transparencyAmplificationForAddress:(id)arg1 ;
-(PAConfiguration *)personalMediaConfiguration;
-(double)transparencyBalanceForAddress:(id)arg1 ;
-(BOOL)personalMediaDebugMode;
-(void)setPersonalMediaConfiguration:(PAConfiguration *)arg1 ;
-(PAConfiguration *)audiogramConfiguration;
-(BOOL)configurationCameFromEnrollment;
-(id)keysToSync;
-(BOOL)shouldUpdateAccessory;
-(void)setAudiogramConfiguration:(PAConfiguration *)arg1 ;
-(void)setTransparencyCustomized:(BOOL)arg1 forAddress:(id)arg2 ;
-(unsigned long long)personalAudioAccommodationTypes;
-(void)setConfigurationCameFromEnrollment:(BOOL)arg1 ;
-(void)setCurrentEnrollmentProgress:(unsigned long long)arg1 ;
-(void)setTransparencyAmplification:(double)arg1 forAddress:(id)arg2 ;
-(NSDictionary *)transparencyAmplification;
-(double)transparencyToneForAddress:(id)arg1 ;
-(BOOL)transparencyCustomizedForAddress:(id)arg1 ;
-(BOOL)personalMediaEnabled;
-(BOOL)shouldStoreLocally;
-(void)setTransparencyAmplification:(NSDictionary *)arg1 ;
-(void)setTransparencyTone:(NSDictionary *)arg1 ;
-(NSDictionary *)transparencyCustomized;
-(void)setPersonalMediaEnabled:(BOOL)arg1 ;
-(void)setTransparencyBalance:(double)arg1 forAddress:(id)arg2 ;
-(id)configurationWithKey:(id)arg1 ;
-(void)setPersonalMediaDebugMode:(BOOL)arg1 ;
-(BOOL)configurationCameFromUser;
-(void)setShouldUpdateAccessory:(BOOL)arg1 ;
-(void)setConfigurationCameFromUser:(BOOL)arg1 ;
-(void)setPersonalSoundVisible:(BOOL)arg1 ;
-(NSDictionary *)transparencyBalance;
-(void)setTransparencyTone:(double)arg1 forAddress:(id)arg2 ;
-(unsigned long long)currentEnrollmentProgress;
-(id)preferenceDomain;
-(NSDictionary *)transparencyTone;
-(void)setConfiguration:(id)arg1 forKey:(id)arg2 ;
-(void)setTransparencyCustomized:(NSDictionary *)arg1 ;
-(void)setTransparencyBalance:(NSDictionary *)arg1 ;
@end

