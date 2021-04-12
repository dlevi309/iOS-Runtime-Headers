/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
*/


@interface WKInfiniteImpulseResponseFilter : NSObject {

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
-(void)dealloc;
-(double)output;
-(double)outputGradient;
-(BOOL)zeroGradient;
-(double)filterWithInput:(double)arg1 ;
-(void)setZeroGradientThreshold:(double)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 feedforwardCoefficients:(double*)arg2 feedbackCoefficients:(double*)arg3 ;
-(void)setLowpassInertiaFilterCoefficient:(double)arg1 ;
-(void)resetToValue:(double)arg1 ;
-(double)zeroGradientThreshold;
@end

