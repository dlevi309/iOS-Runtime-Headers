/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTSpeechTranslationMtResponse.h>

@class NSString, FTTranslationLocalePair, NSArray;

@interface FTMutableSpeechTranslationMtResponse : FTSpeechTranslationMtResponse

@property (nonatomic,copy) NSString * conversation_id; 
@property (nonatomic,copy) NSString * request_id; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_str; 
@property (nonatomic,copy) FTTranslationLocalePair * translation_locale_pair; 
@property (nonatomic,copy) NSArray * n_best_translated_phrases; 
-(id)init;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_str:(NSString *)arg1 ;
-(NSString *)request_id;
-(int)return_code;
-(NSString *)return_str;
-(NSArray *)n_best_translated_phrases;
-(void)setN_best_translated_phrases:(NSArray *)arg1 ;
-(void)setRequest_id:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)conversation_id;
-(void)setConversation_id:(NSString *)arg1 ;
-(FTTranslationLocalePair *)translation_locale_pair;
-(void)setTranslation_locale_pair:(FTTranslationLocalePair *)arg1 ;
@end

