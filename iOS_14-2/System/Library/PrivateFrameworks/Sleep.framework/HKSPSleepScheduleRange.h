/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/


@class NSDateComponents;

@interface HKSPSleepScheduleRange : NSObject {

	BOOL _earliestBedtimeIsOnPreviousDay;
	NSDateComponents* _latestWakeUpComponents;
	NSDateComponents* _earliestWakeUpComponents;
	NSDateComponents* _latestBedtimeComponents;
	NSDateComponents* _earliestBedtimeComponents;

}

@property (nonatomic,copy,readonly) NSDateComponents * latestWakeUpComponents;                 //@synthesize latestWakeUpComponents=_latestWakeUpComponents - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * earliestWakeUpComponents;               //@synthesize earliestWakeUpComponents=_earliestWakeUpComponents - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * latestBedtimeComponents;                //@synthesize latestBedtimeComponents=_latestBedtimeComponents - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * earliestBedtimeComponents;              //@synthesize earliestBedtimeComponents=_earliestBedtimeComponents - In the implementation block
@property (nonatomic,readonly) BOOL earliestBedtimeIsOnPreviousDay;                            //@synthesize earliestBedtimeIsOnPreviousDay=_earliestBedtimeIsOnPreviousDay - In the implementation block
-(id)succinctDescription;
-(id)description;
-(NSDateComponents *)earliestBedtimeComponents;
-(BOOL)earliestBedtimeIsOnPreviousDay;
-(NSDateComponents *)earliestWakeUpComponents;
-(NSDateComponents *)latestBedtimeComponents;
-(NSDateComponents *)latestWakeUpComponents;
-(id)initWithLatestWakeUpComponents:(id)arg1 latestBedtimeComponents:(id)arg2 earliestWakeUpComponents:(id)arg3 earliestBedtimeComponents:(id)arg4 earliestBedtimeIsOnPreviousDay:(BOOL)arg5 ;
-(id)succinctDescriptionBuilder;
@end

