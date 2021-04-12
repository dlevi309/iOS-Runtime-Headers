/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTStartMultilingualSpeechRequest.h>

@class FTStartSpeechRequest, NSArray;

@interface FTMutableStartMultilingualSpeechRequest : FTStartMultilingualSpeechRequest

@property (nonatomic,copy) FTStartSpeechRequest * start_speech_request; 
@property (nonatomic,copy) NSArray * language_parameters_by_id; 
-(id)init;
-(FTStartSpeechRequest *)start_speech_request;
-(void)setStart_speech_request:(FTStartSpeechRequest *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)language_parameters_by_id;
-(void)setLanguage_parameters_by_id:(NSArray *)arg1 ;
@end

