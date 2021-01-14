/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTextToSpeechRouterStreamingStreamingResponse.h>

@class FTBeginTextToSpeechStreamingResponse, FTPartialTextToSpeechStreamingResponse, FTFinalTextToSpeechStreamingResponse;

@interface FTMutableTextToSpeechRouterStreamingStreamingResponse : FTTextToSpeechRouterStreamingStreamingResponse

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) FTBeginTextToSpeechStreamingResponse * contentAsFTBeginTextToSpeechStreamingResponse; 
@property (nonatomic,copy) FTPartialTextToSpeechStreamingResponse * contentAsFTPartialTextToSpeechStreamingResponse; 
@property (nonatomic,copy) FTFinalTextToSpeechStreamingResponse * contentAsFTFinalTextToSpeechStreamingResponse; 
-(id)init;
-(FTBeginTextToSpeechStreamingResponse *)contentAsFTBeginTextToSpeechStreamingResponse;
-(void)setContentAsFTBeginTextToSpeechStreamingResponse:(FTBeginTextToSpeechStreamingResponse *)arg1 ;
-(FTPartialTextToSpeechStreamingResponse *)contentAsFTPartialTextToSpeechStreamingResponse;
-(void)setContentAsFTPartialTextToSpeechStreamingResponse:(FTPartialTextToSpeechStreamingResponse *)arg1 ;
-(FTFinalTextToSpeechStreamingResponse *)contentAsFTFinalTextToSpeechStreamingResponse;
-(void)setContentAsFTFinalTextToSpeechStreamingResponse:(FTFinalTextToSpeechStreamingResponse *)arg1 ;
-(long long)content_type;
-(void)setContent_type:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

