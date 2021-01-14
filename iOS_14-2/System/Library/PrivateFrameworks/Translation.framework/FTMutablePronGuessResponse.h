/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTPronGuessResponse.h>

@class NSString, FTVocToken, NSArray;

@interface FTMutablePronGuessResponse : FTPronGuessResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int error_code; 
@property (nonatomic,copy) NSString * error_str; 
@property (nonatomic,copy) NSString * apg_id; 
@property (nonatomic,copy) FTVocToken * voc_token; 
@property (nonatomic,copy) NSArray * tts_pronunciations; 
@property (nonatomic,copy) NSArray * human_readable_prons; 
-(id)init;
-(NSString *)apg_id;
-(void)setError_code:(int)arg1 ;
-(void)setError_str:(NSString *)arg1 ;
-(void)setApg_id:(NSString *)arg1 ;
-(FTVocToken *)voc_token;
-(void)setVoc_token:(FTVocToken *)arg1 ;
-(NSArray *)tts_pronunciations;
-(void)setTts_pronunciations:(NSArray *)arg1 ;
-(NSArray *)human_readable_prons;
-(void)setHuman_readable_prons:(NSArray *)arg1 ;
-(NSString *)speech_id;
-(int)error_code;
-(NSString *)error_str;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

