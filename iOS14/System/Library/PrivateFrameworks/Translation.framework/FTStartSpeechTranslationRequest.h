/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray, FTStartSpeechRequest, FTTranslationRequest;

@interface FTStartSpeechTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const StartSpeechTranslationRequest* _root;

}

@property (nonatomic,readonly) NSString * conversation_id; 
@property (nonatomic,readonly) NSString * request_id; 
@property (nonatomic,readonly) NSArray * translation_locale_pairs; 
@property (nonatomic,readonly) FTStartSpeechRequest * start_speech_request; 
@property (nonatomic,readonly) FTTranslationRequest * translation_request; 
@property (nonatomic,readonly) NSArray * text_to_speech_requests; 
@property (nonatomic,readonly) BOOL restricted_mode; 
@property (nonatomic,readonly) NSString * app_id; 
@property (nonatomic,readonly) long long opt_in_status; 
-(NSString *)app_id;
-(FTStartSpeechRequest *)start_speech_request;
-(NSString *)request_id;
-(long long)opt_in_status;
-(id)initWithFlatbuffData:(id)arg1 root:(const StartSpeechTranslationRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::StartSpeechTranslationRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const StartSpeechTranslationRequest*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)conversation_id;
-(NSArray *)translation_locale_pairs;
-(FTTranslationRequest *)translation_request;
-(NSArray *)text_to_speech_requests;
-(BOOL)restricted_mode;
@end

