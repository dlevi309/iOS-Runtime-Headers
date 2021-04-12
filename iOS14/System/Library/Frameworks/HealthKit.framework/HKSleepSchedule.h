/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateComponents, NSNumber;

@interface HKSleepSchedule : HKSample <NSSecureCoding, NSCopying> {

	unsigned long long _weekdays;
	NSDateComponents* _wakeTimeComponents;
	NSDateComponents* _bedTimeComponents;
	NSNumber* _overrideDayIndex;

}

@property (assign,setter=_setWeekdays:,nonatomic) unsigned long long weekdays;                                //@synthesize weekdays=_weekdays - In the implementation block
@property (setter=_setWakeTimeComponents:,nonatomic,copy) NSDateComponents * wakeTimeComponents;              //@synthesize wakeTimeComponents=_wakeTimeComponents - In the implementation block
@property (setter=_setBedTimeComponents:,nonatomic,copy) NSDateComponents * bedTimeComponents;                //@synthesize bedTimeComponents=_bedTimeComponents - In the implementation block
@property (setter=_setOverrideDayIndex:,nonatomic,copy) NSNumber * overrideDayIndex;                          //@synthesize overrideDayIndex=_overrideDayIndex - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sleepScheduleWithDate:(id)arg1 weekdays:(unsigned long long)arg2 wakeTimeComponents:(id)arg3 bedTimeComponents:(id)arg4 overrideDayIndex:(id)arg5 device:(id)arg6 metadata:(id)arg7 ;
+(BOOL)_isConcreteObjectClass;
+(id)_sleepScheduleWithDate:(id)arg1 weekdays:(unsigned long long)arg2 wakeTimeComponents:(id)arg3 bedTimeComponents:(id)arg4 overrideDayIndex:(id)arg5 device:(id)arg6 metadata:(id)arg7 config:(/*^block*/id)arg8 ;
+(BOOL)supportsEquivalence;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)weekdays;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)overrideDayIndex;
-(void)_setWeekdays:(unsigned long long)arg1 ;
-(void)_setWakeTimeComponents:(id)arg1 ;
-(NSDateComponents *)wakeTimeComponents;
-(NSDateComponents *)bedTimeComponents;
-(void)_setBedTimeComponents:(id)arg1 ;
-(void)_setOverrideDayIndex:(id)arg1 ;
@end

