/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, FTRecognitionResult;

@interface FTSpeechTranslationFinalRecognitionResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const SpeechTranslationFinalRecognitionResponse* _root;

}

@property (nonatomic,readonly) NSString * conversation_id; 
@property (nonatomic,readonly) NSString * request_id; 
@property (nonatomic,readonly) int return_code; 
@property (nonatomic,readonly) NSString * return_str; 
@property (nonatomic,readonly) NSString * source_locale; 
@property (nonatomic,readonly) NSString * recognition_text; 
@property (nonatomic,readonly) FTRecognitionResult * recognition_result; 
-(FTRecognitionResult *)recognition_result;
-(NSString *)recognition_text;
-(NSString *)request_id;
-(int)return_code;
-(NSString *)return_str;
-(id)initWithFlatbuffData:(id)arg1 root:(const SpeechTranslationFinalRecognitionResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::SpeechTranslationFinalRecognitionResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const SpeechTranslationFinalRecognitionResponse*)arg2 ;
-(NSString *)source_locale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)conversation_id;
@end

