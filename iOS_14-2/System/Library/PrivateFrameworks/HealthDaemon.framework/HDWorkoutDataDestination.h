/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

@class HKDataFlowLink, NSUUID;


@protocol HDWorkoutDataDestination <NSObject>
@property (readonly) HKDataFlowLink * workoutDataFlowLink; 
@property (copy,readonly) NSUUID * workoutDataProcessorUUID; 
@property (readonly) unsigned long long workoutDataDestinationState; 
@property (nonatomic,readonly) id<HDWorkoutDataAccumulator> workoutDataAccumulator; 
@required
-(HKDataFlowLink *)workoutDataFlowLink;
-(NSUUID *)workoutDataProcessorUUID;
-(void)addSamples:(id)arg1 dataSource:(id)arg2;
-(void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2;
-(void)addMetadata:(id)arg1 dataSource:(id)arg2;
-(void)updateWorkoutConfiguration:(id)arg1 dataSource:(id)arg2;
-(unsigned long long)workoutDataDestinationState;
-(id<HDWorkoutDataAccumulator>)workoutDataAccumulator;

@end

