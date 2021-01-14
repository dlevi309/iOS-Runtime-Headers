/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@protocol _LTSpeechCompressorDelegate;
#import <Translation/Translation-Structs.h>
@class NSMutableData;

@interface _LTSpeechCompressor : NSObject {

	id<_LTSpeechCompressorDelegate> _delegate;
	OpaqueAudioConverterRef _audioConverter;
	NSMutableData* _bufferedAudio;
	unsigned long long _packetIndex;
	unsigned long long _bytesConsumed;

}
-(id)initWithDelegate:(id)arg1 ;
-(void)startCompressionNarrowband:(BOOL)arg1 ;
-(void)addAudioSampleData:(id)arg1 ;
-(void)reset;
-(void)dealloc;
@end

