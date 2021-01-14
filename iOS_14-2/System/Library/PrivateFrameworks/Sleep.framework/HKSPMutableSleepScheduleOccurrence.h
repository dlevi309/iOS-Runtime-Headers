/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <Sleep/HKSPSleepScheduleOccurrence.h>
#import <libobjc.A.dylib/HKSPMutableObject.h>

@class NSDate, HKSPChangeSet, HKSPSleepScheduleDayOccurrence, NSDateComponents, HKSPAlarmConfiguration, NSSet, NSString;

@interface HKSPMutableSleepScheduleOccurrence : HKSPSleepScheduleOccurrence <HKSPMutableObject> {

	HKSPChangeSet* _changeSet;

}

@property (nonatomic,retain) HKSPSleepScheduleDayOccurrence * backingOccurrence; 
@property (nonatomic,copy) NSDateComponents * bedtimeComponents; 
@property (nonatomic,copy) NSDateComponents * wakeUpComponents; 
@property (assign,nonatomic) unsigned long long weekdays; 
@property (nonatomic,retain) HKSPAlarmConfiguration * alarmConfiguration; 
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) HKSPChangeSet * changeSet;                                     //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,readonly) unsigned long long version; 
@property (nonatomic,readonly) NSSet * significantChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)occurrenceWithWeekdays:(unsigned long long)arg1 bedtimeHour:(long long)arg2 bedtimeMinute:(long long)arg3 wakeUpHour:(long long)arg4 wakeUpMinute:(long long)arg5 ;
-(void)freeze;
-(HKSPChangeSet *)changeSet;
-(id)init;
-(id)mutableCopy;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)weekdays;
-(id)initWithCoder:(id)arg1 ;
-(HKSPAlarmConfiguration *)alarmConfiguration;
-(void)setBedtimeComponents:(NSDateComponents *)arg1 ;
-(void)setWakeUpComponents:(NSDateComponents *)arg1 ;
-(void)setWeekdays:(unsigned long long)arg1 ;
-(HKSPSleepScheduleDayOccurrence *)backingOccurrence;
-(id)initWithTemplateOccurrence:(id)arg1 ;
-(void)setBackingOccurrence:(HKSPSleepScheduleDayOccurrence *)arg1 ;
-(void)turnOnAlarm;
-(void)turnOffAlarm;
-(void)setAlarmConfiguration:(HKSPAlarmConfiguration *)arg1 ;
-(void)turnOnWeekdays:(unsigned long long)arg1 ;
-(void)turnOffWeekdays:(unsigned long long)arg1 ;
-(void)applyHourAndMinuteFromBedtimeComponents:(id)arg1 wakeUpComponents:(id)arg2 gregorianCalendar:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

