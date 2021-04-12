/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLPXNumberFilter.h>

@interface QLPXInitialHysteresisNumberFilter : QLPXNumberFilter {

	BOOL _didReachThreshold;
	double _offset;
	double _hysteresis;

}

@property (assign,nonatomic) double hysteresis;                      //@synthesize hysteresis=_hysteresis - In the implementation block
@property (nonatomic,readonly) double outputDerivative; 
-(double)hysteresis;
-(void)setHysteresis:(double)arg1 ;
-(double)outputDerivative;
-(double)updatedOutput;
@end

