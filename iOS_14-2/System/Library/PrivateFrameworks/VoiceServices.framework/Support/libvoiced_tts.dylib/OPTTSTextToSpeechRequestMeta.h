/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface OPTTSTextToSpeechRequestMeta : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechRequestMeta* _root;

}

@property (nonatomic,readonly) long long channel_type; 
@property (nonatomic,readonly) NSString * app_id; 
-(NSString *)app_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRequestMeta*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TextToSpeechRequestMeta>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRequestMeta*)arg2 ;
-(long long)channel_type;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

