/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)taskIdentifier;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(void)remote_startTaskServerIfNeeded;
-(void)remote_setDataSourceConfiguration:(id)arg1 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3 ;
-(void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(HKDataFlowLink *)workoutDataFlowLink;
-(NSUUID *)workoutDataProcessorUUID;
-(void)addSamples:(id)arg1 dataSource:(id)arg2 ;
-(void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2 ;
-(void)addMetadata:(id)arg1 dataSource:(id)arg2 ;
-(unsigned long long)workoutDataDestinationState;
-(id<HDWorkoutDataAccumulator>)workoutDataAccumulator;
-(void)_setDataSourceConfiguration:(id)arg1 ;
-(BOOL)_lock_shouldAddSample:(id)arg1 ;
@end

