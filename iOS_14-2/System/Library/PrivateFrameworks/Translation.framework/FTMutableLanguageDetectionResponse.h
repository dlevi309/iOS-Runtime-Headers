/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTLanguageDetectionResponse.h>

@class NSString, NSArray;

@interface FTMutableLanguageDetectionResponse : FTLanguageDetectionResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_string; 
@property (nonatomic,copy) NSString * detected_locale; 
@property (nonatomic,copy) NSArray * predictions; 
-(id)init;
-(NSArray *)predictions;
-(void)setReturn_code:(int)arg1 ;
-(int)return_code;
-(NSString *)return_string;
-(NSString *)speech_id;
-(void)setReturn_string:(NSString *)arg1 ;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(void)setPredictions:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)detected_locale;
-(void)setDetected_locale:(NSString *)arg1 ;
@end

