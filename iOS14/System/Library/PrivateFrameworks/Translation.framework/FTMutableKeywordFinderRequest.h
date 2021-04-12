/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTKeywordFinderRequest.h>

@class NSString, NSArray, FTRecognitionResult;

@interface FTMutableKeywordFinderRequest : FTKeywordFinderRequest

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSArray * keywords; 
@property (nonatomic,copy) FTRecognitionResult * recognition_result; 
@property (assign,nonatomic) BOOL enable_sanitization; 
-(void)setKeywords:(NSArray *)arg1 ;
-(id)init;
-(NSArray *)keywords;
-(void)setLanguage:(NSString *)arg1 ;
-(FTRecognitionResult *)recognition_result;
-(void)setRecognition_result:(FTRecognitionResult *)arg1 ;
-(NSString *)speech_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(BOOL)enable_sanitization;
-(void)setEnable_sanitization:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

