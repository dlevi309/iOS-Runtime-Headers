/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSAudioDecoderDelegate;
#import <CoreSpeech/CoreSpeech-Structs.h>
@interface CSAudioDecoder : NSObject {

	OpaqueAudioConverterRef _decoder;
	AudioStreamBasicDescription _inASBD;
	AudioStreamBasicDescription _outASBD;
	id<CSAudioDecoderDelegate> _delegate;

}

@property (__weak) id<CSAudioDecoderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)opusDecoder;
-(id<CSAudioDecoderDelegate>)delegate;
-(void)setDelegate:(id<CSAudioDecoderDelegate>)arg1 ;
-(id)initWithInASBD:(AudioStreamBasicDescription)arg1 outASBD:(AudioStreamBasicDescription)arg2 ;
-(void)addPackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 remoteVAD:(id)arg3 timestamp:(unsigned long long)arg4 receivedNumChannels:(unsigned)arg5 ;
@end

