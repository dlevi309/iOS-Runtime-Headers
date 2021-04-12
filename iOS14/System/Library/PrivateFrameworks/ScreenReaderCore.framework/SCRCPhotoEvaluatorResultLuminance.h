/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <ScreenReaderCore/SCRCPhotoEvaluatorResult.h>

@interface SCRCPhotoEvaluatorResultLuminance : SCRCPhotoEvaluatorResult {

	double _darknessLevel;
	double _brightnessLevel;
	double _averageLevel;

}

@property (nonatomic,readonly) double darknessLevel;                //@synthesize darknessLevel=_darknessLevel - In the implementation block
@property (nonatomic,readonly) double brightnessLevel;              //@synthesize brightnessLevel=_brightnessLevel - In the implementation block
@property (nonatomic,readonly) double averageLevel;                 //@synthesize averageLevel=_averageLevel - In the implementation block
-(double)brightnessLevel;
-(id)humanReadableResult;
-(id)initWithDarknessLevel:(double)arg1 brightnessLevel:(double)arg2 averageLevel:(double)arg3 ;
-(double)darknessLevel;
-(double)averageLevel;
@end

