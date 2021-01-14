/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DNDModeAssertionLifetime : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic,readonly) unsigned long long lifetimeType; 
+(BOOL)supportsSecureCoding;
+(id)lifetimeWithDateInterval:(id)arg1 ;
+(id)lifetimeWithDuration:(double)arg1 ;
+(id)lifetimeWithCurrentLocation;
+(id)lifetimeUntilEndOfCalendarEventWithUniqueID:(id)arg1 occurrenceDate:(id)arg2 ;
+(id)lifetimeWithCalendarEventUniqueID:(id)arg1 occurrenceDate:(id)arg2 ;
+(id)lifetimeMatchingScheduleWithIdentifier:(id)arg1 ;
+(id)lifetimeUntilEndOfScheduleWithIdentifier:(id)arg1 ;
+(id)lifetimeForUserRequest;
+(id)_secureCodingLifetimeClasses;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)lifetimeType;
@end

