/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUValueFilter.h>

@interface PUDynamicValueFilter : PUValueFilter {

	double _targetValue;
	double _currentTime;

}

@property (assign,nonatomic) double targetValue;              //@synthesize targetValue=_targetValue - In the implementation block
@property (assign,nonatomic) double currentTime;              //@synthesize currentTime=_currentTime - In the implementation block
-(id)init;
-(void)setCurrentTime:(double)arg1 ;
-(double)outputValue;
-(double)targetValue;
-(double)currentTime;
-(void)_update;
-(void)setInputValue:(double)arg1 ;
-(double)outputValueChangeRate;
-(double)updatedValue:(double)arg1 withTargetValue:(double)arg2 timeInterval:(double)arg3 ;
-(void)setTargetValue:(double)arg1 ;
@end

