/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/HKPersistableWorkoutEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDateInterval, NSError, NSDictionary, NSDate;

@interface HKWorkoutEvent : NSObject <HKPersistableWorkoutEvent, NSSecureCoding, NSCopying> {

	long long _type;
	NSDateInterval* _dateInterval;
	NSDictionary* _metadata;

}

@property (readonly) long long type; 
@property (copy,readonly) NSDate * date; 
@property (copy,readonly) NSDateInterval * dateInterval;                //@synthesize dateInterval=_dateInterval - In the implementation block
@property (copy,readonly) NSDictionary * metadata;                      //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sessionUUID; 
@property (nonatomic,readonly) long long workoutEventType; 
@property (nonatomic,copy,readonly) NSError * error; 
+(BOOL)supportsSecureCoding;
+(id)_workoutEventWithInternalEvent:(id)arg1 ;
+(id)_newWorkoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3 ;
+(id)workoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3 ;
+(id)_workoutEventWithType:(long long)arg1 date:(id)arg2 metadata:(id)arg3 ;
+(id)_workoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3 ;
+(id)workoutEventWithType:(long long)arg1 date:(id)arg2 ;
+(id)workoutEventWithType:(long long)arg1 date:(id)arg2 metadata:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)_init;
-(NSError *)error;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(NSDictionary *)metadata;
-(NSDateInterval *)dateInterval;
-(id)_validateConfiguration;
-(NSUUID *)sessionUUID;
-(void)_assertPropertiesValid;
-(id)initWithWorkoutEventType:(long long)arg1 sessionUUID:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4 error:(id)arg5 ;
-(long long)workoutEventType;
@end

