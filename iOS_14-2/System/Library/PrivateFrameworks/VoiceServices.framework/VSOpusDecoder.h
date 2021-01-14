/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


#import <VoiceServices/VoiceServices-Structs.h>
@interface VSOpusDecoder : NSObject {

	OpaqueAudioConverterRef _decoder;
	AudioStreamBasicDescription _asbd;

}
+(id)sharedInstance;
-(id)beginChunkDecoderForStreamDescription:(AudioStreamBasicDescription)arg1 ;
-(id)decodeChunk:(id)arg1 outError:(id*)arg2 ;
-(void)endChunkDecoding;
-(OpaqueAudioConverterRef)_opusDecoder:(AudioStreamBasicDescription)arg1 ;
-(id)decodeChunks:(id)arg1 streamDescription:(AudioStreamBasicDescription)arg2 outError:(id*)arg3 ;
-(void)dealloc;
@end

