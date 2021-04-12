/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSDateComponents;

@interface _HKBedtimeAlarm : NSObject {

	NSDateComponents* _sleepDateComponents;
	NSDateComponents* _wakeDateComponents;

}

@property (nonatomic,readonly) NSDateComponents * sleepDateComponents;              //@synthesize sleepDateComponents=_sleepDateComponents - In the implementation block
@property (nonatomic,readonly) NSDateComponents * wakeDateComponents;               //@synthesize wakeDateComponents=_wakeDateComponents - In the implementation block
+(id)bedtimeAlarmWithSleepDate:(id)arg1 wakeDate:(id)arg2 calendar:(id)arg3 ;
-(id)firstDateIntervalAfterDate:(id)arg1 calendar:(id)arg2 ;
-(id)initWithSleepDateComponents:(id)arg1 wakeDateComponents:(id)arg2 ;
-(NSDateComponents *)sleepDateComponents;
-(NSDateComponents *)wakeDateComponents;
@end

