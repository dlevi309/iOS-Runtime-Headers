/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface OPTTSFinalTextToSpeechStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const FinalTextToSpeechStreamingResponse* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) int error_code; 
@property (nonatomic,readonly) NSString * error_str; 
@property (nonatomic,readonly) NSString * stream_id; 
@property (nonatomic,readonly) int total_pkt_number; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stream_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const FinalTextToSpeechStreamingResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::FinalTextToSpeechStreamingResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const FinalTextToSpeechStreamingResponse*)arg2 ;
-(NSString *)speech_id;
-(NSString *)session_id;
-(int)error_code;
-(NSString *)error_str;
-(int)total_pkt_number;
@end

