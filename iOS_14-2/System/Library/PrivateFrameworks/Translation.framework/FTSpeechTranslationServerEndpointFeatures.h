/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, FTServerEndpointFeatures;

@interface FTSpeechTranslationServerEndpointFeatures : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const SpeechTranslationServerEndpointFeatures* _root;

}

@property (nonatomic,readonly) NSString * conversation_id; 
@property (nonatomic,readonly) NSString * request_id; 
@property (nonatomic,readonly) NSString * source_locale; 
@property (nonatomic,readonly) FTServerEndpointFeatures * server_endpoint_features; 
-(NSString *)request_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const SpeechTranslationServerEndpointFeatures*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::SpeechTranslationServerEndpointFeatures>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const SpeechTranslationServerEndpointFeatures*)arg2 ;
-(NSString *)source_locale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)conversation_id;
-(FTServerEndpointFeatures *)server_endpoint_features;
@end

