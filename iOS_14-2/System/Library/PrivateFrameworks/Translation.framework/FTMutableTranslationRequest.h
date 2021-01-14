/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTranslationRequest.h>

@class NSString, NSArray, FTSiriTranslationInfo, FTSpeechTranslationInfo, FTSiriPayloadTranslationInfo, FTWebTranslationInfo;

@interface FTMutableTranslationRequest : FTTranslationRequest

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * request_id; 
@property (nonatomic,copy) NSString * task; 
@property (nonatomic,copy) NSString * source_language; 
@property (nonatomic,copy) NSString * target_language; 
@property (nonatomic,copy) NSArray * translation_phrase; 
@property (nonatomic,copy) FTSiriTranslationInfo * siri_translation_info; 
@property (nonatomic,copy) FTSpeechTranslationInfo * speech_translation_info; 
@property (nonatomic,copy) FTSiriPayloadTranslationInfo * siri_payload_translation_info; 
@property (nonatomic,copy) NSString * sequence_id; 
@property (nonatomic,copy) FTWebTranslationInfo * web_translation_info; 
@property (assign,nonatomic) BOOL disable_log; 
@property (assign,nonatomic) long long opt_in_status; 
@property (nonatomic,copy) NSString * app_id; 
-(NSString *)task;
-(id)init;
-(NSString *)app_id;
-(void)setTask:(NSString *)arg1 ;
-(NSArray *)translation_phrase;
-(NSString *)source_language;
-(NSString *)target_language;
-(FTSiriTranslationInfo *)siri_translation_info;
-(void)setSiri_translation_info:(FTSiriTranslationInfo *)arg1 ;
-(FTSpeechTranslationInfo *)speech_translation_info;
-(void)setSpeech_translation_info:(FTSpeechTranslationInfo *)arg1 ;
-(FTSiriPayloadTranslationInfo *)siri_payload_translation_info;
-(void)setSiri_payload_translation_info:(FTSiriPayloadTranslationInfo *)arg1 ;
-(NSString *)sequence_id;
-(NSString *)request_id;
-(NSString *)speech_id;
-(void)setSequence_id:(NSString *)arg1 ;
-(FTWebTranslationInfo *)web_translation_info;
-(void)setWeb_translation_info:(FTWebTranslationInfo *)arg1 ;
-(BOOL)disable_log;
-(void)setDisable_log:(BOOL)arg1 ;
-(long long)opt_in_status;
-(void)setOpt_in_status:(long long)arg1 ;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setRequest_id:(NSString *)arg1 ;
-(void)setSource_language:(NSString *)arg1 ;
-(void)setTarget_language:(NSString *)arg1 ;
-(void)setTranslation_phrase:(NSArray *)arg1 ;
-(void)setApp_id:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

