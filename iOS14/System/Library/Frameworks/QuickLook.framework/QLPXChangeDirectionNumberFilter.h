/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLPXNumberFilter.h>

@interface QLPXChangeDirectionNumberFilter : QLPXNumberFilter {

	double _threshold;
	double _minimumChange;

}

@property (assign,nonatomic) double minimumChange;              //@synthesize minimumChange=_minimumChange - In the implementation block
-(void)setMinimumChange:(double)arg1 ;
-(double)minimumChange;
-(id)initWithInput:(double)arg1 ;
-(double)initialOutputForInput:(double)arg1 ;
-(double)updatedOutput;
@end

