/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTSpan : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const Span* _root;

}

@property (nonatomic,readonly) int start_index; 
@property (nonatomic,readonly) int end_index; 
@property (nonatomic,readonly) BOOL do_not_translate; 
@property (nonatomic,readonly) NSString * meta_info; 
-(int)start_index;
-(int)end_index;
-(BOOL)do_not_translate;
-(NSString *)meta_info;
-(id)initWithFlatbuffData:(id)arg1 root:(const Span*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::Span>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const Span*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

