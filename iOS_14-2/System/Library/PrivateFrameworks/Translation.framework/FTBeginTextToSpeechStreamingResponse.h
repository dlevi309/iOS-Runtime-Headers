/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, FTAudioDescription, FTTextToSpeechMeta;

@interface FTBeginTextToSpeechStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

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
@property (nonatomic,readonly) FTAudioDescription * decoder_description; 
@property (nonatomic,readonly) FTAudioDescription * playback_description; 
@property (nonatomic,readonly) FTTextToSpeechMeta * meta_info; 
@property (nonatomic,readonly) float streaming_playback_buffer_size_in_seconds; 
-(FTTextToSpeechMeta *)meta_info;
-(NSString *)speech_id;
-(int)error_code;
-(NSString *)error_str;
-(FTAudioDescription *)decoder_description;
-(NSString *)session_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const BeginTextToSpeechStreamingResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::BeginTextToSpeechStreamingResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const BeginTextToSpeechStreamingResponse*)arg2 ;
-(long long)audio_type;
-(FTAudioDescription *)playback_description;
-(NSString *)stream_id;
-(float)streaming_playback_buffer_size_in_seconds;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

