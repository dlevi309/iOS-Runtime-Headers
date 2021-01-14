/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray;

@interface FTShortcutFuzzyMatchRequest_StringTokenPair : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const StringTokenPair* _root;

}

@property (nonatomic,readonly) NSString * raw_string; 
@property (nonatomic,readonly) NSArray * tokens; 
-(NSArray *)tokens;
-(id)initWithFlatbuffData:(id)arg1 root:(const StringTokenPair*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::ShortcutFuzzyMatchRequest_::StringTokenPair>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const StringTokenPair*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)raw_string;
@end

