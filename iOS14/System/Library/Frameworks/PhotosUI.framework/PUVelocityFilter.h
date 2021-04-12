/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUDynamicValueFilter.h>

@interface PUVelocityFilter : PUDynamicValueFilter {

	double _lastValue;
	double _lastTime;
	double _velocity;
	double _previousVelocity;
	double _filteredVelocity;
	double __minimumSampleInterval;
	double __previousVelocityWeight;

}

@property (assign,setter=_setMinimumSampleInterval:,nonatomic) double _minimumSampleInterval;                //@synthesize _minimumSampleInterval=__minimumSampleInterval - In the implementation block
@property (assign,setter=_setPreviousVelocityWeight:,nonatomic) double _previousVelocityWeight;              //@synthesize _previousVelocityWeight=__previousVelocityWeight - In the implementation block
+(id)gestureVelocityFilter;
-(id)init;
-(double)outputValue;
-(void)setInputValue:(double)arg1 ;
-(double)_minimumSampleInterval;
-(void)_setMinimumSampleInterval:(double)arg1 ;
-(double)_previousVelocityWeight;
-(void)_setPreviousVelocityWeight:(double)arg1 ;
@end

