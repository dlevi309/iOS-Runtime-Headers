/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLPXNumberFilter.h>

@interface QLPXVelocityNumberFilter : QLPXNumberFilter {

	double _minimumSampleInterval;
	double _previousVelocityWeight;
	double _lastValue;
	double _lastTime;
	double _velocity;
	double _previousVelocity;
	double _filteredVelocity;

}
+(id)gestureVelocityFilter;
-(id)initWithInput:(double)arg1 ;
-(double)updatedOutput;
@end

