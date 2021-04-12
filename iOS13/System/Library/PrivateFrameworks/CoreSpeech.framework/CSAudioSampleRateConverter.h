/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface CSAudioSampleRateConverter : NSObject {

	OpaqueAudioConverterRef _sampleRateConverter;
	float _outBufferScaleFactor;
	AudioStreamBasicDescription _inASBD;
	AudioStreamBasicDescription _outASBD;

}
+(id)upsampler;
+(id)downsampler;
-(void)dealloc;
-(id)convertSampleRateOfBuffer:(id)arg1 ;
-(id)initWithInASBD:(AudioStreamBasicDescription)arg1 outASBD:(AudioStreamBasicDescription)arg2 ;
-(OpaqueAudioConverterRef)_createSampleRateConverterWithInASBD:(AudioStreamBasicDescription)arg1 outASBD:(AudioStreamBasicDescription)arg2 ;
@end

