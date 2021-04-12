/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                                             //@synthesize profile=_profile - In the implementation block
@property (nonatomic,__weak,readonly) HDHealthRecordsProfileExtension * profileExtension;              //@synthesize profileExtension=_profileExtension - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                                      //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,copy) NSString * currentSearchSessionID;                                          //@synthesize currentSearchSessionID=_currentSearchSessionID - In the implementation block
@property (nonatomic,copy) NSDate * currentSearchSessionIDMaxLifetime;                                 //@synthesize currentSearchSessionIDMaxLifetime=_currentSearchSessionIDMaxLifetime - In the implementation block
-(id)init;
-(NSOperationQueue *)operationQueue;
-(HDProfile *)profile;
-(void)fetchRemoteSearchResultsPageForQuery:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 from:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)cancelInFlightSearchQueriesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchRemoteProviderWithExternalID:(id)arg1 batchID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchRemoteGatewayWithExternalID:(id)arg1 batchID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchLogoDataForBrand:(id)arg1 scaleKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchLogoDataForFeaturedBrandsAtScaleKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HDHealthRecordsProfileExtension *)profileExtension;
-(id)_createURLForSearchQuery:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 from:(long long)arg4 error:(id*)arg5 ;
-(id)_searchResultsPageWithOnlySupportedSearchResultsInSearchResultsPage:(id)arg1 ;
-(id)_allSupportedCountryCodes;
-(void)_createSessionIDIfNeeded;
-(BOOL)_insertOrUpdateGatewayIfSupported:(id)arg1 error:(id*)arg2 ;
-(void)_fetchRemoteGatewayWithExternalID:(id)arg1 batchID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_supportedGatewaysFromFetchedJSONObject:(id)arg1 externalIDs:(id)arg2 error:(id*)arg3 ;
-(BOOL)_isCountryCodeSupported:(id)arg1 ;
-(void)setCurrentSearchSessionID:(NSString *)arg1 ;
-(void)setCurrentSearchSessionIDMaxLifetime:(NSDate *)arg1 ;
-(id)initWithProfileExtension:(id)arg1 ;
-(void)fetchRemoteGatewayWithExternalID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)remoteGatewaysWithBatchID:(id)arg1 externalIDs:(id)arg2 error:(id*)arg3 ;
-(id)createUpdateGatewaysOperationsForAccounts:(id)arg1 ;
-(void)addOperationUnlessAlreadyEnqueued:(id)arg1 ;
-(void)unitTesting_markSessionIDExpired;
-(NSString *)currentSearchSessionID;
-(NSDate *)currentSearchSessionIDMaxLifetime;
@end

