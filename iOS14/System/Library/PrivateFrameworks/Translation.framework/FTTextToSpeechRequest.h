/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray, FTTextToSpeechRequestMeta, FTTextToSpeechRequestContext, FTTextToSpeechRequestExperiment, FTTTSRequestFeatureFlags, FTTextToSpeechRequestDebug, FTTextToSpeechUserProfile;

@interface FTTextToSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

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
@property (nonatomic,readonly) FTTextToSpeechRequestMeta * meta_info; 
@property (nonatomic,readonly) FTTextToSpeechRequestContext * context; 
@property (nonatomic,readonly) FTTextToSpeechRequestExperiment * experiment; 
@property (nonatomic,readonly) FTTTSRequestFeatureFlags * feature_flags; 
@property (nonatomic,readonly) FTTextToSpeechRequestDebug * debug; 
@property (nonatomic,readonly) FTTextToSpeechUserProfile * profile; 
-(FTTextToSpeechRequestExperiment *)experiment;
-(FTTextToSpeechRequestContext *)context;
-(FTTextToSpeechUserProfile *)profile;
-(NSString *)text;
-(FTTextToSpeechRequestMeta *)meta_info;
-(NSString *)speech_id;
-(NSString *)session_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TextToSpeechRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRequest*)arg2 ;
-(FTTextToSpeechRequestDebug *)debug;
-(NSString *)gender;
-(NSArray *)context_info;
-(long long)audio_type;
-(BOOL)enable_word_timing_info;
-(NSString *)voice_name;
-(long long)preferred_voice_type;
-(FTTTSRequestFeatureFlags *)feature_flags;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

