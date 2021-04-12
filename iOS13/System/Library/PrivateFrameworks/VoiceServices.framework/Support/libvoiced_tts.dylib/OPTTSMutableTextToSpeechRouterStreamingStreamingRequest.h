/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechRouterStreamingStreamingRequest.h>

@class OPTTSStartTextToSpeechStreamingRequest;

@interface OPTTSMutableTextToSpeechRouterStreamingStreamingRequest : OPTTSTextToSpeechRouterStreamingStreamingRequest

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) OPTTSStartTextToSpeechStreamingRequest * contentAsOPTTSStartTextToSpeechStreamingRequest; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)content_type;
-(OPTTSStartTextToSpeechStreamingRequest *)contentAsOPTTSStartTextToSpeechStreamingRequest;
-(void)setContent_type:(long long)arg1 ;
-(void)setContentAsOPTTSStartTextToSpeechStreamingRequest:(OPTTSStartTextToSpeechStreamingRequest *)arg1 ;
@end

