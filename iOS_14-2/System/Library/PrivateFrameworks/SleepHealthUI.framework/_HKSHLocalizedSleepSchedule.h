/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI
*/


@class NSAttributedString;

@interface _HKSHLocalizedSleepSchedule : NSObject {

	NSAttributedString* _localizedBedTime;
	NSAttributedString* _localizedWakeTime;

}

@property (nonatomic,readonly) NSAttributedString * localizedBedTime;               //@synthesize localizedBedTime=_localizedBedTime - In the implementation block
@property (nonatomic,readonly) NSAttributedString * localizedWakeTime;              //@synthesize localizedWakeTime=_localizedWakeTime - In the implementation block
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(NSAttributedString *)localizedBedTime;
-(NSAttributedString *)localizedWakeTime;
-(id)initWithSleepSchedule:(id)arg1 calendar:(id)arg2 dayStart:(id)arg3 timeFont:(id)arg4 amPmFont:(id)arg5 ;
@end

