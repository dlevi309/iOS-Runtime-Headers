/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)workoutDataDestinationState;
-(id<HDWorkoutDataAccumulator>)workoutDataAccumulator;

@end

