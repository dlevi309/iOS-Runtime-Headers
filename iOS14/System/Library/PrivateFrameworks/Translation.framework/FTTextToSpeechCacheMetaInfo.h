/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, FTTextToSpeechMeta, FTAudioDescription, NSString;

@interface FTTextToSpeechCacheMetaInfo : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechCacheMetaInfo* _root;

}

@property (nonatomic,readonly) FTTextToSpeechMeta * meta_info; 
@property (nonatomic,readonly) long long audio_type; 
@property (nonatomic,readonly) BOOL enable_word_timing_info; 
@property (nonatomic,readonly) FTAudioDescription * decoder_description; 
@property (nonatomic,readonly) FTAudioDescription * playback_description; 
@property (nonatomic,readonly) int audio_length; 
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) NSString * original_session_id; 
-(NSString *)text;
-(FTTextToSpeechMeta *)meta_info;
-(FTAudioDescription *)decoder_description;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechCacheMetaInfo*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TextToSpeechCacheMetaInfo>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechCacheMetaInfo*)arg2 ;
-(long long)audio_type;
-(BOOL)enable_word_timing_info;
-(FTAudioDescription *)playback_description;
-(int)audio_length;
-(NSString *)original_session_id;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

