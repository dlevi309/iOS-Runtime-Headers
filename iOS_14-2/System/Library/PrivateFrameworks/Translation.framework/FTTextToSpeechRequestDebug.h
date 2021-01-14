/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData;

@interface FTTextToSpeechRequestDebug : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechRequestDebug* _root;

}

@property (nonatomic,readonly) BOOL force_use_tts_service; 
@property (nonatomic,readonly) BOOL disable_cache; 
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRequestDebug*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TextToSpeechRequestDebug>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRequestDebug*)arg2 ;
-(BOOL)force_use_tts_service;
-(BOOL)disable_cache;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

