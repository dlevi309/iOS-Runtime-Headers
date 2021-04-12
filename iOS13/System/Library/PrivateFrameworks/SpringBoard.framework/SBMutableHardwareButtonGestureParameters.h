/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)maximumPressCount;
-(void)setMaximumPressCount:(long long)arg1 ;
-(double)multiplePressTimeInterval;
-(double)longPressTimeInterval;
-(void)setMultiplePressTimeInterval:(double)arg1 ;
-(void)setLongPressTimeInterval:(double)arg1 ;
@end

