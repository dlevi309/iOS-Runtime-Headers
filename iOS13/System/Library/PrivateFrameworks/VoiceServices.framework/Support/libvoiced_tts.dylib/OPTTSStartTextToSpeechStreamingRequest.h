/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray, OPTTSTextToSpeechRequestMeta;

@interface OPTTSStartTextToSpeechStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const StartTextToSpeechStreamingRequest* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) NSString * stream_id; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * gender; 
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) long long audio_type; 
@property (nonatomic,readonly) BOOL enable_word_timing_info; 
@property (nonatomic,readonly) NSString * voice_name; 
@property (nonatomic,readonly) NSArray * context_info; 
@property (nonatomic,readonly) long long preferred_voice_type; 
@property (nonatomic,readonly) OPTTSTextToSpeechRequestMeta * meta_info; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(NSString *)language;
-(NSString *)gender;
-(NSString *)stream_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const StartTextToSpeechStreamingRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::StartTextToSpeechStreamingRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const StartTextToSpeechStreamingRequest*)arg2 ;
-(NSString *)speech_id;
-(NSString *)session_id;
-(long long)audio_type;
-(BOOL)enable_word_timing_info;
-(NSString *)voice_name;
-(NSArray *)context_info;
-(long long)preferred_voice_type;
-(OPTTSTextToSpeechRequestMeta *)meta_info;
@end

