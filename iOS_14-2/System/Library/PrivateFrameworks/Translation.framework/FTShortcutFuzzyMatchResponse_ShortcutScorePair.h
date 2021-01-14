/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTShortcutFuzzyMatchResponse_ShortcutScorePair : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const ShortcutScorePair* _root;

}

@property (nonatomic,readonly) NSString * shortcut; 
@property (nonatomic,readonly) double similarity_score; 
-(NSString *)shortcut;
-(id)initWithFlatbuffData:(id)arg1 root:(const ShortcutScorePair*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::ShortcutFuzzyMatchResponse_::ShortcutScorePair>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const ShortcutScorePair*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)similarity_score;
@end

