/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTStartLanguageDetectionRequest.h>

@class NSString, NSArray;

@interface FTMutableStartLanguageDetectionRequest : FTStartLanguageDetectionRequest

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSArray * locales; 
@property (assign,nonatomic) long long codec; 
-(long long)codec;
-(void)setCodec:(long long)arg1 ;
-(id)init;
-(NSArray *)locales;
-(void)setLocales:(NSArray *)arg1 ;
-(NSString *)speech_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

