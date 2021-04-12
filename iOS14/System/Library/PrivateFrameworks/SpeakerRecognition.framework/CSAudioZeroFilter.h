/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


#import <SpeakerRecognition/SpeakerRecognition-Structs.h>
@interface CSAudioZeroFilter : NSObject {

	unique_ptr<CSAudioZeroFilterImpl<unsigned short>, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short> > >* _audioZeroFilterImpl;

}
-(id)metrics;
-(id)initWithZeroWindowSize:(unsigned long long)arg1 approxAbsSpeechThreshold:(unsigned short)arg2 numHostTicksPerAudioSample:(double)arg3 ;
-(unsigned long long)filterZerosInAudioPacket:(id)arg1 atBufferHostTime:(unsigned long long)arg2 filteredPacket:(id*)arg3 ;
-(unsigned long long)endAudioAndFetchAnyTrailingZerosPacket:(id*)arg1 ;
@end

