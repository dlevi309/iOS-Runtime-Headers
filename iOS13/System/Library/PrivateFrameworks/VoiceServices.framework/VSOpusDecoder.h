/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


#import <VoiceServices/VoiceServices-Structs.h>
@interface VSOpusDecoder : NSObject {

	OpaqueAudioConverterRef _decoder;
	AudioStreamBasicDescription _asbd;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)beginChunkDecoderForStreamDescription:(AudioStreamBasicDescription)arg1 ;
-(id)decodeChunk:(id)arg1 outError:(id*)arg2 ;
-(void)endChunkDecoding;
-(OpaqueAudioConverterRef)_opusDecoder:(AudioStreamBasicDescription)arg1 ;
-(id)decodeChunks:(id)arg1 streamDescription:(AudioStreamBasicDescription)arg2 outError:(id*)arg3 ;
@end

