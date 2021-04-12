/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <Foundation/NSOperation.h>

@class HDHealthRecordsProfileExtension, HDProfile, NSSet, NSError, HDDaemonTransaction, NSString, HDClinicalIngestionTaskContext, NSDictionary, HDHealthRecordsXPCServiceClient, HDClinicalIngestionAnalyticsAccumulator;

@interface HDClinicalIngestionTask : NSOperation {

	HDHealthRecordsProfileExtension* _profileExtension;
	HDProfile* _profile;
	NSSet* _accountIdentifiers;
	NSError* _ingestionError;
	HDDaemonTransaction* _transaction;
	os_unfair_lock_s _ivarLock;
	BOOL _hasNewRecords;
	NSString* _taskIdentifier;
	HDClinicalIngestionTaskContext* _context;
	/*^block*/id _completion;
	/*^block*/id _willBeginFetchingAndExtracting;
	/*^block*/id _didFinishFetchingAndExtracting;
	double _taskRunTime;
	NSString* _analyticsString;
	NSDictionary* _updateGatewayOperationsByAccountIdentifier;
	/*^block*/id _unitTesting_didCallHandleStaleResourcesOperation;
	HDHealthRecordsXPCServiceClient* _healthRecordsServiceClient;
	HDClinicalIngestionAnalyticsAccumulator* _currentAnalyticsAccumulator;

}

@property (nonatomic,readonly) NSDictionary * updateGatewayOperationsByAccountIdentifier;                          //@synthesize updateGatewayOperationsByAccountIdentifier=_updateGatewayOperationsByAccountIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasNewRecords;                                                                   //@synthesize hasNewRecords=_hasNewRecords - In the implementation block
@property (nonatomic,copy) id unitTesting_didCallHandleStaleResourcesOperation;                                    //@synthesize unitTesting_didCallHandleStaleResourcesOperation=_unitTesting_didCallHandleStaleResourcesOperation - In the implementation block
@property (nonatomic,readonly) HDHealthRecordsProfileExtension * profileExtension; 
@property (nonatomic,readonly) HDProfile * profile; 
@property (nonatomic,readonly) HDHealthRecordsXPCServiceClient * healthRecordsServiceClient;                       //@synthesize healthRecordsServiceClient=_healthRecordsServiceClient - In the implementation block
@property (nonatomic,readonly) HDClinicalIngestionAnalyticsAccumulator * currentAnalyticsAccumulator;              //@synthesize currentAnalyticsAccumulator=_currentAnalyticsAccumulator - In the implementation block
@property (nonatomic,copy,readonly) NSString * taskIdentifier;                                                     //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (nonatomic,copy,readonly) HDClinicalIngestionTaskContext * context;                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) id completion;                                                                 //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id willBeginFetchingAndExtracting;                                                      //@synthesize willBeginFetchingAndExtracting=_willBeginFetchingAndExtracting - In the implementation block
@property (nonatomic,copy) id didFinishFetchingAndExtracting;                                                      //@synthesize didFinishFetchingAndExtracting=_didFinishFetchingAndExtracting - In the implementation block
@property (nonatomic,readonly) double taskRunTime;                                                                 //@synthesize taskRunTime=_taskRunTime - In the implementation block
@property (nonatomic,copy,readonly) NSError * ingestionError; 
@property (nonatomic,copy,readonly) NSString * analyticsString;                                                    //@synthesize analyticsString=_analyticsString - In the implementation block
+(BOOL)_isValidNextPageQueryURL:(id)arg1 withBaseURL:(id)arg2 ;
+(BOOL)_accumulatedErrorAllowsToProceedRunningStaleResourcesOperation:(id)arg1 ;
-(id)init;
-(id)description;
-(void)main;
-(HDClinicalIngestionTaskContext *)context;
-(NSString *)taskIdentifier;
-(id)completion;
-(HDProfile *)profile;
-(void)_cancelWithError:(id)arg1 ;
-(void)_didStart;
-(NSString *)analyticsString;
-(HDHealthRecordsProfileExtension *)profileExtension;
-(id)initWithContext:(id)arg1 extension:(id)arg2 accountIdentifiers:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setWillBeginFetchingAndExtracting:(id)arg1 ;
-(void)setDidFinishFetchingAndExtracting:(id)arg1 ;
-(double)taskRunTime;
-(BOOL)hasNewRecords;
-(NSError *)ingestionError;
-(void)accumulateIngestionAnalyticsMetric:(id)arg1 gatewayCountryCode:(id)arg2 ;
-(BOOL)_ingestionAllowed;
-(BOOL)_prepareAccounts:(id*)arg1 userFetchEligibleAccounts:(id*)arg2 withError:(id*)arg3 ;
-(void)_prepareUpdateGatewaysOperationsForAccounts:(id)arg1 ;
-(void)_notifyIfWorkMayBeDoneForAccounts:(id)arg1 ;
-(void)_performFileImportWithAccount:(id)arg1 ;
-(void)_performFetchWithAccount:(id)arg1 batchingSemaphore:(id)arg2 ;
-(void)_performExtractionWithAccount:(id)arg1 ;
-(void)_collectCurrentIngestionAnalytics;
-(void)_didFinishWithStartTimeInternal:(double)arg1 ;
-(BOOL)_verifyGatewaysForAccount:(id)arg1 error:(id*)arg2 ;
-(void)_markHadError:(id)arg1 ;
-(id)_fetchableAccountForAccount:(id)arg1 error:(id*)arg2 ;
-(BOOL)_performResourceFetchWithAccount:(id)arg1 batchingSemaphore:(id)arg2 error:(id*)arg3 ;
-(id)_resourceFetchOperationWithSession:(id)arg1 schema:(id)arg2 account:(id)arg3 queryMode:(long long)arg4 resourceURL:(id)arg5 ;
-(id)_dataFromResourceFetchOperation:(id)arg1 account:(id)arg2 FHIRVersion:(id)arg3 ;
-(unsigned long long)_saveResourcesObjects:(id)arg1 forAccount:(id)arg2 ;
-(BOOL)_handleStaleResourcesOfAccount:(id)arg1 ingestStartDate:(id)arg2 ingestQueryMode:(long long)arg3 error:(id*)arg4 ;
-(NSDictionary *)updateGatewayOperationsByAccountIdentifier;
-(id)_gatewaysOperationForAccount:(id)arg1 ;
-(HDClinicalIngestionAnalyticsAccumulator *)currentAnalyticsAccumulator;
-(id)willBeginFetchingAndExtracting;
-(id)didFinishFetchingAndExtracting;
-(void)setHasNewRecords:(BOOL)arg1 ;
-(id)unitTesting_didCallHandleStaleResourcesOperation;
-(void)setUnitTesting_didCallHandleStaleResourcesOperation:(id)arg1 ;
-(HDHealthRecordsXPCServiceClient *)healthRecordsServiceClient;
@end

