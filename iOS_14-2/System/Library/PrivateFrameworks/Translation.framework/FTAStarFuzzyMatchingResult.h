/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray;

@interface FTAStarFuzzyMatchingResult : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const AStarFuzzyMatchingResult* _root;

}

@property (nonatomic,readonly) NSString * matched_result; 
@property (nonatomic,readonly) long long total_score; 
@property (nonatomic,readonly) int tm_score; 
@property (nonatomic,readonly) NSArray * match_ids; 
@property (nonatomic,readonly) NSString * debug_information; 
-(int)tm_score;
-(id)initWithFlatbuffData:(id)arg1 root:(const AStarFuzzyMatchingResult*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::AStarFuzzyMatchingResult>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const AStarFuzzyMatchingResult*)arg2 ;
-(NSString *)matched_result;
-(long long)total_score;
-(NSArray *)match_ids;
-(NSString *)debug_information;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

