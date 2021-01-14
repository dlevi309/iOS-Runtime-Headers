/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray;

@interface FTBatchTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const BatchTranslationRequest* _root;

}

@property (nonatomic,readonly) NSString * request_id; 
@property (nonatomic,readonly) NSString * task; 
@property (nonatomic,readonly) NSString * source_language; 
@property (nonatomic,readonly) NSString * target_language; 
@property (nonatomic,readonly) NSArray * paragraphs; 
@property (nonatomic,readonly) NSString * app_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) NSString * url; 
@property (nonatomic,readonly) long long opt_in_status; 
-(NSString *)task;
-(NSString *)app_id;
-(NSString *)url;
-(NSString *)source_language;
-(NSString *)target_language;
-(NSString *)request_id;
-(long long)opt_in_status;
-(NSString *)session_id;
-(NSArray *)paragraphs;
-(id)initWithFlatbuffData:(id)arg1 root:(const BatchTranslationRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::BatchTranslationRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const BatchTranslationRequest*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

