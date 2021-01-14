/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TSAudioTimeErrorCorrelator.h>

@interface TSAudioTimeErrorCorrelatorResampler : TSAudioTimeErrorCorrelator {

	float* _scratchBuffer;
	float* _channelABuffer;
	float* _channelBBuffer;
	float* _correlationBuffer;
	float* _upsamplerFilterCoefficientsBuffer;
	long long _upsamplerFilterCoefficientsLength;

}
-(void)dealloc;
-(id)initWithMaxCorrelationLength:(long long)arg1 andUpscaleFactor:(long long)arg2 forSamplingRate:(double)arg3 ;
-(void)_makeBlock;
@end

