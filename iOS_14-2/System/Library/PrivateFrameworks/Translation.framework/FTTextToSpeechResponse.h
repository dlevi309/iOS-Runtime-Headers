/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, FTAudioDescription, NSArray, FTTextToSpeechMeta, FTTextToSpeechFeature;

@interface FTTextToSpeechResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

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
@property (nonatomic,readonly) FTAudioDescription * decoder_description; 
@property (nonatomic,readonly) FTAudioDescription * playback_description; 
@property (nonatomic,readonly) NSArray * word_timing_info; 
@property (nonatomic,readonly) FTTextToSpeechMeta * meta_info; 
@property (nonatomic,readonly) FTTextToSpeechFeature * feature; 
-(FTTextToSpeechFeature *)feature;
-(NSData *)audio;
-(void)audio:(/*^block*/id)arg1 ;
-(FTTextToSpeechMeta *)meta_info;
-(NSString *)speech_id;
-(int)error_code;
-(NSString *)error_str;
-(FTAudioDescription *)decoder_description;
-(NSString *)session_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TextToSpeechResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechResponse*)arg2 ;
-(long long)audio_type;
-(int)sample_rate;
-(FTAudioDescription *)playback_description;
-(NSArray *)word_timing_info;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

