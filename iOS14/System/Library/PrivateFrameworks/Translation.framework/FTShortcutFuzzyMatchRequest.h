/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, FTShortcutFuzzyMatchRequest_StringTokenPair, NSArray, NSString;

@interface FTShortcutFuzzyMatchRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const ShortcutFuzzyMatchRequest* _root;

}

@property (nonatomic,readonly) FTShortcutFuzzyMatchRequest_StringTokenPair * utterance; 
@property (nonatomic,readonly) NSArray * shortcuts; 
@property (nonatomic,readonly) NSString * request_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) NSString * interaction_id; 
@property (nonatomic,readonly) NSString * locale; 
@property (nonatomic,readonly) NSString * device_type; 
@property (nonatomic,readonly) NSString * context; 
-(NSString *)locale;
-(FTShortcutFuzzyMatchRequest_StringTokenPair *)utterance;
-(NSString *)context;
-(NSString *)device_type;
-(NSString *)request_id;
-(NSString *)session_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const ShortcutFuzzyMatchRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::ShortcutFuzzyMatchRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const ShortcutFuzzyMatchRequest*)arg2 ;
-(NSArray *)shortcuts;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)interaction_id;
@end

