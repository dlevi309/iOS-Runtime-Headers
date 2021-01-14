/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

@class HKDataFlowLink, NSUUID;


@protocol HDWorkoutDataSource <NSObject>
@property (readonly) HKDataFlowLink * workoutDataFlowLink; 
@property (copy,readonly) NSUUID * workoutDataProcessorUUID; 
@optional
-(id)quantityTypesToIncludeWhilePaused;

@required
-(void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
-(void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
-(void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4;
-(void)workoutDataDestination:(id)arg1 didUpdateConfiguration:(id)arg2;
-(HKDataFlowLink *)workoutDataFlowLink;
-(NSUUID *)workoutDataProcessorUUID;

@end

