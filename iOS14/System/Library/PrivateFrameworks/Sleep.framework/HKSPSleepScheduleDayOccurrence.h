/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/HKSPObject.h>
#import <libobjc.A.dylib/HKSPDictionarySerializable.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NAHashable.h>

@class NSDateComponents, HKSPAlarmConfiguration, NSString, NSDate, NSSet;

@interface HKSPSleepScheduleDayOccurrence : NSObject <HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable> {

	unsigned long long _version;
	NSDateComponents* _bedtimeComponents;
	NSDateComponents* _wakeUpComponents;
	HKSPAlarmConfiguration* _alarmConfiguration;

}

@property (nonatomic,copy,readonly) NSDateComponents * bedtimeComponents;                //@synthesize bedtimeComponents=_bedtimeComponents - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * wakeUpComponents;                 //@synthesize wakeUpComponents=_wakeUpComponents - In the implementation block
@property (nonatomic,readonly) HKSPAlarmConfiguration * alarmConfiguration;              //@synthesize alarmConfiguration=_alarmConfiguration - In the implementation block
@property (nonatomic,readonly) NSString * groupingIdentifier; 
@property (nonatomic,readonly) unsigned long long version;                               //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) NSSet * significantChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)testSleepScheduleDayOccurrence;
+(id)testSleepScheduleDayOccurrenceWithAllPropertiesSet;
+(id)testSleepScheduleDayOccurrenceWithAlarmConfiguration:(id)arg1 ;
+(id)testOverrideSleepScheduleDayOccurrence;
-(BOOL)isEquivalentTo:(id)arg1 ;
-(id)succinctDescription;
-(id)init;
-(id)mutableCopy;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_equateTo:(id)arg1 builderBuilderBlock:(/*^block*/id)arg2 ;
-(void)copyFromObject:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSString *)groupingIdentifier;
-(NSDateComponents *)bedtimeComponents;
-(unsigned long long)hash;
-(id)initFromObject:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKSPAlarmConfiguration *)alarmConfiguration;
-(NSDateComponents *)wakeUpComponents;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)isEquivalentToOccurrenceIgnoringDates:(id)arg1 ;
-(BOOL)isAlarmEquivalentToOccurrenceIgnoringDates:(id)arg1 ;
-(id)generateSleepScheduleOccurrenceWithWeekdays:(unsigned long long)arg1 ;
-(id)succinctDescriptionBuilder;
-(unsigned long long)version;
-(id)_decodeComponentsForPersistenceWithCoder:(id)arg1 key:(id)arg2 ;
-(void)_encodeComponentsForPersistence:(id)arg1 coder:(id)arg2 key:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)significantChanges;
@end

