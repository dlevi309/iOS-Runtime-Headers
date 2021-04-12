/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, FTTextToSpeechResponse;

@interface FTSpeechTranslationTextToSpeechResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const SpeechTranslationTextToSpeechResponse* _root;

}

@property (nonatomic,readonly) NSString * conversation_id; 
@property (nonatomic,readonly) NSString * request_id; 
@property (nonatomic,readonly) NSString * target_locale; 
@property (nonatomic,readonly) FTTextToSpeechResponse * text_to_speech_response; 
-(NSString *)request_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const SpeechTranslationTextToSpeechResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::SpeechTranslationTextToSpeechResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const SpeechTranslationTextToSpeechResponse*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)target_locale;
-(NSString *)conversation_id;
-(FTTextToSpeechResponse *)text_to_speech_response;
@end

