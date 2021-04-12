/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@interface SBFInfiniteImpulseResponseFilter : NSObject {

	unsigned long long _count;
	double* _ffC;
	double* _fbC;
	double* _inputHistory;
	double* _outputHistory;
	double _zeroGradientThreshold;

}

@property (assign,nonatomic) double zeroGradientThreshold;              //@synthesize zeroGradientThreshold=_zeroGradientThreshold - In the implementation block
+(id)lowpassInertiaFilterWithCoefficient:(double)arg1 ;
+(id)lowpassFilterWithCoefficient:(double)arg1 ;
-(BOOL)zeroGradient;
-(double)filterWithInput:(double)arg1 ;
-(void)setZeroGradientThreshold:(double)arg1 ;
-(double)output;
-(id)initWithCount:(unsigned long long)arg1 feedforwardCoefficients:(double*)arg2 feedbackCoefficients:(double*)arg3 ;
-(void)setLowpassInertiaFilterCoefficient:(double)arg1 ;
-(void)resetToValue:(double)arg1 ;
-(double)zeroGradientThreshold;
-(double)outputGradient;
-(void)dealloc;
@end

