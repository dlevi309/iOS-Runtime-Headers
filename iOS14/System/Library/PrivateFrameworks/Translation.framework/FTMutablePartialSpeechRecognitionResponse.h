/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTPartialSpeechRecognitionResponse.h>

@class NSString;

@interface FTMutablePartialSpeechRecognitionResponse : FTPartialSpeechRecognitionResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_str; 
@property (nonatomic,copy) NSString * recognition_text; 
@property (assign,nonatomic) BOOL is_stable_result; 
@property (assign,nonatomic) int audio_duration_ms; 
@property (assign,nonatomic) int confidence; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * request_locale; 
-(int)confidence;
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)request_locale;
-(void)setRequest_locale:(NSString *)arg1 ;
-(void)setConfidence:(int)arg1 ;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_str:(NSString *)arg1 ;
-(NSString *)recognition_text;
-(void)setRecognition_text:(NSString *)arg1 ;
-(BOOL)is_stable_result;
-(void)setIs_stable_result:(BOOL)arg1 ;
-(int)audio_duration_ms;
-(void)setAudio_duration_ms:(int)arg1 ;
-(int)return_code;
-(NSString *)return_str;
-(NSString *)speech_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

