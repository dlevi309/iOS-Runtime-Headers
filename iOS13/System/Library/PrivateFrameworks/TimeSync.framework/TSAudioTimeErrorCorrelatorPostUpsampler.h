/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TSAudioTimeErrorCorrelator.h>

@interface TSAudioTimeErrorCorrelatorPostUpsampler : TSAudioTimeErrorCorrelator {

	float* _channelABuffer;
	float* _scratch1Buffer;
	float* _scratch2Buffer;
	float* _correlationBuffer;
	float* _upsamplerFilterCoefficientsBuffer;
	long long _upsamplerFilterCoefficientsLength;

}
-(void)dealloc;
-(id)initWithMaxCorrelationLength:(long long)arg1 andUpscaleFactor:(long long)arg2 forSamplingRate:(double)arg3 ;
-(void)_makeBlock;
@end

