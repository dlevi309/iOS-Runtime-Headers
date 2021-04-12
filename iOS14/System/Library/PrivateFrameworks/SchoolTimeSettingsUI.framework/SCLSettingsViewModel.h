/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTimeSettingsUI.framework/SchoolTimeSettingsUI
*/


@class NSArray, SCLRecurrenceSchedule;

@interface SCLSettingsViewModel : NSObject {

	BOOL _enabled;
	unsigned long long _scheduleType;
	long long _repeatSchedule;
	NSArray* _timeIntervals;
	SCLRecurrenceSchedule* _customSchedule;
	NSArray* _historyItems;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) unsigned long long scheduleType;                   //@synthesize scheduleType=_scheduleType - In the implementation block
@property (assign,nonatomic) long long repeatSchedule;                          //@synthesize repeatSchedule=_repeatSchedule - In the implementation block
@property (nonatomic,copy) NSArray * timeIntervals;                             //@synthesize timeIntervals=_timeIntervals - In the implementation block
@property (nonatomic,copy) SCLRecurrenceSchedule * customSchedule;              //@synthesize customSchedule=_customSchedule - In the implementation block
@property (nonatomic,copy) NSArray * historyItems;                              //@synthesize historyItems=_historyItems - In the implementation block
-(void)setRepeatSchedule:(long long)arg1 ;
-(id)init;
-(void)setCustomSchedule:(SCLRecurrenceSchedule *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(SCLRecurrenceSchedule *)customSchedule;
-(long long)repeatSchedule;
-(BOOL)isEnabled;
-(NSArray *)historyItems;
-(NSArray *)timeIntervals;
-(void)setTimeIntervals:(NSArray *)arg1 ;
-(unsigned long long)scheduleType;
-(void)setScheduleType:(unsigned long long)arg1 ;
-(void)setHistoryItems:(NSArray *)arg1 ;
@end

