/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/


@interface _PFLGaussianNoiseGenerator : NSObject {

	double _mean;
	double _deviation;

}

@property (readonly) double mean;                   //@synthesize mean=_mean - In the implementation block
@property (readonly) double deviation;              //@synthesize deviation=_deviation - In the implementation block
+(id)generatorWithMean:(double)arg1 deviation:(double)arg2 ;
-(id)init;
-(id)description;
-(double)sample;
-(double)mean;
-(double)deviation;
-(id)initWithMean:(double)arg1 deviation:(double)arg2 ;
@end

