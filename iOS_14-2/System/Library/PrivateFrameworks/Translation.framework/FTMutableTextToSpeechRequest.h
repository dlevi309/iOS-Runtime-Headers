/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTextToSpeechRequest.h>

@class NSString, NSArray, FTTextToSpeechRequestMeta, FTTextToSpeechRequestContext, FTTextToSpeechRequestExperiment, FTTTSRequestFeatureFlags, FTTextToSpeechRequestDebug, FTTextToSpeechUserProfile;

@interface FTMutableTextToSpeechRequest : FTTextToSpeechRequest

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long audio_type; 
@property (assign,nonatomic) BOOL enable_word_timing_info; 
@property (nonatomic,copy) NSString * voice_name; 
@property (nonatomic,copy) NSArray * context_info; 
@property (assign,nonatomic) long long preferred_voice_type; 
@property (nonatomic,copy) FTTextToSpeechRequestMeta * meta_info; 
@property (nonatomic,copy) FTTextToSpeechRequestContext * context; 
@property (nonatomic,copy) FTTextToSpeechRequestExperiment * experiment; 
@property (nonatomic,copy) FTTTSRequestFeatureFlags * feature_flags; 
@property (nonatomic,copy) FTTextToSpeechRequestDebug * debug; 
@property (nonatomic,copy) FTTextToSpeechUserProfile * profile; 
-(void)setProfile:(FTTextToSpeechUserProfile *)arg1 ;
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(FTTextToSpeechRequestExperiment *)experiment;
-(void)setDebug:(FTTextToSpeechRequestDebug *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(FTTextToSpeechRequestContext *)context;
-(FTTextToSpeechUserProfile *)profile;
-(NSString *)text;
-(FTTextToSpeechRequestMeta *)meta_info;
-(NSString *)speech_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setMeta_info:(FTTextToSpeechRequestMeta *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(FTTextToSpeechRequestDebug *)debug;
-(void)setGender:(NSString *)arg1 ;
-(NSString *)gender;
-(NSArray *)context_info;
-(void)setContext_info:(NSArray *)arg1 ;
-(long long)audio_type;
-(void)setAudio_type:(long long)arg1 ;
-(BOOL)enable_word_timing_info;
-(void)setEnable_word_timing_info:(BOOL)arg1 ;
-(NSString *)voice_name;
-(void)setVoice_name:(NSString *)arg1 ;
-(long long)preferred_voice_type;
-(void)setPreferred_voice_type:(long long)arg1 ;
-(FTTTSRequestFeatureFlags *)feature_flags;
-(void)setFeature_flags:(FTTTSRequestFeatureFlags *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExperiment:(FTTextToSpeechRequestExperiment *)arg1 ;
-(NSString *)language;
-(void)setContext:(FTTextToSpeechRequestContext *)arg1 ;
@end

