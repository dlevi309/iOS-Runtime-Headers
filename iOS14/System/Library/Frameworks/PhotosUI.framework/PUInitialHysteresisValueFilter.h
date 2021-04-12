/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUValueFilter.h>

@interface PUInitialHysteresisValueFilter : PUValueFilter {

	BOOL _didReachThreshold;
	double _initialHysteresis;
	double _thresholdValue;

}

@property (assign,nonatomic) double thresholdValue;                       //@synthesize thresholdValue=_thresholdValue - In the implementation block
@property (nonatomic,readonly) double outputValueDerivative; 
-(void)setThresholdValue:(double)arg1 ;
-(double)updatedValue:(double)arg1 withTargetValue:(double)arg2 ;
-(double)outputValueDerivative;
-(double)thresholdValue;
@end

