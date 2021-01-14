/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTLmScorerRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const LmScorerRequest* _root;

}

@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * task_name; 
@property (nonatomic,readonly) NSString * transcript; 
-(NSString *)transcript;
-(NSString *)task_name;
-(id)initWithFlatbuffData:(id)arg1 root:(const LmScorerRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::LmScorerRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const LmScorerRequest*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

