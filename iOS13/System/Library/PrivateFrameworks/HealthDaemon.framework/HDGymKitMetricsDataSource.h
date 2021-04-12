/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HDMetricsCollectorObserver.h>
#import <libobjc.A.dylib/HKDataFlowLinkProcessor.h>
#import <libobjc.A.dylib/HDWorkoutDataSource.h>

@class HKDataFlowLink, NSLock, NSMutableDictionary, NSString, NSUUID;

@interface HDGymKitMetricsDataSource : HDStandardTaskServer <HDMetricsCollectorObserver, HKDataFlowLinkProcessor, HDWorkoutDataSource> {

	HKDataFlowLink* _workoutDataFlowLink;
	NSLock* _lock;
	NSMutableDictionary* _accumulatedMetadata;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) HKDataFlowLink * workoutDataFlowLink; 
@property (copy,readonly) NSUUID * workoutDataProcessorUUID; 
+(id)taskIdentifier;
+(id)requiredEntitlements;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(void)remote_startTaskServerIfNeeded;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3 ;
-(void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(HKDataFlowLink *)workoutDataFlowLink;
-(NSUUID *)workoutDataProcessorUUID;
-(void)metricsCollector:(id)arg1 didCollectMetrics:(id)arg2 ;
-(void)_stopObservingMetrics;
-(void)_startObservingMetrics;
-(id)_metadataFromMetrics:(id)arg1 ;
@end

