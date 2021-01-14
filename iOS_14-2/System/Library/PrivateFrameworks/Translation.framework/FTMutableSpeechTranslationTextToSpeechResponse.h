/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTSpeechTranslationTextToSpeechResponse.h>

@class NSString, FTTextToSpeechResponse;

@interface FTMutableSpeechTranslationTextToSpeechResponse : FTSpeechTranslationTextToSpeechResponse

@property (nonatomic,copy) NSString * conversation_id; 
@property (nonatomic,copy) NSString * request_id; 
@property (nonatomic,copy) NSString * target_locale; 
@property (nonatomic,copy) FTTextToSpeechResponse * text_to_speech_response; 
-(id)init;
-(NSString *)request_id;
-(void)setRequest_id:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)target_locale;
-(void)setTarget_locale:(NSString *)arg1 ;
-(NSString *)conversation_id;
-(void)setConversation_id:(NSString *)arg1 ;
-(FTTextToSpeechResponse *)text_to_speech_response;
-(void)setText_to_speech_response:(FTTextToSpeechResponse *)arg1 ;
@end

