/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/HKDataFlowLinkProcessor.h>
#import <libobjc.A.dylib/HDClientDataCollectionObservationStateMonitorDelegate.h>
#import <libobjc.A.dylib/HDWorkoutDataSource.h>

@class HDProfile, HDHealthStoreClient, NSLock, HKDataFlowLink, NSUUID, HKWorkoutConfiguration, NSSet, HDDataCollectionAssertion, HDClientDataCollectionObservationStateMonitor, NSString;

@interface HDWorkoutBasicDataSource : NSObject <HDDataObserver, HKDataFlowLinkProcessor, HDClientDataCollectionObservationStateMonitorDelegate, HDWorkoutDataSource> {

	HDProfile* _profile;
	HDHealthStoreClient* _client;
	NSLock* _lock;
	HKDataFlowLink* _workoutDataFlowLink;
	NSUUID* _workoutDataProcessorUUID;
	HKWorkoutConfiguration* _workoutConfiguration;
	NSSet* _sampleTypesToCollect;
	HDDataCollectionAssertion* _collectionAssertion;
	HDClientDataCollectionObservationStateMonitor* _clientStateMonitor;

}

@property (nonatomic,copy) NSSet * sampleTypesToCollect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) HKDataFlowLink * workoutDataFlowLink; 
@property (copy,readonly) NSUUID * workoutDataProcessorUUID; 
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(NSSet *)sampleTypesToCollect;
-(double)_collectionInterval;
-(void)setWorkoutConfiguration:(id)arg1 ;
-(void)samplesJournaled:(id)arg1 type:(id)arg2 ;
-(void)dealloc;
-(void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3 ;
-(void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)workoutDataDestination:(id)arg1 didUpdateConfiguration:(id)arg2 ;
-(HKDataFlowLink *)workoutDataFlowLink;
-(NSUUID *)workoutDataProcessorUUID;
-(id)initWithConfiguration:(id)arg1 client:(id)arg2 ;
-(void)setSampleTypesToCollect:(NSSet *)arg1 ;
-(void)_stopCollection;
-(void)_stopObservingSampleTypes:(id)arg1 ;
-(void)_startObservingSampleTypes:(id)arg1 ;
-(BOOL)_enumerateSamplesOfType:(id)arg1 from:(id)arg2 to:(id)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
-(id)_initialMetadata;
-(void)_forwardSamples:(id)arg1 ;
-(void)dataCollectionObservationStateDidChangeForClient:(id)arg1 ;
@end

