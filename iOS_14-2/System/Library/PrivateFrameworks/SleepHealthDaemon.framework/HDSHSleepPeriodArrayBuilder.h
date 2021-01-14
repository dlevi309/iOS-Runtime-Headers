/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
*/


@class NSMutableArray, NSDate;

@interface HDSHSleepPeriodArrayBuilder : NSObject {

	NSMutableArray* _periods;
	NSMutableArray* _segments;
	NSDate* _minDate;
	NSDate* _maxDate;

}
-(id)finish;
-(id)init;
-(id)_createPeriodAndReset;
-(void)addOrderedSegment:(id)arg1 ;
@end

