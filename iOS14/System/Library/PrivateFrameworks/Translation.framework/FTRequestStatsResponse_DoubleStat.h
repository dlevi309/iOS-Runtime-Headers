/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTRequestStatsResponse_DoubleStat : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const DoubleStat* _root;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) double value; 
-(NSString *)name;
-(id)initWithFlatbuffData:(id)arg1 root:(const DoubleStat*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::RequestStatsResponse_::DoubleStat>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const DoubleStat*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)value;
@end

