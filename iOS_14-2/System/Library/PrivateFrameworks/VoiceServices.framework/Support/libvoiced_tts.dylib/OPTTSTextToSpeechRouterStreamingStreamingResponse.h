/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, OPTTSBeginTextToSpeechStreamingResponse, OPTTSPartialTextToSpeechStreamingResponse, OPTTSFinalTextToSpeechStreamingResponse;

@interface OPTTSTextToSpeechRouterStreamingStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechRouterStreamingStreamingResponse* _root;

}

@property (nonatomic,readonly) long long content_type; 
@property (nonatomic,readonly) OPTTSBeginTextToSpeechStreamingResponse * contentAsOPTTSBeginTextToSpeechStreamingResponse; 
@property (nonatomic,readonly) OPTTSPartialTextToSpeechStreamingResponse * contentAsOPTTSPartialTextToSpeechStreamingResponse; 
@property (nonatomic,readonly) OPTTSFinalTextToSpeechStreamingResponse * contentAsOPTTSFinalTextToSpeechStreamingResponse; 
-(long long)content_type;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRouterStreamingStreamingResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRouterStreamingStreamingResponse*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(OPTTSBeginTextToSpeechStreamingResponse *)contentAsOPTTSBeginTextToSpeechStreamingResponse;
-(OPTTSPartialTextToSpeechStreamingResponse *)contentAsOPTTSPartialTextToSpeechStreamingResponse;
-(OPTTSFinalTextToSpeechStreamingResponse *)contentAsOPTTSFinalTextToSpeechStreamingResponse;
@end

