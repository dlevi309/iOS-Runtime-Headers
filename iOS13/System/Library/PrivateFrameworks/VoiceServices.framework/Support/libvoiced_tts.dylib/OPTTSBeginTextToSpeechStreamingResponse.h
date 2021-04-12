/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, OPTTSAudioDescription, OPTTSTextToSpeechMeta;

@interface OPTTSBeginTextToSpeechStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const BeginTextToSpeechStreamingResponse* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) int error_code; 
@property (nonatomic,readonly) NSString * error_str; 
@property (nonatomic,readonly) NSString * stream_id; 
@property (nonatomic,readonly) long long audio_type; 
@property (nonatomic,readonly) OPTTSAudioDescription * decoder_description; 
@property (nonatomic,readonly) OPTTSAudioDescription * playback_description; 
@property (nonatomic,readonly) OPTTSTextToSpeechMeta * meta_info; 
@property (nonatomic,readonly) float streaming_playback_buffer_size_in_seconds; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stream_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const BeginTextToSpeechStreamingResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::BeginTextToSpeechStreamingResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const BeginTextToSpeechStreamingResponse*)arg2 ;
-(NSString *)speech_id;
-(NSString *)session_id;
-(long long)audio_type;
-(OPTTSTextToSpeechMeta *)meta_info;
-(int)error_code;
-(NSString *)error_str;
-(OPTTSAudioDescription *)decoder_description;
-(OPTTSAudioDescription *)playback_description;
-(float)streaming_playback_buffer_size_in_seconds;
@end

