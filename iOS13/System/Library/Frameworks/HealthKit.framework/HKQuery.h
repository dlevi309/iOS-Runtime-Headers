/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKQueryClientInterface.h>

@protocol HKQueryDelegate, HKQueryServerInterface, OS_dispatch_queue;
@class HKQueryServerProxyProvider, HKHealthStore, HKObjectType, NSPredicate, NSUUID, NSString, NSObject, _HKFilter, HKSampleType;

@interface HKQuery : NSObject <_HKXPCExportable, HKQueryClientInterface> {

	BOOL _hasBeenExecuted;
	id<HKQueryDelegate> _delegate;
	HKQueryServerProxyProvider* _proxyProvider;
	Ai _activationState;
	Ai _deactivateCallCount;
	double _activationTime;
	HKHealthStore* _strongHealthStore;
	id<HKQueryServerInterface> _serverProxy;
	BOOL _shouldSuppressDataCollection;
	unsigned _applicationSDKVersion;
	HKObjectType* _objectType;
	NSPredicate* _predicate;
	NSUUID* _activationUUID;
	NSString* _debugIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	_HKFilter* _filter;
	long long _qualityOfService;

}

@property (copy) NSUUID * activationUUID;                                             //@synthesize activationUUID=_activationUUID - In the implementation block
@property (nonatomic,__weak,readonly) id<HKQueryDelegate> delegate; 
@property (readonly) long long activationState; 
@property (readonly) BOOL deactivating; 
@property (readonly) long long deactivateCallCount; 
@property (assign,nonatomic) BOOL shouldSuppressDataCollection;                       //@synthesize shouldSuppressDataCollection=_shouldSuppressDataCollection - In the implementation block
@property (nonatomic,copy) NSString * debugIdentifier;                                //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) unsigned applicationSDKVersion;                        //@synthesize applicationSDKVersion=_applicationSDKVersion - In the implementation block
@property (getter=_filter,nonatomic,readonly) _HKFilter * filter;                     //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) HKObjectType * objectType;                               //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                                 //@synthesize predicate=_predicate - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                              //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (readonly) HKSampleType * sampleType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(id)predicateForObjectsWithUUIDs:(id)arg1 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 ;
+(id)predicateForObjectWithUUID:(id)arg1 ;
+(id)serverInterface;
+(Class)configurationClass;
+(id)clientInterface;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
+(id)predicateForSamplesWithStartDate:(id)arg1 endDate:(id)arg2 inclusiveEndDates:(BOOL)arg3 options:(unsigned long long)arg4 ;
+(id)predicateForObjectsFromSource:(id)arg1 ;
+(id)predicateForClinicalRecordsWithFHIRResourceType:(id)arg1 ;
+(id)predicateForSamplesWithStartDate:(id)arg1 endDate:(id)arg2 options:(unsigned long long)arg3 ;
+(id)predicateForSamplesWithinDateInterval:(id)arg1 options:(unsigned long long)arg2 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 allowedValues:(id)arg2 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3 ;
+(id)predicateForClinicalRecordsFromSource:(id)arg1 FHIRResourceType:(id)arg2 identifier:(id)arg3 ;
+(id)predicateForObjectsFromSources:(id)arg1 ;
+(id)predicateForObjectsFromSourceRevisions:(id)arg1 ;
+(id)predicateForObjectsFromDevices:(id)arg1 ;
+(id)predicateForObjectsWithDeviceProperty:(id)arg1 allowedValues:(id)arg2 ;
+(id)_predicateForObjectsFromAppleWatches;
+(id)_predicateForObjectsWithMinOSBuildVersion:(id)arg1 maxOSBuildVersion:(id)arg2 ;
+(id)predicateForObjectsWithNoCorrelation;
+(id)predicateForObjectsFromWorkout:(id)arg1 ;
+(id)predicateForSamplesAssociatedWithSample:(id)arg1 ;
+(id)predicateForSamplesForDayFromDate:(id)arg1 calendar:(id)arg2 options:(unsigned long long)arg3 ;
+(id)predicateForRecordsFromClinicalAccountIdentifier:(id)arg1 ;
+(id)predicateForRecordsFromGatewayWithExternalIdentifier:(id)arg1 ;
+(id)predicateForDiagnosticTestResultCategory:(id)arg1 ;
+(id)predicateForSamplesWithConceptIdentifier:(id)arg1 keyPath:(id)arg2 ;
+(id)predicateForRecordsWithSortDateFromStartDateComponents:(id)arg1 endDateComponents:(id)arg2 ;
+(id)predicateForCreationDateWithTodayViewRange:(id)arg1 ;
+(id)predicateForMedicalRecordWithState:(unsigned long long)arg1 ;
+(id)predicateForQuantitySamplesWithOperatorType:(unsigned long long)arg1 quantity:(id)arg2 ;
+(id)predicateForCategorySamplesWithOperatorType:(unsigned long long)arg1 value:(long long)arg2 ;
+(id)predicateForWorkoutsWithWorkoutActivityType:(unsigned long long)arg1 ;
+(id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 duration:(double)arg2 ;
+(id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalEnergyBurned:(id)arg2 ;
+(id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalDistance:(id)arg2 ;
+(id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalSwimmingStrokeCount:(id)arg2 ;
+(id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalFlightsClimbed:(id)arg2 ;
+(id)predicateForActivitySummaryWithDateComponents:(id)arg1 ;
+(id)predicateForActivitySummariesBetweenStartDateComponents:(id)arg1 endDateComponents:(id)arg2 ;
+(id)_cachedInterfaceForProtocol:(id)arg1 configurationHandler:(/*^block*/id)arg2 ;
+(id)serverInterfaceProtocol;
+(void)configureServerInterface:(id)arg1 ;
+(BOOL)shouldApplyAdditionalPredicateForObjectType:(id)arg1 ;
+(id)predicateForActivityCachesBetweenStartDateComponents:(id)arg1 endDateComponents:(id)arg2 ;
-(NSString *)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<HKQueryDelegate>)delegate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(id)exportedInterface;
-(HKObjectType *)objectType;
-(id)_filter;
-(void)setObjectType:(HKObjectType *)arg1 ;
-(long long)activationState;
-(void)deactivate;
-(NSString *)debugIdentifier;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)connectionInvalidated;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(HKSampleType *)sampleType;
-(unsigned)applicationSDKVersion;
-(id)_initWithObjectType:(id)arg1 predicate:(id)arg2 ;
-(void)queue_dispatchToClientForUUID:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)client_deliverError:(id)arg1 forQuery:(id)arg2 ;
-(void)queue_validate;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)activateWithClientQueue:(id)arg1 healthStore:(id)arg2 delegate:(id)arg3 time:(double)arg4 completion:(/*^block*/id)arg5 ;
-(void)reactivateWithHealthStore:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(long long)deactivateCallCount;
-(BOOL)hasQueryUUID:(id)arg1 ;
-(void)_throwInvalidArgumentExceptionIfHasBeenExecuted:(SEL)arg1 ;
-(id)_filterForPredicate:(id)arg1 objectType:(id)arg2 ;
-(void)setShouldSuppressDataCollection:(BOOL)arg1 ;
-(NSUUID *)activationUUID;
-(BOOL)deactivating;
-(void)setActivationUUID:(NSUUID *)arg1 ;
-(void)_queue_activateWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_deactivateWithError:(id)arg1 ;
-(void)_queue_finishActivationWithServerProxy:(id)arg1 activationUUID:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)queue_queryDidFinishActivation:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(id)_predicateFilterClasses;
-(void)queue_deactivate;
-(BOOL)shouldSuppressDataCollection;
@end

