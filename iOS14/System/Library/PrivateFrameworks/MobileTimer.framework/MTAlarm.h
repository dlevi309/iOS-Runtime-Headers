/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <libobjc.A.dylib/MTScheduleable.h>
#import <libobjc.A.dylib/MTDictionarySerializable.h>
#import <libobjc.A.dylib/MTSerializable.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSUUID, NSNumber, NSDate, NSString, MTSound, MTIntentAlarm, NSURL;

@interface MTAlarm : NSObject <MTScheduleable, MTDictionarySerializable, MTSerializable, BSDescriptionProviding, NAEquatable, NSSecureCoding, NSCopying, NSMutableCopying> {

	BOOL _sleepSchedule;
	BOOL _sleepMode;
	BOOL _sleepTracking;
	BOOL _timeInBedTracking;
	BOOL _enabled;
	BOOL _sleepAlarm;
	BOOL _allowsSnooze;
	NSUUID* _alarmID;
	unsigned long long _hour;
	unsigned long long _minute;
	unsigned long long _day;
	unsigned long long _month;
	unsigned long long _year;
	unsigned long long _bedtimeHour;
	unsigned long long _bedtimeMinute;
	NSNumber* _bedtimeReminder;
	unsigned long long _sleepModeOptions;
	unsigned long long _repeatSchedule;
	unsigned long long _playOptions;
	NSDate* _lastModifiedDate;
	NSString* _title;
	MTSound* _sound;
	NSDate* _overriddenForDate;
	NSDate* _snoozeFireDate;
	NSDate* _bedtimeSnoozeFireDate;
	NSDate* _firedDate;
	NSDate* _dismissedDate;
	unsigned long long _dismissedAction;
	NSDate* _bedtimeFiredDate;
	NSDate* _bedtimeDismissedDate;
	unsigned long long _bedtimeDismissedAction;
	NSDate* _keepOffUntilDate;
	unsigned long long _onboardingVersion;
	/*^block*/id _currentDateProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MTIntentAlarm * intentAlarm; 
@property (assign,nonatomic) unsigned long long hour;                                //@synthesize hour=_hour - In the implementation block
@property (assign,nonatomic) unsigned long long minute;                              //@synthesize minute=_minute - In the implementation block
@property (assign,nonatomic) unsigned long long bedtimeHour;                         //@synthesize bedtimeHour=_bedtimeHour - In the implementation block
@property (assign,nonatomic) unsigned long long day;                                 //@synthesize day=_day - In the implementation block
@property (assign,nonatomic) unsigned long long month;                               //@synthesize month=_month - In the implementation block
@property (assign,nonatomic) unsigned long long year;                                //@synthesize year=_year - In the implementation block
@property (assign,nonatomic) unsigned long long bedtimeMinute;                       //@synthesize bedtimeMinute=_bedtimeMinute - In the implementation block
@property (assign,nonatomic) unsigned long long bedtimeReminderMinutes; 
@property (nonatomic,copy) NSNumber * bedtimeReminder;                               //@synthesize bedtimeReminder=_bedtimeReminder - In the implementation block
@property (assign,nonatomic) BOOL sleepMode;                                         //@synthesize sleepMode=_sleepMode - In the implementation block
@property (assign,nonatomic) unsigned long long sleepModeOptions;                    //@synthesize sleepModeOptions=_sleepModeOptions - In the implementation block
@property (assign,nonatomic) BOOL sleepTracking;                                     //@synthesize sleepTracking=_sleepTracking - In the implementation block
@property (nonatomic,copy) NSDate * overriddenForDate;                               //@synthesize overriddenForDate=_overriddenForDate - In the implementation block
@property (assign,nonatomic) BOOL timeInBedTracking;                                 //@synthesize timeInBedTracking=_timeInBedTracking - In the implementation block
@property (assign,nonatomic) BOOL sleepSchedule;                                     //@synthesize sleepSchedule=_sleepSchedule - In the implementation block
@property (assign,nonatomic) unsigned long long repeatSchedule;                      //@synthesize repeatSchedule=_repeatSchedule - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) unsigned long long playOptions;                         //@synthesize playOptions=_playOptions - In the implementation block
@property (assign,getter=isSleepAlarm,nonatomic) BOOL sleepAlarm;                    //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
@property (assign,nonatomic) BOOL allowsSnooze;                                      //@synthesize allowsSnooze=_allowsSnooze - In the implementation block
@property (nonatomic,copy) NSDate * snoozeFireDate;                                  //@synthesize snoozeFireDate=_snoozeFireDate - In the implementation block
@property (nonatomic,copy) NSDate * bedtimeSnoozeFireDate;                           //@synthesize bedtimeSnoozeFireDate=_bedtimeSnoozeFireDate - In the implementation block
@property (nonatomic,copy) NSDate * firedDate;                                       //@synthesize firedDate=_firedDate - In the implementation block
@property (nonatomic,copy) NSDate * dismissedDate;                                   //@synthesize dismissedDate=_dismissedDate - In the implementation block
@property (assign,nonatomic) unsigned long long dismissedAction;                     //@synthesize dismissedAction=_dismissedAction - In the implementation block
@property (nonatomic,copy) NSDate * lastModifiedDate;                                //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,copy) NSDate * bedtimeFiredDate;                                //@synthesize bedtimeFiredDate=_bedtimeFiredDate - In the implementation block
@property (nonatomic,copy) NSDate * bedtimeDismissedDate;                            //@synthesize bedtimeDismissedDate=_bedtimeDismissedDate - In the implementation block
@property (assign,nonatomic) unsigned long long bedtimeDismissedAction;              //@synthesize bedtimeDismissedAction=_bedtimeDismissedAction - In the implementation block
@property (nonatomic,copy) NSDate * keepOffUntilDate;                                //@synthesize keepOffUntilDate=_keepOffUntilDate - In the implementation block
@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) MTSound * sound;                                          //@synthesize sound=_sound - In the implementation block
@property (assign,nonatomic) unsigned long long onboardingVersion;                   //@synthesize onboardingVersion=_onboardingVersion - In the implementation block
@property (nonatomic,copy) id currentDateProvider;                                   //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
@property (nonatomic,readonly) NSUUID * alarmID;                                     //@synthesize alarmID=_alarmID - In the implementation block
@property (nonatomic,readonly) NSURL * alarmURL; 
@property (nonatomic,readonly) BOOL repeats; 
@property (nonatomic,readonly) BOOL playsOnThisDevice; 
@property (getter=isFiring,nonatomic,readonly) BOOL firing; 
@property (getter=isSnoozed,nonatomic,readonly) BOOL snoozed; 
@property (nonatomic,readonly) NSString * displayTitle; 
@property (nonatomic,readonly) unsigned long long sleepDuration; 
@property (nonatomic,readonly) NSDate * nextFireDate; 
+(BOOL)supportsSecureCoding;
+(id)propertiesAffectingSync;
+(id)propertiesAffectingWaketime;
+(id)sleepAlarm;
+(unsigned long long)defaultPlayOptions;
+(id)propertiesAffectingBedtime;
+(id)sleepAlarmWithHour:(long long)arg1 minute:(long long)arg2 bedtimeHour:(long long)arg3 bedtimeMinute:(long long)arg4 ;
+(BOOL)_date:(id)arg1 isOnDay:(long long)arg2 calendar:(id)arg3 ;
+(id)sleepAlarmWithSchedule:(unsigned long long)arg1 ;
+(id)propertiesAffectingSnooze;
+(id)mostRecentlyUpdatedAlarmForAlarms:(id)arg1 ;
+(unsigned long long)defaultPlayOptionsIsSleepAlarm:(BOOL)arg1 ;
+(id)propertiesAffectingNotification;
+(id)sleepAlarmWithId:(id)arg1 ;
+(unsigned long long)defaultSleepModeOptions;
+(id)sleepAlarmWithHour:(long long)arg1 minute:(long long)arg2 ;
+(id)sleepAlarmWithHour:(long long)arg1 minute:(long long)arg2 year:(long long)arg3 month:(long long)arg4 day:(long long)arg5 bedtimeHour:(long long)arg6 bedtimeMinute:(long long)arg7 ;
+(id)alarmWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 ;
+(BOOL)_isInternalBuild;
+(id)alarm;
+(id)sleepScheduleString:(unsigned long long)arg1 ;
-(unsigned long long)hour;
-(BOOL)timeInBedTracking;
-(NSDate *)bedtimeDismissedDate;
-(void)setYear:(unsigned long long)arg1 ;
-(NSDate *)firedDate;
-(void)setSleepModeOptions:(unsigned long long)arg1 ;
-(unsigned long long)day;
-(BOOL)isFiring;
-(BOOL)sleepTracking;
-(id)nextTrigger;
-(id)succinctDescription;
-(void)setSleepTracking:(BOOL)arg1 ;
-(unsigned long long)year;
-(unsigned long long)sleepModeOptions;
-(void)setTimeInBedTracking:(BOOL)arg1 ;
-(void)setMonth:(unsigned long long)arg1 ;
-(unsigned long long)month;
-(MTSound *)sound;
-(void)setDay:(unsigned long long)arg1 ;
-(BOOL)isEqualIgnoringLastModifiedDate:(id)arg1 ;
-(void)setRepeatSchedule:(unsigned long long)arg1 ;
-(id)initFromDeserializer:(id)arg1 ;
-(void)setFiredDate:(NSDate *)arg1 ;
-(void)setBedtimeFiredDate:(NSDate *)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)nextTriggerAfterDate:(id)arg1 includeBedtimeNotification:(BOOL)arg2 ;
-(id)upcomingTriggersAfterDate:(id)arg1 ;
-(NSDate *)dismissedDate;
-(void)setHour:(unsigned long long)arg1 ;
-(id)nextTriggerAfterDate:(id)arg1 ;
-(void)setSleepAlarm:(BOOL)arg1 ;
-(BOOL)sleepSchedule;
-(BOOL)confirmedLastBedtimeReminder;
-(void)setCurrentDateProvider:(id)arg1 ;
-(BOOL)isEqualToAlarm:(id)arg1 ;
-(void)setSound:(MTSound *)arg1 ;
-(NSDate *)keepOffUntilDate;
-(id)nextTriggersAfterDate:(id)arg1 includeBedtime:(BOOL)arg2 ;
-(void)setBedtimeReminderMinutes:(unsigned long long)arg1 ;
-(id)_initCommon;
-(void)setDismissedDate:(NSDate *)arg1 ;
-(void)setFiring:(BOOL)arg1 ;
-(void)setSleepMode:(BOOL)arg1 ;
-(id)init;
-(BOOL)shouldBeScheduled;
-(id)nextExpectedBedtimeDateAfterDate:(id)arg1 ;
-(NSDate *)nextFireDate;
-(void)serializeWithSerializer:(id)arg1 ;
-(id)initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 currentDateProvider:(/*^block*/id)arg3 ;
-(unsigned long long)minute;
-(NSURL *)alarmURL;
-(void)setSnoozeFireDate:(NSDate *)arg1 ;
-(NSDate *)lastModifiedDate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setPlayOptions:(unsigned long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)overridesNextAlarm:(id)arg1 date:(id)arg2 calendar:(id)arg3 ;
-(MTIntentAlarm *)intentAlarm;
-(void)setBedtimeReminder:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)bedtimeDismissedAction;
-(BOOL)repeats;
-(void)setOverriddenForDate:(NSDate *)arg1 ;
-(void)setKeepOffUntilDate:(NSDate *)arg1 ;
-(BOOL)_isEqualToAlarm:(id)arg1 checkLastModified:(BOOL)arg2 ;
-(BOOL)isSingleTimeAlarm;
-(id)timeObject;
-(id)currentDateProvider;
-(id)nextFireDateAfterDate:(id)arg1 includeBedtimeNotification:(BOOL)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDate *)overriddenForDate;
-(unsigned long long)bedtimeHour;
-(NSString *)displayTitle;
-(unsigned long long)dismissedAction;
-(BOOL)isSnoozed;
-(BOOL)isSleepItem;
-(BOOL)sleepMode;
-(NSString *)description;
-(id)intentLabel;
-(unsigned long long)repeatSchedule;
-(void)setOverriddenDate:(id)arg1 ;
-(void)setDismissedAction:(unsigned long long)arg1 ;
-(id)alarmIntentDisplayString;
-(void)setMinute:(unsigned long long)arg1 ;
-(id)singleTimeOverrideDateInCalendar:(id)arg1 ;
-(void)setSleepSchedule:(BOOL)arg1 ;
-(NSUUID *)alarmID;
-(NSDate *)snoozeFireDate;
-(void)setBedtimeDismissedDate:(NSDate *)arg1 ;
-(id)nextFireDateAfterDate:(id)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSDate *)bedtimeSnoozeFireDate;
-(void)_updatePropertiesFromDeserializer:(id)arg1 ;
-(void)setBedtimeMinute:(unsigned long long)arg1 ;
-(unsigned long long)playOptions;
-(id)bedtimeComponents;
-(NSDate *)bedtimeFiredDate;
-(id)dateComponents;
-(id)nextTriggerAfterDate:(id)arg1 includeSnooze:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3 ;
-(id)_nextDateHelperWithDate:(id)arg1 calendar:(id)arg2 ;
-(BOOL)isSingleTime;
-(id)initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(id)_earliestTriggerDateForDate:(id)arg1 ;
-(BOOL)isItemEnabled;
-(id)initWithCoder:(id)arg1 ;
-(id)nextExpectedWakeUpDateAfterDate:(id)arg1 ;
-(BOOL)isValidDateComponent:(long long)arg1 ;
-(void)setBedtimeHour:(unsigned long long)arg1 ;
-(double)sleepDurationSeconds;
-(BOOL)overridesAlarm:(id)arg1 trigger:(id)arg2 calendar:(id)arg3 ;
-(BOOL)isSleepAlarm;
-(id)alarmIDIntentObject;
-(unsigned long long)bedtimeMinute;
-(BOOL)isEnabled;
-(id)initWithCurrentTimeFromCurrentDateProvider:(/*^block*/id)arg1 ;
-(id)nextTriggersAfterDate:(id)arg1 ;
-(id)identifier;
-(id)nextTriggerAfterDate:(id)arg1 ofType:(unsigned long long)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_copyStateOntoAlarm:(id)arg1 ;
-(void)setBedtimeDismissedAction:(unsigned long long)arg1 ;
-(BOOL)overridesScheduledObject:(id)arg1 calendar:(id)arg2 ;
-(NSNumber *)bedtimeReminder;
-(id)succinctDescriptionBuilder;
-(BOOL)playsOnThisDevice;
-(void)setAllowsSnooze:(BOOL)arg1 ;
-(id)alarmIDString;
-(void)setBedtimeSnoozeFireDate:(NSDate *)arg1 ;
-(void)scheduleOverridenForDate:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)allowsSnooze;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOnboardingVersion:(unsigned long long)arg1 ;
-(id)nextTriggersAfterDate:(id)arg1 inclusionOptions:(unsigned long long)arg2 ;
-(BOOL)isBedtimeSnoozed;
-(unsigned long long)sleepDuration;
-(id)nextTriggersAfterDate:(id)arg1 includeSnooze:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3 ;
-(NSString *)title;
-(unsigned long long)onboardingVersion;
-(BOOL)isEqual:(id)arg1 ;
-(id)getOverriddenDate;
-(unsigned long long)bedtimeReminderMinutes;
@end

