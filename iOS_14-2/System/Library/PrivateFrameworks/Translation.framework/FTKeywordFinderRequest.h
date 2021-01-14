/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray, FTRecognitionResult;

@interface FTKeywordFinderRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const KeywordFinderRequest* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSArray * keywords; 
@property (nonatomic,readonly) FTRecognitionResult * recognition_result; 
@property (nonatomic,readonly) BOOL enable_sanitization; 
-(NSArray *)keywords;
-(FTRecognitionResult *)recognition_result;
-(NSString *)speech_id;
-(NSString *)session_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const KeywordFinderRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::KeywordFinderRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const KeywordFinderRequest*)arg2 ;
-(BOOL)enable_sanitization;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

