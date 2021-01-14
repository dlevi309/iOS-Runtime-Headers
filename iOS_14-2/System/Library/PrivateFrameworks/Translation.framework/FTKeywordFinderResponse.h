/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, FTRecognitionSausage, NSArray;

@interface FTKeywordFinderResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const KeywordFinderResponse* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) int return_code; 
@property (nonatomic,readonly) NSString * return_str; 
@property (nonatomic,readonly) FTRecognitionSausage * corrected_sausage; 
@property (nonatomic,readonly) NSArray * n_best_list; 
-(int)return_code;
-(NSString *)return_str;
-(NSString *)speech_id;
-(NSString *)session_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const KeywordFinderResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::KeywordFinderResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const KeywordFinderResponse*)arg2 ;
-(FTRecognitionSausage *)corrected_sausage;
-(NSArray *)n_best_list;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

