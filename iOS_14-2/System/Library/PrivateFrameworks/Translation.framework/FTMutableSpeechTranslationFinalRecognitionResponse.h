/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTSpeechTranslationFinalRecognitionResponse.h>

@class NSString, FTRecognitionResult;

@interface FTMutableSpeechTranslationFinalRecognitionResponse : FTSpeechTranslationFinalRecognitionResponse

@property (nonatomic,copy) NSString * conversation_id; 
@property (nonatomic,copy) NSString * request_id; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_str; 
@property (nonatomic,copy) NSString * source_locale; 
@property (nonatomic,copy) NSString * recognition_text; 
@property (nonatomic,copy) FTRecognitionResult * recognition_result; 
-(id)init;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_str:(NSString *)arg1 ;
-(FTRecognitionResult *)recognition_result;
-(void)setRecognition_result:(FTRecognitionResult *)arg1 ;
-(NSString *)recognition_text;
-(void)setRecognition_text:(NSString *)arg1 ;
-(NSString *)request_id;
-(int)return_code;
-(NSString *)return_str;
-(void)setRequest_id:(NSString *)arg1 ;
-(NSString *)source_locale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource_locale:(NSString *)arg1 ;
-(NSString *)conversation_id;
-(void)setConversation_id:(NSString *)arg1 ;
@end

