/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, OPTTSStartTextToSpeechStreamingRequest;

@interface OPTTSTextToSpeechRouterStreamingStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechRouterStreamingStreamingRequest* _root;

}

@property (nonatomic,readonly) long long content_type; 
@property (nonatomic,readonly) OPTTSStartTextToSpeechStreamingRequest * contentAsOPTTSStartTextToSpeechStreamingRequest; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRouterStreamingStreamingRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRouterStreamingStreamingRequest*)arg2 ;
-(long long)content_type;
-(OPTTSStartTextToSpeechStreamingRequest *)contentAsOPTTSStartTextToSpeechStreamingRequest;
@end

