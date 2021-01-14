/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, FTTranslationLocalePair, FTLanguageDetected, NSArray;

@interface FTStartSpeechTranslationLoggingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const StartSpeechTranslationLoggingRequest* _root;

}

@property (nonatomic,readonly) NSString * conversation_id; 
@property (nonatomic,readonly) NSString * request_id; 
@property (nonatomic,readonly) FTTranslationLocalePair * translation_locale_pair; 
@property (nonatomic,readonly) FTLanguageDetected * detected_locale; 
@property (nonatomic,readonly) NSString * user_selected_locale; 
@property (nonatomic,readonly) NSArray * senses; 
@property (nonatomic,readonly) NSString * user_selected_sense; 
@property (nonatomic,readonly) NSArray * user_interacted_senses; 
-(NSArray *)senses;
-(NSString *)request_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const StartSpeechTranslationLoggingRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::StartSpeechTranslationLoggingRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const StartSpeechTranslationLoggingRequest*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)conversation_id;
-(FTTranslationLocalePair *)translation_locale_pair;
-(FTLanguageDetected *)detected_locale;
-(NSString *)user_selected_locale;
-(NSString *)user_selected_sense;
-(NSArray *)user_interacted_senses;
@end

