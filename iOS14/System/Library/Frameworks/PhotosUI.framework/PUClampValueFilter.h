/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUValueFilter.h>

@interface PUClampValueFilter : PUValueFilter {

	double _minimumValue;
	double _maximumValue;

}

@property (assign,nonatomic) double minimumValue;              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) double maximumValue;              //@synthesize maximumValue=_maximumValue - In the implementation block
-(double)maximumValue;
-(void)setMinimumValue:(double)arg1 ;
-(double)updatedValue:(double)arg1 withTargetValue:(double)arg2 ;
-(double)minimumValue;
-(void)setMaximumValue:(double)arg1 ;
@end

