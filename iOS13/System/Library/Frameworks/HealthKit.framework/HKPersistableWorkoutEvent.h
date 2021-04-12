/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSError *)error;
-(NSDictionary *)metadata;
-(NSDateInterval *)dateInterval;
-(NSUUID *)sessionUUID;
-(id)initWithWorkoutEventType:(long long)arg1 sessionUUID:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4 error:(id)arg5;
-(long long)workoutEventType;

@end

