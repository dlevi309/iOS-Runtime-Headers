/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCLSchedule;

@interface SCLScheduleSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	BOOL _enabled;
	SCLSchedule* _schedule;
	unsigned long long _version;

}

@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) unsigned long long version;                 //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) SCLSchedule * schedule;                //@synthesize schedule=_schedule - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)version;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(SCLSchedule *)schedule;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dateIntervalForActiveScheduleOnOrAfterDate:(id)arg1 calendar:(id)arg2 ;
-(BOOL)isActiveAtDate:(id)arg1 calendar:(id)arg2 ;
-(id)startTimeForDay:(long long)arg1 ;
-(id)endTimeForDay:(long long)arg1 ;
-(id)recurrenceForActiveScheduleOnOrAfterDate:(id)arg1 calendar:(id)arg2 ;
-(id)initWithSchoolModeScheduleSettings:(id)arg1 ;
@end

