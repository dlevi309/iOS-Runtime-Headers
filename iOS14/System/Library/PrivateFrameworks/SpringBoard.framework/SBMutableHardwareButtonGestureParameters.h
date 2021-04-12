/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBHardwareButtonGestureParameters.h>

@interface SBMutableHardwareButtonGestureParameters : SBHardwareButtonGestureParameters {

	long long _maximumPressCount;
	double _longPressTimeInterval;
	double _multiplePressTimeInterval;

}

@property (assign,nonatomic) long long maximumPressCount;                   //@synthesize maximumPressCount=_maximumPressCount - In the implementation block
@property (assign,nonatomic) double longPressTimeInterval;                  //@synthesize longPressTimeInterval=_longPressTimeInterval - In the implementation block
@property (assign,nonatomic) double multiplePressTimeInterval;              //@synthesize multiplePressTimeInterval=_multiplePressTimeInterval - In the implementation block
-(void)setLongPressTimeInterval:(double)arg1 ;
-(long long)maximumPressCount;
-(double)multiplePressTimeInterval;
-(void)setMultiplePressTimeInterval:(double)arg1 ;
-(double)longPressTimeInterval;
-(void)setMaximumPressCount:(long long)arg1 ;
@end

