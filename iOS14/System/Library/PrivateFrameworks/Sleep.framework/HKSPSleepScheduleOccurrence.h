/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/HKSPObject.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NAHashable.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDate, NSSet, HKSPSleepScheduleDayOccurrence, HKSPAlarmConfiguration, NSDateComponents, NSString;

@interface HKSPSleepScheduleOccurrence : NSObject <BSDescriptionProviding, HKSPObject, NAEquatable, NAHashable, NSMutableCopying> {

	unsigned long long _version;
	unsigned long long _weekdays;
	HKSPSleepScheduleDayOccurrence* _backingOccurrence;

}

@property (nonatomic,readonly) HKSPSleepScheduleDayOccurrence * backingOccurrence;              //@synthesize backingOccurrence=_backingOccurrence - In the implementation block
@property (nonatomic,readonly) BOOL usesDefaultBedtimeAndWakeUpComponents; 
@property (nonatomic,readonly) BOOL isInitialized; 
@property (nonatomic,readonly) BOOL isRepeating; 
@property (nonatomic,readonly) BOOL isSingleDayOverride; 
@property (nonatomic,readonly) BOOL crossesDayBoundary; 
@property (nonatomic,readonly) HKSPAlarmConfiguration * alarmConfiguration; 
@property (nonatomic,copy,readonly) NSDateComponents * bedtimeComponents; 
@property (nonatomic,copy,readonly) NSDateComponents * wakeUpComponents; 
@property (nonatomic,readonly) unsigned long long weekdays;                                     //@synthesize weekdays=_weekdays - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long version;                                      //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) NSSet * significantChanges; 
+(BOOL)supportsSecureCoding;
+(id)testSleepScheduleOccurrenceWithAlarmEnabled:(BOOL)arg1 ;
+(id)testSleepScheduleOccurrence;
+(id)testOverrideSleepScheduleOccurrence;
+(id)testSleepScheduleOccurrenceWithAllPropertiesSet;
+(id)occurrenceWithWeekdays:(unsigned long long)arg1 backingOccurrence:(id)arg2 ;
+(id)testSleepScheduleOccurrenceWithWeekdays:(unsigned long long)arg1 alarmEnabled:(BOOL)arg2 ;
+(id)testSleepScheduleOccurrenceWithWeekdays:(unsigned long long)arg1 alarmEnabled:(BOOL)arg2 includeToneIds:(BOOL)arg3 ;
+(id)testSleepScheduleOccurrenceWithWeekdays:(unsigned long long)arg1 ;
-(BOOL)isInitialized;
-(BOOL)isEquivalentTo:(id)arg1 ;
-(id)succinctDescription;
-(BOOL)isRepeating;
-(id)init;
-(id)mutableCopy;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_equateTo:(id)arg1 builderBuilderBlock:(/*^block*/id)arg2 ;
-(void)copyFromObject:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)weekdays;
-(NSString *)description;
-(NSDateComponents *)bedtimeComponents;
-(unsigned long long)hash;
-(id)initFromObject:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isSingleDayOverride;
-(HKSPAlarmConfiguration *)alarmConfiguration;
-(BOOL)isAlarmEquivalentToOverrideOccurrence:(id)arg1 ;
-(NSDateComponents *)wakeUpComponents;
-(HKSPSleepScheduleDayOccurrence *)backingOccurrence;
-(id)bedtimeDateForWakeUpDate:(id)arg1 gregorianCalendar:(id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)overrideOccurrenceWithWakeUpComponents:(id)arg1 bedtimeComponents:(id)arg2 ;
-(long long)overrideDayInCalendar:(id)arg1 ;
-(id)wakeUpDateForDate:(id)arg1 searchBackwards:(BOOL)arg2 gregorianCalendar:(id)arg3 ;
-(id)wakeUpDateForDate:(id)arg1 day:(long long)arg2 searchBackwards:(BOOL)arg3 gregorianCalendar:(id)arg4 ;
-(BOOL)usesDefaultBedtimeAndWakeUpComponents;
-(id)overrideOccurrenceTemplateForCurrentDate:(id)arg1 gregorianCalendar:(id)arg2 ;
-(BOOL)overridesWakeUpForOccurrenceOnDate:(id)arg1 gregorianCalendar:(id)arg2 ;
-(BOOL)overrideAppliesToOccurrence:(id)arg1 gregorianCalendar:(id)arg2 ;
-(id)nextDateIntervalWithWakeUpAfterDate:(id)arg1 gregorianCalendar:(id)arg2 ;
-(BOOL)isValidOccurrence;
-(BOOL)crossesDayBoundary;
-(BOOL)isEquivalentToOverrideOccurrence:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

