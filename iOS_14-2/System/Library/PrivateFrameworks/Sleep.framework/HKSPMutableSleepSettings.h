/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <Sleep/HKSPSleepSettings.h>
#import <libobjc.A.dylib/HKSPMutableObject.h>

@class HKSPChangeSet, NSDate, NSSet, NSString;

@interface HKSPMutableSleepSettings : HKSPSleepSettings <HKSPMutableObject> {

	HKSPChangeSet* _changeSet;

}

@property (assign,nonatomic) BOOL springBoardGreetingDisabled; 
@property (assign,nonatomic) BOOL watchSleepFeaturesEnabled; 
@property (assign,nonatomic) BOOL scheduledSleepMode; 
@property (assign,nonatomic) unsigned long long sleepModeOptions; 
@property (assign,nonatomic) BOOL sleepTracking; 
@property (assign,nonatomic) BOOL timeInBedTracking; 
@property (assign,nonatomic) BOOL bedtimeReminders; 
@property (assign,nonatomic) BOOL wakeUpResults; 
@property (assign,nonatomic) BOOL chargingReminders; 
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) HKSPChangeSet * changeSet;                      //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,readonly) unsigned long long version; 
@property (nonatomic,readonly) NSSet * significantChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)freeze;
-(BOOL)timeInBedTracking;
-(void)setSleepModeOptions:(unsigned long long)arg1 ;
-(BOOL)sleepTracking;
-(HKSPChangeSet *)changeSet;
-(void)setSleepTracking:(BOOL)arg1 ;
-(unsigned long long)sleepModeOptions;
-(void)setTimeInBedTracking:(BOOL)arg1 ;
-(BOOL)watchSleepFeaturesEnabled;
-(id)init;
-(id)mutableCopy;
-(NSDate *)lastModifiedDate;
-(void)setWakeUpResults:(BOOL)arg1 ;
-(BOOL)chargingReminders;
-(BOOL)springBoardGreetingDisabled;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)scheduledSleepMode;
-(void)setChargingReminders:(BOOL)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(BOOL)bedtimeReminders;
-(id)initWithCoder:(id)arg1 ;
-(void)setBedtimeReminders:(BOOL)arg1 ;
-(void)setWatchSleepFeaturesEnabled:(BOOL)arg1 ;
-(void)setScheduledSleepMode:(BOOL)arg1 ;
-(void)setSpringBoardGreetingDisabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)wakeUpResults;
@end

