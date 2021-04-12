/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, OPTTSTextToSpeechVoice, OPTTSTextToSpeechResource;

@interface OPTTSTextToSpeechMeta : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechMeta* _root;

}

@property (nonatomic,readonly) OPTTSTextToSpeechVoice * voice; 
@property (nonatomic,readonly) OPTTSTextToSpeechResource * resource; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(OPTTSTextToSpeechVoice *)voice;
-(OPTTSTextToSpeechResource *)resource;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechMeta*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TextToSpeechMeta>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechMeta*)arg2 ;
@end

