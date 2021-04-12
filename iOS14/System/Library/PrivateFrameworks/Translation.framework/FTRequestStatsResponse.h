/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSArray, NSString;

@interface FTRequestStatsResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const RequestStatsResponse* _root;

}

@property (nonatomic,readonly) NSArray * bool_stats; 
@property (nonatomic,readonly) NSArray * int32_stats; 
@property (nonatomic,readonly) NSArray * double_stats; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * request_locale; 
-(NSArray *)bool_stats;
-(NSArray *)int32_stats;
-(NSArray *)double_stats;
-(NSString *)request_locale;
-(NSString *)speech_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const RequestStatsResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::RequestStatsResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const RequestStatsResponse*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

