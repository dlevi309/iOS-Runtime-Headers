/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(OPTTSTextToSpeechMeta *)meta_info;
-(NSString *)speech_id;
-(int)error_code;
-(NSString *)error_str;
-(OPTTSAudioDescription *)decoder_description;
-(NSString *)session_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const BeginTextToSpeechStreamingResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::BeginTextToSpeechStreamingResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const BeginTextToSpeechStreamingResponse*)arg2 ;
-(long long)audio_type;
-(OPTTSAudioDescription *)playback_description;
-(NSString *)stream_id;
-(float)streaming_playback_buffer_size_in_seconds;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

