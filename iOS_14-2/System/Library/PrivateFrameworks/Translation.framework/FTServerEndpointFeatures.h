/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSArray, NSString;

@interface FTServerEndpointFeatures : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const ServerEndpointFeatures* _root;

}

@property (nonatomic,readonly) int processed_audio_duration_ms; 
@property (nonatomic,readonly) int num_of_words; 
@property (nonatomic,readonly) int trailing_silence_duration; 
@property (nonatomic,readonly) double eos_likelihood; 
@property (nonatomic,readonly) NSArray * pause_counts; 
@property (nonatomic,readonly) double silence_posterior; 
@property (nonatomic,readonly) NSString * task_name; 
@property (nonatomic,readonly) NSString * speech_id; 
-(NSString *)task_name;
-(NSString *)speech_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const ServerEndpointFeatures*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::ServerEndpointFeatures>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const ServerEndpointFeatures*)arg2 ;
-(int)num_of_words;
-(int)trailing_silence_duration;
-(double)eos_likelihood;
-(NSArray *)pause_counts;
-(double)silence_posterior;
-(int)processed_audio_duration_ms;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

