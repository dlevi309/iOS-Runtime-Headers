/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray;

@interface FTBatchTranslationResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const BatchTranslationResponse* _root;

}

@property (nonatomic,readonly) NSString * request_id; 
@property (nonatomic,readonly) int return_code; 
@property (nonatomic,readonly) NSString * return_string; 
@property (nonatomic,readonly) NSString * paragraph_id; 
@property (nonatomic,readonly) NSString * translated_text; 
@property (nonatomic,readonly) NSArray * span; 
-(NSArray *)span;
-(NSString *)request_id;
-(NSString *)paragraph_id;
-(int)return_code;
-(NSString *)return_string;
-(NSString *)translated_text;
-(id)initWithFlatbuffData:(id)arg1 root:(const BatchTranslationResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::BatchTranslationResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const BatchTranslationResponse*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

