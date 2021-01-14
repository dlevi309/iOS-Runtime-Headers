/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray;

@interface FTTranslationResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TranslationResponse* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * request_id; 
@property (nonatomic,readonly) int return_code; 
@property (nonatomic,readonly) NSString * return_string; 
@property (nonatomic,readonly) NSArray * n_best_translated_phrases; 
@property (nonatomic,readonly) NSString * engine_input; 
@property (nonatomic,readonly) NSArray * engine_output; 
@property (nonatomic,readonly) NSString * sequence_id; 
-(NSString *)sequence_id;
-(NSString *)request_id;
-(int)return_code;
-(NSString *)return_string;
-(NSString *)speech_id;
-(NSArray *)n_best_translated_phrases;
-(NSString *)engine_input;
-(NSArray *)engine_output;
-(id)initWithFlatbuffData:(id)arg1 root:(const TranslationResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TranslationResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TranslationResponse*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

