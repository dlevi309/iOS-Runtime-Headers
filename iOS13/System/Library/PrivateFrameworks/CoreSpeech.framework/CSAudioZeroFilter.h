/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface CSAudioZeroFilter : NSObject {

	unique_ptr<CSAudioZeroFilterImpl<unsigned short>, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short> > >* _audioZeroFilterImpl;

}
-(id)metrics;
-(id)initWithZeroWindowSize:(unsigned long long)arg1 approxAbsSpeechThreshold:(unsigned short)arg2 numHostTicksPerAudioSample:(double)arg3 ;
-(unsigned long long)filterZerosInAudioPacket:(id)arg1 atBufferHostTime:(unsigned long long)arg2 filteredPacket:(id*)arg3 ;
-(unsigned long long)endAudioAndFetchAnyTrailingZerosPacket:(id*)arg1 ;
@end

