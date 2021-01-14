/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTextNormalizationResponse.h>

@class NSString, NSArray;

@interface FTMutableTextNormalizationResponse : FTTextNormalizationResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSArray * tokens; 
@property (assign,nonatomic) int error_code; 
@property (nonatomic,copy) NSString * error_str; 
-(void)setTokens:(NSArray *)arg1 ;
-(NSArray *)tokens;
-(id)init;
-(void)setError_code:(int)arg1 ;
-(void)setError_str:(NSString *)arg1 ;
-(NSString *)speech_id;
-(int)error_code;
-(NSString *)error_str;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

