/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTMultiUserStartSpeechRequest.h>

@class FTStartSpeechRequest, NSArray, NSString;

@interface FTMutableMultiUserStartSpeechRequest : FTMultiUserStartSpeechRequest

@property (nonatomic,copy) FTStartSpeechRequest * start_speech_request; 
@property (nonatomic,copy) NSArray * user_parameters; 
@property (nonatomic,copy) NSString * primary_speech_id; 
-(id)init;
-(FTStartSpeechRequest *)start_speech_request;
-(void)setStart_speech_request:(FTStartSpeechRequest *)arg1 ;
-(NSArray *)user_parameters;
-(void)setUser_parameters:(NSArray *)arg1 ;
-(NSString *)primary_speech_id;
-(void)setPrimary_speech_id:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

