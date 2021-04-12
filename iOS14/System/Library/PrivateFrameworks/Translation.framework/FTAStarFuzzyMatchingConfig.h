/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTAStarFuzzyMatchingConfig : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const AStarFuzzyMatchingConfig* _root;

}

@property (nonatomic,readonly) BOOL enable_completion; 
@property (nonatomic,readonly) unsigned max_results; 
@property (nonatomic,readonly) unsigned max_expand_paths; 
@property (nonatomic,readonly) unsigned max_tm_score; 
@property (nonatomic,readonly) unsigned abs_pruning_threshold; 
@property (nonatomic,readonly) unsigned rel_pruning_threshold; 
@property (nonatomic,readonly) BOOL enable_word_boundary; 
@property (nonatomic,readonly) unsigned max_path_num_at_boundary; 
@property (nonatomic,readonly) float parabolic_error_wide; 
@property (nonatomic,readonly) float parabolic_error_center; 
@property (nonatomic,readonly) float parabolic_error_bias; 
@property (nonatomic,readonly) unsigned parabolic_error_min; 
@property (nonatomic,readonly) unsigned max_latency; 
@property (nonatomic,readonly) unsigned word_penalty; 
@property (nonatomic,readonly) NSString * delimiter; 
-(BOOL)enable_completion;
-(unsigned)max_results;
-(unsigned)max_expand_paths;
-(id)initWithFlatbuffData:(id)arg1 root:(const AStarFuzzyMatchingConfig*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::AStarFuzzyMatchingConfig>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const AStarFuzzyMatchingConfig*)arg2 ;
-(unsigned)max_tm_score;
-(unsigned)abs_pruning_threshold;
-(unsigned)rel_pruning_threshold;
-(BOOL)enable_word_boundary;
-(unsigned)max_path_num_at_boundary;
-(float)parabolic_error_wide;
-(float)parabolic_error_center;
-(unsigned)max_latency;
-(float)parabolic_error_bias;
-(unsigned)parabolic_error_min;
-(unsigned)word_penalty;
-(NSString *)delimiter;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

