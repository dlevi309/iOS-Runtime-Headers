/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray, OPTTSTextToSpeechRequestMeta, OPTTSTextToSpeechRequestContext, OPTTSTextToSpeechRequestExperiment, OPTTSTTSRequestFeatureFlags;

@interface OPTTSTextToSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechRequest* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * gender; 
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) long long audio_type; 
@property (nonatomic,readonly) BOOL enable_word_timing_info; 
@property (nonatomic,readonly) NSString * voice_name; 
@property (nonatomic,readonly) NSArray * context_info; 
@property (nonatomic,readonly) long long preferred_voice_type; 
@property (nonatomic,readonly) OPTTSTextToSpeechRequestMeta * meta_info; 
@property (nonatomic,readonly) OPTTSTextToSpeechRequestContext * context; 
@property (nonatomic,readonly) OPTTSTextToSpeechRequestExperiment * experiment; 
@property (nonatomic,readonly) OPTTSTTSRequestFeatureFlags * feature_flags; 
-(OPTTSTextToSpeechRequestExperiment *)experiment;
-(OPTTSTextToSpeechRequestContext *)context;
-(NSString *)text;
-(OPTTSTextToSpeechRequestMeta *)meta_info;
-(NSString *)speech_id;
-(NSString *)session_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TextToSpeechRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRequest*)arg2 ;
-(NSString *)gender;
-(NSArray *)context_info;
-(long long)audio_type;
-(BOOL)enable_word_timing_info;
-(NSString *)voice_name;
-(long long)preferred_voice_type;
-(OPTTSTTSRequestFeatureFlags *)feature_flags;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

