/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTranslationResponse.h>

@class NSString, NSArray;

@interface FTMutableTranslationResponse : FTTranslationResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * request_id; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_string; 
@property (nonatomic,copy) NSArray * n_best_translated_phrases; 
@property (nonatomic,copy) NSString * engine_input; 
@property (nonatomic,copy) NSArray * engine_output; 
@property (nonatomic,copy) NSString * sequence_id; 
-(id)init;
-(void)setReturn_code:(int)arg1 ;
-(NSString *)sequence_id;
-(NSString *)request_id;
-(int)return_code;
-(NSString *)return_string;
-(NSString *)speech_id;
-(void)setSequence_id:(NSString *)arg1 ;
-(void)setReturn_string:(NSString *)arg1 ;
-(NSArray *)n_best_translated_phrases;
-(void)setN_best_translated_phrases:(NSArray *)arg1 ;
-(NSString *)engine_input;
-(void)setEngine_input:(NSString *)arg1 ;
-(NSArray *)engine_output;
-(void)setEngine_output:(NSArray *)arg1 ;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setRequest_id:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

