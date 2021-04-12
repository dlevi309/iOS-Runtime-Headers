/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSAudioConverterDelegate;
#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSMutableData;

@interface CSAudioConverter : NSObject {

	OpaqueAudioConverterRef _opusConverter;
	NSMutableData* _bufferedLPCM;
	unsigned _recordBasePacketsPerSecond;
	AudioStreamBasicDescription _opusOutASBD;
	unsigned _convertPacketCount;
	unsigned _convertAudioCapacity;
	unsigned long long _lastTimestamp;
	float _outPacketSizeInSec;
	id<CSAudioConverterDelegate> _delegate;

}

@property (__weak) id<CSAudioConverterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)narrowBandOpusConverter;
+(id)opusConverter;
-(void)dealloc;
-(id<CSAudioConverterDelegate>)delegate;
-(void)setDelegate:(id<CSAudioConverterDelegate>)arg1 ;
-(void)reset;
-(void)flush;
-(id)initWithInASBD:(AudioStreamBasicDescription)arg1 outASBD:(AudioStreamBasicDescription)arg2 ;
-(void)addSamples:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(void)_configureAudioConverter:(OpaqueAudioConverterRef)arg1 ;
-(void)_convertBufferedLPCM:(id)arg1 allowPartial:(BOOL)arg2 timestamp:(unsigned long long)arg3 ;
@end

