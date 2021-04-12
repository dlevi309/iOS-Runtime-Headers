/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDHealthRecordsPluginServerInterface.h>
#import <libobjc.A.dylib/HDClinicalIngestionStateChangeObserver.h>
#import <libobjc.A.dylib/HDClinicalAccountStateObserver.h>
#import <libobjc.A.dylib/HDHealthRecordsSupportedChangeObserver.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol OS_dispatch_queue;
@class HDProfile, HDHealthRecordsProfileExtension, HDXPCClient, NSObject, NSString;

@interface HDHealthRecordsPluginServer : NSObject <HDDiagnosticObject, HDHealthRecordsPluginServerInterface, HDClinicalIngestionStateChangeObserver, HDClinicalAccountStateObserver, HDHealthRecordsSupportedChangeObserver, _HKXPCExportable> {

	HDProfile* _profile;
	HDHealthRecordsProfileExtension* _profileExtension;
	HDXPCClient* _client;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverWithClient:(id)arg1 extension:(id)arg2 error:(id*)arg3 ;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(void)connectionConfigured;
-(void)remote_fetchAllAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchAccountsForGatewaysWithExternalIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_fetchAccountForSource:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_fetchAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_deleteAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_invalidateCredentialForAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_hasHealthRecordsAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_beginInitialLoginSessionForGatewayWithExternalID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_beginReloginSessionForAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_endLoginSessionWithState:(id)arg1 code:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_pruneAuthenticationDataWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_replaceAccountWithNewAccountForAccountWithIdentifier:(id)arg1 usingCredentialWithPersistentID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_ingestHealthRecordsWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_ingestHealthRecordsWithFHIRDocumentHandle:(id)arg1 accountIdentifier:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)remote_resetHealthRecordsLastExtractedRowIDWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_getHealthRecordsIngestionFrequencyWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_setHealthRecordsIngestionFrequency:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_fetchRawSourceStringForHealthRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_fetchExportedPropertiesForHealthRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_fetchFHIRJSONDocumentWithAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_stringifyExtractionFailureReasonsForRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_triggerClinicalOptInDataCollectionForReason:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_resetClinicalOptInDataCollectionAnchorsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchClinicalOptInDataCollectionFilePathsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_triggerClinicalContentAnalyticsForReason:(long long)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_triggerHealthCloudUploadWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_resetClinicalContentAnalyticsAnchorsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchRemoteSearchResultsPageForQuery:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 from:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)remote_cancelInFlightSearchQueriesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchRemoteProviderWithExternalID:(id)arg1 batchID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_fetchRemoteGatewayWithExternalID:(id)arg1 batchID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_fetchLogoDataForBrand:(id)arg1 scaleKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_fetchLogoDataForFeaturedBrandsAtScaleKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_ingestionStateWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_createStaticAccountWithTitle:(id)arg1 subtitle:(id)arg2 description:(id)arg3 countryCode:(id)arg4 onlyIfNeededForSimulatedGatewayID:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)remote_badgeForNewHealthRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_notifyForNewHealthRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_registerAppSourceForClinicalUnlimitedAuthorizationModeConfirmation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_deregisterAppSourceFromClinicalUnlimitedAuthorizationModeConfirmation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)diagnosticDescription;
-(id)initWithClient:(id)arg1 extension:(id)arg2 ;
-(id)_clientAccountsFromAccounts:(id)arg1 ;
-(void)registerForAccountStateChanges;
-(void)registerForHealthRecordsSupportedStateChanges;
-(void)registerForIngestionStateChanges;
-(void)clinicalIngestionManager:(id)arg1 willChangeIngestionState:(long long)arg2 ;
-(void)accountManager:(id)arg1 account:(id)arg2 didChangeState:(long long)arg3 ;
-(void)profileExtension:(id)arg1 healthRecordsSupported:(BOOL)arg2 ;
@end

