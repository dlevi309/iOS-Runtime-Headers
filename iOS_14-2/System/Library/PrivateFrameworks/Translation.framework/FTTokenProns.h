/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray;

@interface FTTokenProns : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TokenProns* _root;

}

@property (nonatomic,readonly) NSString * orthography; 
@property (nonatomic,readonly) NSArray * sanitized_sequences; 
@property (nonatomic,readonly) NSArray * prons; 
@property (nonatomic,readonly) NSArray * normalized_prons; 
-(NSArray *)prons;
-(NSString *)orthography;
-(NSArray *)sanitized_sequences;
-(NSArray *)normalized_prons;
-(id)initWithFlatbuffData:(id)arg1 root:(const TokenProns*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TokenProns>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TokenProns*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

