/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, OPTTSAudioDescription, NSArray, OPTTSTextToSpeechMeta;

@interface OPTTSTextToSpeechResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechResponse* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) int error_code; 
@property (nonatomic,readonly) NSString * error_str; 
@property (nonatomic,readonly) long long audio_type; 
@property (nonatomic,readonly) int sample_rate; 
@property (nonatomic,readonly) NSData * audio; 
@property (nonatomic,readonly) OPTTSAudioDescription * decoder_description; 
@property (nonatomic,readonly) OPTTSAudioDescription * playback_description; 
@property (nonatomic,readonly) NSArray * word_timing_info; 
@property (nonatomic,readonly) OPTTSTextToSpeechMeta * meta_info; 
-(NSData *)audio;
-(void)audio:(/*^block*/id)arg1 ;
-(OPTTSTextToSpeechMeta *)meta_info;
-(NSString *)speech_id;
-(int)error_code;
-(NSString *)error_str;
-(OPTTSAudioDescription *)decoder_description;
-(NSString *)session_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TextToSpeechResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechResponse*)arg2 ;
-(long long)audio_type;
-(int)sample_rate;
-(OPTTSAudioDescription *)playback_description;
-(NSArray *)word_timing_info;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

