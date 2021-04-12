/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechRouterStreamingStreamingResponse.h>

@class OPTTSBeginTextToSpeechStreamingResponse, OPTTSPartialTextToSpeechStreamingResponse, OPTTSFinalTextToSpeechStreamingResponse;

@interface OPTTSMutableTextToSpeechRouterStreamingStreamingResponse : OPTTSTextToSpeechRouterStreamingStreamingResponse

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) OPTTSBeginTextToSpeechStreamingResponse * contentAsOPTTSBeginTextToSpeechStreamingResponse; 
@property (nonatomic,copy) OPTTSPartialTextToSpeechStreamingResponse * contentAsOPTTSPartialTextToSpeechStreamingResponse; 
@property (nonatomic,copy) OPTTSFinalTextToSpeechStreamingResponse * contentAsOPTTSFinalTextToSpeechStreamingResponse; 
-(id)init;
-(long long)content_type;
-(void)setContent_type:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(OPTTSBeginTextToSpeechStreamingResponse *)contentAsOPTTSBeginTextToSpeechStreamingResponse;
-(OPTTSPartialTextToSpeechStreamingResponse *)contentAsOPTTSPartialTextToSpeechStreamingResponse;
-(OPTTSFinalTextToSpeechStreamingResponse *)contentAsOPTTSFinalTextToSpeechStreamingResponse;
-(void)setContentAsOPTTSBeginTextToSpeechStreamingResponse:(OPTTSBeginTextToSpeechStreamingResponse *)arg1 ;
-(void)setContentAsOPTTSPartialTextToSpeechStreamingResponse:(OPTTSPartialTextToSpeechStreamingResponse *)arg1 ;
-(void)setContentAsOPTTSFinalTextToSpeechStreamingResponse:(OPTTSFinalTextToSpeechStreamingResponse *)arg1 ;
@end

