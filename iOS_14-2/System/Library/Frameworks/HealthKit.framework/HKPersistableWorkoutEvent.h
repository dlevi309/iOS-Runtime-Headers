/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

@class NSUUID, NSDateInterval, NSError, NSDictionary;


@protocol HKPersistableWorkoutEvent
@property (nonatomic,copy,readonly) NSUUID * sessionUUID; 
@property (nonatomic,readonly) long long workoutEventType; 
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,copy,readonly) NSError * error; 
@property (nonatomic,copy,readonly) NSDictionary * metadata; 
@required
-(NSDateInterval *)dateInterval;
-(NSUUID *)sessionUUID;
-(NSError *)error;
-(id)initWithWorkoutEventType:(long long)arg1 sessionUUID:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4 error:(id)arg5;
-(long long)workoutEventType;
-(NSDictionary *)metadata;

@end

