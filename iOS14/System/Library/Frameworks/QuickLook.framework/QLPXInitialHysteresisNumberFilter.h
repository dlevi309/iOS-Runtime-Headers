/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)outputDerivative;
-(void)setHysteresis:(double)arg1 ;
-(double)updatedOutput;
@end

