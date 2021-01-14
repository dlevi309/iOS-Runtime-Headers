/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTStartSpeechTranslationLoggingRequest.h>

@class NSString, FTTranslationLocalePair, FTLanguageDetected, NSArray;

@interface FTMutableStartSpeechTranslationLoggingRequest : FTStartSpeechTranslationLoggingRequest

@property (nonatomic,copy) NSString * conversation_id; 
@property (nonatomic,copy) NSString * request_id; 
@property (nonatomic,copy) FTTranslationLocalePair * translation_locale_pair; 
@property (nonatomic,copy) FTLanguageDetected * detected_locale; 
@property (nonatomic,copy) NSString * user_selected_locale; 
@property (nonatomic,copy) NSArray * senses; 
@property (nonatomic,copy) NSString * user_selected_sense; 
@property (nonatomic,copy) NSArray * user_interacted_senses; 
-(id)init;
-(NSArray *)senses;
-(NSString *)request_id;
-(void)setRequest_id:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)conversation_id;
-(void)setConversation_id:(NSString *)arg1 ;
-(FTTranslationLocalePair *)translation_locale_pair;
-(FTLanguageDetected *)detected_locale;
-(void)setTranslation_locale_pair:(FTTranslationLocalePair *)arg1 ;
-(void)setDetected_locale:(FTLanguageDetected *)arg1 ;
-(NSString *)user_selected_locale;
-(void)setUser_selected_locale:(NSString *)arg1 ;
-(void)setSenses:(NSArray *)arg1 ;
-(NSString *)user_selected_sense;
-(void)setUser_selected_sense:(NSString *)arg1 ;
-(NSArray *)user_interacted_senses;
-(void)setUser_interacted_senses:(NSArray *)arg1 ;
@end

