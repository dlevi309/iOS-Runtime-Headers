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

@class NSDate, NSString, NSSet;

@interface HKSPSleepSettings : NSObject <BSDescriptionProviding, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying> {

	BOOL _watchSleepFeaturesEnabled;
	BOOL _scheduledSleepMode;
	BOOL _sleepTracking;
	BOOL _timeInBedTracking;
	BOOL _bedtimeReminders;
	BOOL _wakeUpResults;
	BOOL _chargingReminders;
	BOOL _springBoardGreetingDisabled;
	unsigned long long _version;
	NSDate* _lastModifiedDate;
	unsigned long long _sleepModeOptions;

}

@property (nonatomic,readonly) BOOL springBoardGreetingDisabled;                 //@synthesize springBoardGreetingDisabled=_springBoardGreetingDisabled - In the implementation block
@property (nonatomic,readonly) BOOL watchSleepFeaturesEnabled;                   //@synthesize watchSleepFeaturesEnabled=_watchSleepFeaturesEnabled - In the implementation block
@property (nonatomic,readonly) BOOL scheduledSleepMode;                          //@synthesize scheduledSleepMode=_scheduledSleepMode - In the implementation block
@property (nonatomic,readonly) unsigned long long sleepModeOptions;              //@synthesize sleepModeOptions=_sleepModeOptions - In the implementation block
@property (nonatomic,readonly) BOOL sleepTracking;                               //@synthesize sleepTracking=_sleepTracking - In the implementation block
@property (nonatomic,readonly) BOOL timeInBedTracking;                           //@synthesize timeInBedTracking=_timeInBedTracking - In the implementation block
@property (nonatomic,readonly) BOOL bedtimeReminders;                            //@synthesize bedtimeReminders=_bedtimeReminders - In the implementation block
@property (nonatomic,readonly) BOOL wakeUpResults;                               //@synthesize wakeUpResults=_wakeUpResults - In the implementation block
@property (nonatomic,readonly) BOOL chargingReminders;                           //@synthesize chargingReminders=_chargingReminders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long version;                       //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate;                   //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,readonly) NSSet * significantChanges; 
+(BOOL)supportsSecureCoding;
+(id)testSleepSettings;
+(id)testSleepSettingsWithAllPropertiesSet;
-(BOOL)timeInBedTracking;
-(BOOL)isEquivalentTo:(id)arg1 ;
-(BOOL)sleepTracking;
-(id)succinctDescription;
-(unsigned long long)sleepModeOptions;
-(BOOL)watchSleepFeaturesEnabled;
-(BOOL)_needsMigrationForCoder:(id)arg1 ;
-(id)init;
-(id)mutableCopy;
-(NSDate *)lastModifiedDate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)chargingReminders;
-(BOOL)springBoardGreetingDisabled;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_equateTo:(id)arg1 builderBuilderBlock:(/*^block*/id)arg2 ;
-(void)copyFromObject:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)_migrateForCoder:(id)arg1 ;
-(BOOL)scheduledSleepMode;
-(NSString *)description;
-(BOOL)bedtimeReminders;
-(unsigned long long)hash;
-(id)initFromObject:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_buildForEquivalenceTo:(id)arg1 builder:(id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)wakeUpResults;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)significantChanges;
@end

