/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKQueryClientInterface.h>

@protocol HKQueryDelegate, HKQueryServerInterface, OS_dispatch_queue;
@class HKQueryServerProxyProvider, HKHealthStore, HKObjectType, NSPredicate, NSUUID, _HKFilter, NSString, NSObject, HKSampleType;

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
	_HKFilter* _filter;
	NSString* _debugIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	long long _qualityOfService;

}

@property (copy) NSUUID * activationUUID;                                             //@synthesize activationUUID=_activationUUID - In the implementation block
@property (getter=_filter,nonatomic,readonly) _HKFilter * filter;                     //@synthesize filter=_filter - In the implementation block
@property (nonatomic,__weak,readonly) id<HKQueryDelegate> delegate; 
@property (readonly) long long activationState; 
@property (readonly) BOOL deactivating; 
@property (readonly) long long deactivateCallCount; 
@property (assign,nonatomic) BOOL shouldSuppressDataCollection;                       //@synthesize shouldSuppressDataCollection=_shouldSuppressDataCollection - In the implementation block
@property (nonatomic,copy) NSString * debugIdentifier;                                //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) unsigned applicationSDKVersion;                        //@synthesize applicationSDKVersion=_applicationSDKVersion - In the implementation block
@property (nonatomic,retain) HKObjectType * objectType;                               //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                                 //@synthesize predicate=_predicate - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                              //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (readonly) HKSampleType * sampleType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicateForSamplesWithStartDate:(id)arg1 endDate:(id)arg2 inclusiveEndDates:(BOOL)arg3 options:(unsigned long long)arg4 ;
+(id)predicateForObjectsFromSource:(id)arg1 ;
+(id)predicateForClinicalRecordsWithFHIRResourceType:(id)arg1 ;
+(id)predicateForSamplesAssociatedWithSample:(id)arg1 ;
+(id)predicateForSamplesWithinDateInterval:(id)arg1 options:(unsigned long long)arg2 ;
+(id)predicateForObjectsFromDevices:(id)arg1 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 allowedValues:(id)arg2 ;
+(id)predicateForObjectsFromSources:(id)arg1 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3 ;
+(id)predicateForObjectsWithDeviceProperty:(id)arg1 allowedValues:(id)arg2 ;
+(id)predicateForClinicalRecordsFromSource:(id)arg1 FHIRResourceType:(id)arg2 identifier:(id)arg3 ;
+(id)predicateForObjectsFromSourceRevisions:(id)arg1 ;
+(id)_predicateForObjectsFromAppleWatches;
+(id)_predicateForObjectsWithMinOSBuildVersion:(id)arg1 maxOSBuildVersion:(id)arg2 ;
+(id)predicateForObjectsWithNoCorrelation;
+(id)predicateForObjectsFromWorkout:(id)arg1 ;
+(id)predicateForDiagnosticTestResultCategory:(id)arg1 ;
+(id)predicateForObjectsAssociatedWithElectrocardiogram:(id)arg1 ;
+(id)predicateForSamplesForDayFromDate:(id)arg1 calendar:(id)arg2 options:(unsigned long long)arg3 ;
+(id)predicateForRecordsFromClinicalAccountIdentifier:(id)arg1 ;
+(id)predicateForRecordsFromGatewayWithExternalIdentifier:(id)arg1 ;
+(id)predicateForSamplesWithConceptIdentifier:(id)arg1 keyPath:(id)arg2 ;
+(id)predicateForCreationDateWithTodayViewRange:(id)arg1 ;
+(id)predicateForRecordsWithSortDateFromStartDateComponents:(id)arg1 endDateComponents:(id)arg2 ;
+(id)predicateForMedicalRecordWithState:(unsigned long long)arg1 ;
+(id)predicateForQuantitySamplesWithOperatorType:(unsigned long long)arg1 quantity:(id)arg2 ;
+(id)predicateForCategorySamplesWithOperatorType:(unsigned long long)arg1 value:(long long)arg2 ;
+(id)predicateForWorkoutsWithWorkoutActivityType:(unsigned long long)arg1 ;
+(id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 duration:(double)arg2 ;
+(id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalEnergyBurned:(id)arg2 ;
+(id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalDistance:(id)arg2 ;
+(id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalSwimmingStrokeCount:(id)arg2 ;
+(id)predicateForActivitySummaryWithDateComponents:(id)arg1 ;
+(id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalFlightsClimbed:(id)arg2 ;
+(id)predicateForActivitySummariesWithActivityMoveMode:(long long)arg1 ;
+(id)predicateForActivitySummariesBetweenStartDateComponents:(id)arg1 endDateComponents:(id)arg2 ;
+(id)predicateForElectrocardiogramsWithClassification:(long long)arg1 ;
+(id)predicateForElectrocardiogramsWithPrivateClassification:(unsigned long long)arg1 ;
+(id)predicateForElectrocardiogramsWithSymptomsStatus:(long long)arg1 ;
+(id)predicateForObjectsFromContributorWithUUID:(id)arg1 ;
+(id)_cachedInterfaceForProtocol:(id)arg1 configurationHandler:(/*^block*/id)arg2 ;
+(id)serverInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
+(id)serverInterface;
+(BOOL)shouldApplyAdditionalPredicateForObjectType:(id)arg1 ;
+(id)taskIdentifier;
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(id)predicateForSamplesWithStartDate:(id)arg1 endDate:(id)arg2 options:(unsigned long long)arg3 ;
+(id)clientInterface;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 ;
+(id)predicateForObjectWithUUID:(id)arg1 ;
+(id)predicateForObjectsWithUUIDs:(id)arg1 ;
+(void)configureServerInterface:(id)arg1 ;
+(id)predicateForActivityCachesBetweenStartDateComponents:(id)arg1 endDateComponents:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setQualityOfService:(long long)arg1 ;
-(void)connectionInvalidated;
-(unsigned)applicationSDKVersion;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(NSPredicate *)predicate;
-(NSUUID *)activationUUID;
-(long long)activationState;
-(NSString *)debugIdentifier;
-(id<HKQueryDelegate>)delegate;
-(long long)deactivateCallCount;
-(BOOL)hasQueryUUID:(id)arg1 ;
-(HKObjectType *)objectType;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(id)exportedInterface;
-(id)_filter;
-(void)queue_deliverError:(id)arg1 ;
-(void)connectionInterrupted;
-(void)setObjectType:(HKObjectType *)arg1 ;
-(id)remoteInterface;
-(void)_throwInvalidArgumentExceptionIfHasBeenExecuted:(SEL)arg1 ;
-(id)_filterForPredicate:(id)arg1 objectType:(id)arg2 ;
-(void)setShouldSuppressDataCollection:(BOOL)arg1 ;
-(void)setActivationUUID:(NSUUID *)arg1 ;
-(void)_queue_activateWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_queue_deactivateWithError:(id)arg1 ;
-(void)_queue_finishActivationWithServerProxy:(id)arg1 activationUUID:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)deactivate;
-(void)queue_queryDidFinishActivation:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)queue_deactivate;
-(BOOL)shouldSuppressDataCollection;
-(void)queue_populateConfiguration:(id)arg1 ;
-(NSString *)description;
-(BOOL)deactivating;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(long long)qualityOfService;
-(HKSampleType *)sampleType;
-(id)_initWithObjectType:(id)arg1 predicate:(id)arg2 ;
-(void)client_deliverError:(id)arg1 forQuery:(id)arg2 ;
-(void)queue_dispatchToClientForUUID:(id)arg1 shouldDeactivate:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(void)activateWithClientQueue:(id)arg1 healthStore:(id)arg2 delegate:(id)arg3 time:(double)arg4 completion:(/*^block*/id)arg5 ;
-(void)reactivateWithHealthStore:(id)arg1 ;
-(void)queue_validate;
@end

