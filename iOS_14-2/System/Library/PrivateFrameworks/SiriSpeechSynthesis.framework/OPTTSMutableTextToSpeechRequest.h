/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechRequest.h>

@class NSString, NSArray, OPTTSTextToSpeechRequestMeta, OPTTSTextToSpeechRequestContext, OPTTSTextToSpeechRequestExperiment, OPTTSTTSRequestFeatureFlags;

@interface OPTTSMutableTextToSpeechRequest : OPTTSTextToSpeechRequest

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
@property (nonatomic,copy) OPTTSTextToSpeechRequestMeta * meta_info; 
@property (nonatomic,copy) OPTTSTextToSpeechRequestContext * context; 
@property (nonatomic,copy) OPTTSTextToSpeechRequestExperiment * experiment; 
@property (nonatomic,copy) OPTTSTTSRequestFeatureFlags * feature_flags; 
+(id)genderStringFromGender:(long long)arg1 ;
+(id)requestFromVSRequest:(id)arg1 ;
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(OPTTSTextToSpeechRequestExperiment *)experiment;
-(void)setText:(NSString *)arg1 ;
-(OPTTSTextToSpeechRequestContext *)context;
-(NSString *)text;
-(OPTTSTextToSpeechRequestMeta *)meta_info;
-(NSString *)speech_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setMeta_info:(OPTTSTextToSpeechRequestMeta *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
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
-(OPTTSTTSRequestFeatureFlags *)feature_flags;
-(void)setFeature_flags:(OPTTSTTSRequestFeatureFlags *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExperiment:(OPTTSTextToSpeechRequestExperiment *)arg1 ;
-(NSString *)language;
-(void)setContext:(OPTTSTextToSpeechRequestContext *)arg1 ;
@end

