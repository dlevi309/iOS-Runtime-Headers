/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSArray;

@interface FTFinishAudio : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const FinishAudio* _root;

}

@property (nonatomic,readonly) int packet_count; 
@property (nonatomic,readonly) float total_audio_recorded_seconds; 
@property (nonatomic,readonly) NSArray * features_at_endpoint; 
@property (nonatomic,readonly) NSArray * server_feature_latency_distribution; 
-(int)packet_count;
-(float)total_audio_recorded_seconds;
-(NSArray *)features_at_endpoint;
-(NSArray *)server_feature_latency_distribution;
-(id)initWithFlatbuffData:(id)arg1 root:(const FinishAudio*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::FinishAudio>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const FinishAudio*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

