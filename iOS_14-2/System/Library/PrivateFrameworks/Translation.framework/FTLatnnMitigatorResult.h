/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTLatnnMitigatorResult : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const LatnnMitigatorResult* _root;

}

@property (nonatomic,readonly) BOOL processed; 
@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) double threshold; 
@property (nonatomic,readonly) double score; 
-(double)threshold;
-(double)score;
-(BOOL)processed;
-(id)initWithFlatbuffData:(id)arg1 root:(const LatnnMitigatorResult*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::LatnnMitigatorResult>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const LatnnMitigatorResult*)arg2 ;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

