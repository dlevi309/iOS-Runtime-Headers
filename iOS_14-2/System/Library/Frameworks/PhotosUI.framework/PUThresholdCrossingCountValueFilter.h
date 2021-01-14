/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUValueFilter.h>

@interface PUThresholdCrossingCountValueFilter : PUValueFilter {

	long long _crossingCount;
	double _thresholdValue;
	long long _maximumCrossingCount;

}

@property (assign,nonatomic) double thresholdValue;                       //@synthesize thresholdValue=_thresholdValue - In the implementation block
@property (assign,nonatomic) long long maximumCrossingCount;              //@synthesize maximumCrossingCount=_maximumCrossingCount - In the implementation block
-(void)setThresholdValue:(double)arg1 ;
-(void)setMaximumCrossingCount:(long long)arg1 ;
-(double)updatedValue:(double)arg1 withTargetValue:(double)arg2 ;
-(double)thresholdValue;
-(long long)maximumCrossingCount;
@end

