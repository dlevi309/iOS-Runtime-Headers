/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@protocol CSAudioDecoderDelegate;
#import <SpeakerRecognition/SpeakerRecognition-Structs.h>
@interface CSAudioDecoder : NSObject {

	OpaqueAudioConverterRef _decoder;
	AudioStreamBasicDescription _inASBD;
	AudioStreamBasicDescription _outASBD;
	id<CSAudioDecoderDelegate> _delegate;

}

@property (__weak) id<CSAudioDecoderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)speexDecoder;
+(id)opusDecoder;
-(id<CSAudioDecoderDelegate>)delegate;
-(void)setDelegate:(id<CSAudioDecoderDelegate>)arg1 ;
-(id)initWithInASBD:(AudioStreamBasicDescription)arg1 outASBD:(AudioStreamBasicDescription)arg2 ;
-(void)addPackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 remoteVAD:(id)arg3 timestamp:(unsigned long long)arg4 receivedNumChannels:(unsigned)arg5 ;
@end

