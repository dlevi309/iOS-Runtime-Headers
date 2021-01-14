/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUValueFilter.h>

@interface PUChangeDirectionValueFilter : PUValueFilter {

	double _threshold;
	double _minimumChangeValue;

}

@property (assign,nonatomic) double minimumChangeValue;              //@synthesize minimumChangeValue=_minimumChangeValue - In the implementation block
-(void)setMinimumChangeValue:(double)arg1 ;
-(double)updatedValue:(double)arg1 withTargetValue:(double)arg2 ;
-(double)minimumChangeValue;
@end

