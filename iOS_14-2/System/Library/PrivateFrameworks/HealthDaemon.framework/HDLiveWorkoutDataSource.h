/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKLiveWorkoutDataSourceServerInterface.h>
#import <libobjc.A.dylib/HKDataFlowLinkProcessor.h>
#import <libobjc.A.dylib/HDWorkoutDataSource.h>
#import <libobjc.A.dylib/HDWorkoutDataDestination.h>

@class HDProfile, HKDataFlowLink, HKWorkoutDataSourceConfiguration, HDWorkoutBasicDataSource, NSLock, NSString, NSUUID;

@interface HDLiveWorkoutDataSource : HDStandardTaskServer <HKLiveWorkoutDataSourceServerInterface, HKDataFlowLinkProcessor, HDWorkoutDataSource, HDWorkoutDataDestination> {

	HDProfile* _profile;
	HKDataFlowLink* _workoutDataFlowLink;
	HKWorkoutDataSourceConfiguration* _dataSourceConfiguration;
	HDWorkoutBasicDataSource* _basicDataSource;
	NSLock* _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) HKDataFlowLink * workoutDataFlowLink; 
@property (copy,readonly) NSUUID * workoutDataProcessorUUID; 
@property (readonly) unsigned long long workoutDataDestinationState; 
@property (nonatomic,readonly) id<HDWorkoutDataAccumulator> workoutDataAccumulator; 
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
+(id)taskIdentifier;
+(Class)configurationClass;
+(id)requiredEntitlements;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(id)remoteInterface;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)remote_setDataSourceConfiguration:(id)arg1 ;
-(void)remote_startTaskServerIfNeeded;
-(void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3 ;
-(void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)workoutDataDestination:(id)arg1 didUpdateConfiguration:(id)arg2 ;
-(HKDataFlowLink *)workoutDataFlowLink;
-(NSUUID *)workoutDataProcessorUUID;
-(void)addSamples:(id)arg1 dataSource:(id)arg2 ;
-(void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2 ;
-(void)addMetadata:(id)arg1 dataSource:(id)arg2 ;
-(void)updateWorkoutConfiguration:(id)arg1 dataSource:(id)arg2 ;
-(unsigned long long)workoutDataDestinationState;
-(id<HDWorkoutDataAccumulator>)workoutDataAccumulator;
-(void)_setDataSourceConfiguration:(id)arg1 ;
-(BOOL)_lock_shouldAddSample:(id)arg1 ;
@end

