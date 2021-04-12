/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/HKSPObject.h>
#import <libobjc.A.dylib/HKSPDictionarySerializable.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NAHashable.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDate, HKSPSleepScheduleDayOccurrence, HKSPSleepScheduleOccurrence, NSArray, NSString, NSSet;

@interface HKSPSleepSchedule : NSObject <BSDescriptionProviding, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying> {

	BOOL _enabled;
	unsigned long long _version;
	NSDate* _lastModifiedDate;
	double _windDownTime;
	HKSPSleepScheduleDayOccurrence* _mondayOccurrence;
	HKSPSleepScheduleDayOccurrence* _tuesdayOccurrence;
	HKSPSleepScheduleDayOccurrence* _wednesdayOccurrence;
	HKSPSleepScheduleDayOccurrence* _thursdayOccurrence;
	HKSPSleepScheduleDayOccurrence* _fridayOccurrence;
	HKSPSleepScheduleDayOccurrence* _saturdayOccurrence;
	HKSPSleepScheduleDayOccurrence* _sundayOccurrence;
	HKSPSleepScheduleDayOccurrence* _overrideDayOccurrence;
	double _sleepDurationGoal;

}

@property (nonatomic,readonly) HKSPSleepScheduleDayOccurrence * mondayOccurrence;                   //@synthesize mondayOccurrence=_mondayOccurrence - In the implementation block
@property (nonatomic,readonly) HKSPSleepScheduleDayOccurrence * tuesdayOccurrence;                  //@synthesize tuesdayOccurrence=_tuesdayOccurrence - In the implementation block
@property (nonatomic,readonly) HKSPSleepScheduleDayOccurrence * wednesdayOccurrence;                //@synthesize wednesdayOccurrence=_wednesdayOccurrence - In the implementation block
@property (nonatomic,readonly) HKSPSleepScheduleDayOccurrence * thursdayOccurrence;                 //@synthesize thursdayOccurrence=_thursdayOccurrence - In the implementation block
@property (nonatomic,readonly) HKSPSleepScheduleDayOccurrence * fridayOccurrence;                   //@synthesize fridayOccurrence=_fridayOccurrence - In the implementation block
@property (nonatomic,readonly) HKSPSleepScheduleDayOccurrence * saturdayOccurrence;                 //@synthesize saturdayOccurrence=_saturdayOccurrence - In the implementation block
@property (nonatomic,readonly) HKSPSleepScheduleDayOccurrence * sundayOccurrence;                   //@synthesize sundayOccurrence=_sundayOccurrence - In the implementation block
@property (nonatomic,readonly) HKSPSleepScheduleDayOccurrence * overrideDayOccurrence;              //@synthesize overrideDayOccurrence=_overrideDayOccurrence - In the implementation block
@property (nonatomic,readonly) unsigned long long windDownMinutes; 
@property (nonatomic,readonly) double sleepDurationGoal;                                            //@synthesize sleepDurationGoal=_sleepDurationGoal - In the implementation block
@property (nonatomic,readonly) BOOL isDefaultSchedule; 
@property (nonatomic,readonly) HKSPSleepScheduleOccurrence * overrideOccurrence; 
@property (nonatomic,readonly) unsigned long long weekdaysWithOccurrences; 
@property (nonatomic,readonly) unsigned long long weekdaysWithoutOccurrences; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                                       //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSArray * occurrences; 
@property (nonatomic,readonly) double windDownTime;                                                 //@synthesize windDownTime=_windDownTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long version;                                          //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate;                                      //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,readonly) NSSet * significantChanges; 
+(BOOL)supportsSecureCoding;
+(id)testSleepScheduleWithWindDownTimeInterval:(double)arg1 alarmEnabled:(BOOL)arg2 ;
+(id)testWeekdayWeekendSleepScheduleWithOverride;
+(id)testSleepScheduleWithAllPropertiesSet;
+(id)testSleepScheduleWithWindDownTimeInterval:(double)arg1 ;
+(id)testSleepScheduleWithAllOccurrencePropertiesSet;
+(id)testSleepScheduleWithBedtimeHour:(unsigned long long)arg1 bedtimeMinute:(unsigned long long)arg2 wakeUpHour:(unsigned long long)arg3 wakeUpMinute:(unsigned long long)arg4 weekdays:(unsigned long long)arg5 windDownMinutes:(unsigned long long)arg6 ;
+(id)testSleepScheduleWithWindDownMinutes:(unsigned long long)arg1 ;
+(id)testSleepSchedule;
+(id)testWeekdayWeekendSleepSchedule;
+(id)testSleepScheduleWithOverride;
+(id)testSleepScheduleWithAlarmEnabled:(BOOL)arg1 ;
+(id)testSleepScheduleWithBedtimeHour:(unsigned long long)arg1 bedtimeMinute:(unsigned long long)arg2 wakeUpHour:(unsigned long long)arg3 wakeUpMinute:(unsigned long long)arg4 weekdays:(unsigned long long)arg5 ;
-(BOOL)isEquivalentTo:(id)arg1 ;
-(id)succinctDescription;
-(id)init;
-(id)mutableCopy;
-(NSDate *)lastModifiedDate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_equateTo:(id)arg1 builderBuilderBlock:(/*^block*/id)arg2 ;
-(void)copyFromObject:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)occurrences;
-(NSString *)description;
-(id)emptyCopy;
-(unsigned long long)hash;
-(id)initFromObject:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)overridenOccurrenceForOverrideOccurrence:(id)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isEnabledAndHasOccurrences;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(double)windDownTime;
-(double)sleepDurationGoal;
-(HKSPSleepScheduleDayOccurrence *)mondayOccurrence;
-(HKSPSleepScheduleDayOccurrence *)tuesdayOccurrence;
-(HKSPSleepScheduleDayOccurrence *)wednesdayOccurrence;
-(HKSPSleepScheduleDayOccurrence *)thursdayOccurrence;
-(HKSPSleepScheduleDayOccurrence *)fridayOccurrence;
-(HKSPSleepScheduleDayOccurrence *)saturdayOccurrence;
-(HKSPSleepScheduleDayOccurrence *)sundayOccurrence;
-(HKSPSleepScheduleDayOccurrence *)overrideDayOccurrence;
-(void)_enumerateDayOccurrencesWithBlock:(/*^block*/id)arg1 ;
-(id)_unsortedOccurrences;
-(id)occurrencesOnDays:(unsigned long long)arg1 ;
-(unsigned long long)weekdaysWithoutOccurrences;
-(id)_wakeUpComponentsByAddingSleepDurationGoalToBedtimeComponents:(id)arg1 ;
-(unsigned long long)weekdaysWithOccurrences;
-(id)allowableRangeForWeekdays:(unsigned long long)arg1 ;
-(id)occurrenceOnDay:(long long)arg1 ;
-(BOOL)isDefaultSchedule;
-(HKSPSleepScheduleOccurrence *)overrideOccurrence;
-(id)occurrencesAfterDate:(id)arg1 gregorianCalendar:(id)arg2 ;
-(id)mutableOccurrenceTemplate;
-(id)allowableRangeForModifiedOccurrence:(id)arg1 gregorianCalendar:(id)arg2 ;
-(double)maximumAllowableWindDown;
-(unsigned long long)windDownMinutes;
-(id)succinctDescriptionBuilder;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)significantChanges;
@end

