/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@interface TSAudioTimeErrorCorrelator : NSObject {

	long long _maxCorrelationLength;
	long long _upscaleFactor;
	double _samplingRate;
	/*^block*/id _correlationBlock;

}

@property (nonatomic,copy) id correlationBlock;              //@synthesize correlationBlock=_correlationBlock - In the implementation block
-(void)dealloc;
-(id)initWithMaxCorrelationLength:(long long)arg1 andUpscaleFactor:(long long)arg2 forSamplingRate:(double)arg3 ;
-(void)_calculateUpsamplerCoefficients:(float*)arg1 length:(long long*)arg2 ;
-(id)correlationBlock;
-(void)setCorrelationBlock:(id)arg1 ;
@end

