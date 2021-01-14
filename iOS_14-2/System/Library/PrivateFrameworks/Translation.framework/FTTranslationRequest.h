/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray, FTSiriTranslationInfo, FTSpeechTranslationInfo, FTSiriPayloadTranslationInfo, FTWebTranslationInfo;

@interface FTTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TranslationRequest* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * request_id; 
@property (nonatomic,readonly) NSString * task; 
@property (nonatomic,readonly) NSString * source_language; 
@property (nonatomic,readonly) NSString * target_language; 
@property (nonatomic,readonly) NSArray * translation_phrase; 
@property (nonatomic,readonly) FTSiriTranslationInfo * siri_translation_info; 
@property (nonatomic,readonly) FTSpeechTranslationInfo * speech_translation_info; 
@property (nonatomic,readonly) FTSiriPayloadTranslationInfo * siri_payload_translation_info; 
@property (nonatomic,readonly) NSString * sequence_id; 
@property (nonatomic,readonly) FTWebTranslationInfo * web_translation_info; 
@property (nonatomic,readonly) BOOL disable_log; 
@property (nonatomic,readonly) long long opt_in_status; 
@property (nonatomic,readonly) NSString * app_id; 
-(NSString *)task;
-(NSString *)app_id;
-(NSArray *)translation_phrase;
-(NSString *)source_language;
-(NSString *)target_language;
-(FTSiriTranslationInfo *)siri_translation_info;
-(FTSpeechTranslationInfo *)speech_translation_info;
-(FTSiriPayloadTranslationInfo *)siri_payload_translation_info;
-(NSString *)sequence_id;
-(NSString *)request_id;
-(NSString *)speech_id;
-(FTWebTranslationInfo *)web_translation_info;
-(BOOL)disable_log;
-(long long)opt_in_status;
-(id)initWithFlatbuffData:(id)arg1 root:(const TranslationRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TranslationRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TranslationRequest*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

