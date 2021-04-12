/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray;

@interface FTAStarFuzzyMatchingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const AStarFuzzyMatchingResponse* _root;

}

@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) int return_code; 
@property (nonatomic,readonly) NSString * return_str; 
@property (nonatomic,readonly) unsigned latency; 
@property (nonatomic,readonly) unsigned expanded_path; 
@property (nonatomic,readonly) NSArray * results; 
-(NSArray *)results;
-(unsigned)latency;
-(int)return_code;
-(NSString *)return_str;
-(NSString *)session_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const AStarFuzzyMatchingResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::AStarFuzzyMatchingResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const AStarFuzzyMatchingResponse*)arg2 ;
-(unsigned)expanded_path;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

