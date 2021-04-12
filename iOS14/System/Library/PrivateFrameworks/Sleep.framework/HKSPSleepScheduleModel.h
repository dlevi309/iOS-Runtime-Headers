/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NAHashable.h>

@class HKSPSleepSchedule, HKSPSleepSettings, HKSPSleepEventRecord, NSDate, NSString;

@interface HKSPSleepScheduleModel : NSObject <NSCopying, NAEquatable, NAHashable> {

	HKSPSleepSchedule* _sleepSchedule;
	HKSPSleepSettings* _sleepSettings;
	HKSPSleepEventRecord* _sleepEventRecord;

}

@property (nonatomic,readonly) BOOL goodMorningAlertNotificationEnabled; 
@property (nonatomic,readonly) BOOL goodMorningScreenEnabled; 
@property (nonatomic,readonly) BOOL chargingRemindersEnabled; 
@property (nonatomic,copy,readonly) HKSPSleepSchedule * sleepSchedule;                    //@synthesize sleepSchedule=_sleepSchedule - In the implementation block
@property (nonatomic,copy,readonly) HKSPSleepSettings * sleepSettings;                    //@synthesize sleepSettings=_sleepSettings - In the implementation block
@property (nonatomic,copy,readonly) HKSPSleepEventRecord * sleepEventRecord;              //@synthesize sleepEventRecord=_sleepEventRecord - In the implementation block
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sleepScheduleModelWithSleepSchedule:(id)arg1 sleepSettings:(id)arg2 sleepEventRecord:(id)arg3 ;
+(id)testSleepScheduleModelWithSchedule:(id)arg1 ;
+(id)testSleepScheduleModelForFullyOnboardedUserWithSingularBedtime;
+(id)testSleepScheduleModel;
+(id)testSleepScheduleModelForFullyOnboardedUser;
+(id)testSleepScheduleModelWithSchedule:(id)arg1 settings:(id)arg2 ;
+(id)testSleepScheduleModelForMigratedUserPriorToOnboardingWithSingularWaketime;
+(id)testSleepScheduleModelForMigratedUserPriorToOnboarding;
+(id)testSleepScheduleModelWithAlarmEnabled:(BOOL)arg1 ;
-(BOOL)isEquivalentTo:(id)arg1 ;
-(id)succinctDescription;
-(id)upcomingEventsDueAfterDate:(id)arg1 ;
-(HKSPSleepSchedule *)sleepSchedule;
-(id)nextResolvedOccurrenceAfterDate:(id)arg1 repeatingWithinInterval:(double)arg2 ;
-(id)nextOccurrenceAfterDate:(id)arg1 ;
-(long long)alarmStatusForOccurrence:(id)arg1 ;
-(id)_upcomingResolvedOccurrencesDueAfterDate:(id)arg1 searchBackwards:(BOOL)arg2 ;
-(NSDate *)lastModifiedDate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)nextOccurrenceAfterDate:(id)arg1 repeatingWithinInterval:(double)arg2 ;
-(BOOL)chargingRemindersEnabledWithLogObject:(id)arg1 ;
-(BOOL)goodMorningScreenEnabledWithLogObject:(id)arg1 ;
-(id)timelineForDate:(id)arg1 ;
-(id)_timelineResultsDueAfterDate:(id)arg1 ;
-(NSString *)description;
-(id)previousOccurrenceBeforeDate:(id)arg1 ;
-(id)nextEventWithIdentifier:(id)arg1 dueAfterDate:(id)arg2 ;
-(id)previousEventWithIdentifier:(id)arg1 dueBeforeDate:(id)arg2 ;
-(BOOL)chargingRemindersEnabled;
-(BOOL)goodMorningAlertNotificationsEnabledWithLogObject:(id)arg1 ;
-(BOOL)goodMorningAlertNotificationEnabled;
-(unsigned long long)hash;
-(BOOL)goodMorningScreenEnabled;
-(id)previousResolvedOccurrenceBeforeDate:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)previousEventsDueBeforeDate:(id)arg1 ;
-(id)_upcomingEventsDueAfterDate:(id)arg1 searchBackwards:(BOOL)arg2 ;
-(id)upcomingOccurrenceAfterDate:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)nextResolvedOccurrenceAfterDate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)nextEventDueAfterDate:(id)arg1 ;
-(HKSPSleepEventRecord *)sleepEventRecord;
-(BOOL)isEqual:(id)arg1 ;
-(id)upcomingResolvedOccurrenceAfterDate:(id)arg1 ;
-(HKSPSleepSettings *)sleepSettings;
@end

