/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
@class NSOperationQueue, NSURLSession, HDProfile, HDHealthRecordsProfileExtension, NSString, NSDate;

@interface HDClinicalProviderServiceManager : NSObject {

	NSOperationQueue* _taskScheduleQueue;
	NSOperationQueue* _searchQueue;
	NSURLSession* _URLSession;
	os_unfair_lock_s _addOperationLock;
	HDProfile* _profile;
	HDHealthRecordsProfileExtension* _profileExtension;
	NSOperationQueue* _operationQueue;
	NSString* _currentSearchSessionID;
	NSDate* _currentSearchSessionIDMaxLifetime;
	/*^block*/id _unitTesting_didAddOperationToTaskScheduleQueue;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                                             //@synthesize profile=_profile - In the implementation block
@property (nonatomic,__weak,readonly) HDHealthRecordsProfileExtension * profileExtension;              //@synthesize profileExtension=_profileExtension - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                                      //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentSearchSessionID;                                 //@synthesize currentSearchSessionID=_currentSearchSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * currentSearchSessionIDMaxLifetime;                        //@synthesize currentSearchSessionIDMaxLifetime=_currentSearchSessionIDMaxLifetime - In the implementation block
@property (nonatomic,copy) id unitTesting_didAddOperationToTaskScheduleQueue;                          //@synthesize unitTesting_didAddOperationToTaskScheduleQueue=_unitTesting_didAddOperationToTaskScheduleQueue - In the implementation block
-(void)fetchRemoteGatewayWithExternalID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSOperationQueue *)operationQueue;
-(id)remoteGatewaysWithBatchID:(id)arg1 externalIDs:(id)arg2 error:(id*)arg3 ;
-(BOOL)_insertOrUpdateGatewayIfSupported:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)_fetchRemoteGatewayWithExternalID:(id)arg1 batchID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(HDHealthRecordsProfileExtension *)profileExtension;
-(void)fetchRemoteProviderWithExternalID:(id)arg1 batchID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchRemoteSearchResultsPageForQuery:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 from:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(id)_searchResultsPageWithOnlySupportedSearchResultsInSearchResultsPage:(id)arg1 ;
-(id)createUpdateGatewaysOperationsForAccounts:(id)arg1 ;
-(id)unitTesting_didAddOperationToTaskScheduleQueue;
-(void)_createSessionIDIfNeeded;
-(void)fetchLogoDataForFeaturedBrandsAtScaleKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelInFlightSearchQueriesWithCompletion:(/*^block*/id)arg1 ;
-(void)unitTesting_markSessionIDExpired;
-(HDProfile *)profile;
-(id)initWithProfileExtension:(id)arg1 ;
-(void)addOperationUnlessAlreadyEnqueued:(id)arg1 ;
-(id)_allSupportedCountryCodes;
-(void)fetchRemoteGatewayWithExternalID:(id)arg1 batchID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isCountryCodeSupported:(id)arg1 ;
-(id)_createURLForSearchQuery:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 from:(long long)arg4 error:(id*)arg5 ;
-(void)_addOperationWithBlock:(/*^block*/id)arg1 ;
-(NSString *)currentSearchSessionID;
-(NSDate *)currentSearchSessionIDMaxLifetime;
-(void)setUnitTesting_didAddOperationToTaskScheduleQueue:(id)arg1 ;
-(id)_supportedGatewaysFromFetchedJSONObject:(id)arg1 externalIDs:(id)arg2 error:(id*)arg3 ;
-(void)fetchLogoDataForBrand:(id)arg1 scaleKey:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

