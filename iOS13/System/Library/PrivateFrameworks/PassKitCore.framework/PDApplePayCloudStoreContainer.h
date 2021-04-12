/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PDCloudStoreContainer.h>
#import <libobjc.A.dylib/PDAccountManagerObserver.h>
#import <libobjc.A.dylib/PDCloudStoreZoneManagerDataSource.h>

@class NSMutableSet, PKPaymentTransactionProcessor, PDPaymentWebServiceCoordinator, PDAccountManager, PKPeerPaymentAccount, NSSet, NSString;

@interface PDApplePayCloudStoreContainer : PDCloudStoreContainer <PDAccountManagerObserver, PDCloudStoreZoneManagerDataSource> {

	os_unfair_lock_s _fetchLock;
	BOOL _proactiveFetchInProgress;
	NSMutableSet* _fetchingTransactionsForUniqueIDs;
	PKPaymentTransactionProcessor* _transactionProcessor;
	PDPaymentWebServiceCoordinator* _paymentWebServiceCoordinator;
	PDAccountManager* _accountManager;
	PKPeerPaymentAccount* _peerPaymentAccount;
	NSSet* _accounts;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)containerName;
-(void)_handlePeerPaymentAccountChanged:(id)arg1 ;
-(BOOL)canInvalidateContainer;
-(long long)_numberOfActivePasses;
-(id)_strippedRecordName:(id)arg1 ;
-(id)allRecordNamesAssociatedWithRecordName:(id)arg1 itemType:(unsigned long long)arg2 inZone:(id)arg3 ;
-(id)_cloudStoreSpecificKeysForItem:(id)arg1 paymentPass:(id)arg2 ;
-(void)setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)canSyncTransactionToCloudKit:(id)arg1 passUniqueIdentifier:(id)arg2 ;
-(id)cloudStoreSpecificKeysForItem:(id)arg1 ;
-(void)processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 operationGroupNameSuffix:(id)arg3 retryCount:(unsigned long long)arg4 shouldRetry:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_isTransactionItemFromRecordType:(id)arg1 ;
-(BOOL)_isAccountEventFromRecordType:(id)arg1 ;
-(void)deleteLocalDataFromDeletedRecords:(id)arg1 ;
-(id)_parseTransactionRecords:(id)arg1 request:(id)arg2 updateReasons:(unsigned long long)arg3 ;
-(void)_fetchMissingTransactionRecordsWithRecordParser:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_serviceIdentifierForRecord:(id)arg1 ;
-(id)_accountEventRecordsFromArray:(id)arg1 ;
-(void)_fetchAndParseAccountEventRecordsForRecords:(id)arg1 request:(id)arg2 updateReasons:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_shouldFetchTransactionsForPassUniqueIdentifier:(id)arg1 ;
-(void)_fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 groupName:(id)arg2 groupNameSuffix:(id)arg3 returnRecords:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)_cloudStoreZonesForPassUniqueID:(id)arg1 ;
-(void)_fetchTransactionsFailedForPassUniqueIdentifier:(id)arg1 ;
-(void)_resetFetchTransactionsForPassUniqueIdentifier:(id)arg1 ;
-(void)canOverrideChangeTokenForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isRelevantPassUnqiueID:(id)arg1 ;
-(void)syncOriginatingTransactionsToCloudStore;
-(void)uploadTransaction:(id)arg1 forPassWithUniqueIdentifier:(id)arg2 includeServerData:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)cloudStoreZonesForCloudStoreItem:(id)arg1 ;
-(id)_recordsFromAccountEvent:(id)arg1 zone:(id)arg2 ;
-(void)_processPeerPaymentAccountChangeWithOldAccount:(id)arg1 newPeerPaymentAccount:(id)arg2 ;
-(void)_processAccountChangeWithOldAccounts:(id)arg1 newAccounts:(id)arg2 ;
-(BOOL)canSyncTransactionFromCloudKitForPassUniqueIdentifier:(id)arg1 ;
-(void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_peerPaymentZoneNamesForAccount:(id)arg1 ;
-(id)_accountZoneNamesForAccountSet:(id)arg1 ;
-(id)allPossibleZoneNames;
-(id)subscriptionIdentifierForZoneName:(id)arg1 ;
-(id)_accountZoneNamesForAccount:(id)arg1 ;
-(id)cloudStoreZonesForCloudStoreItemType:(unsigned long long)arg1 recordName:(id)arg2 ;
-(void)_updateWithPossibleNewZonesToAdd:(id)arg1 orphanedZones:(id)arg2 ;
-(void)invalidateCloudStoreIfPossibleWithOperationGroupNameSuffix:(id)arg1 clearCache:(BOOL)arg2 ;
-(id)_passUnqiueIdentifierForRecord:(id)arg1 ;
-(id)_originDeviceID;
-(id)_serviceIdentifierForRecordType:(id)arg1 recordID:(id)arg2 ;
-(BOOL)_canFormTransactionFromCloudStoreRecord:(id)arg1 ;
-(id)_passUniqueIdentifierForTransactionCloudStoreRecord:(id)arg1 ;
-(id)_originDeviceIDForCloudStoreRecord:(id)arg1 ;
-(id)_paymentApplicationForPassUniqueIdentifier:(id)arg1 ;
-(BOOL)_isAccountEventAssociatedObjectFromRecordType:(id)arg1 ;
-(id)_transactionFetchRetries;
-(void)_saveTransactionFetchRetries:(id)arg1 ;
-(id)_recordTypeForAssociatedRecordForAccountEvent:(id)arg1 ;
-(void)_parseAccountEventsFromRecords:(id)arg1 shouldUpdateLocalDatabase:(BOOL)arg2 updateReasons:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)accountManager:(id)arg1 didAddAccount:(id)arg2 ;
-(void)accountManager:(id)arg1 didRemoveAccount:(id)arg2 ;
-(void)accountManager:(id)arg1 didUpdateAccount:(id)arg2 oldAccount:(id)arg3 ;
-(id)zoneNameForSubscriptionIdentifier:(id)arg1 ;
-(id)allPossibleSubscriptionIdentifiers;
-(id)cloudStoreZonesForCloudStoreItemType:(unsigned long long)arg1 ;
-(id)initWithDataSource:(id)arg1 transactionProcessor:(id)arg2 accountManager:(id)arg3 paymentWebServiceCoordinator:(id)arg4 ;
-(void)shouldFetchAndStoreCloudDataAtStartupWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canInitializeContainer;
-(void)cloudStoreAccountChanged:(id)arg1 ;
-(BOOL)canCoalesceRequest:(id)arg1 withNewRequest:(id)arg2 ;
-(void)coalesceRequest:(id)arg1 withNewRequest:(id)arg2 ;
-(BOOL)shouldContinueWithRequest:(id)arg1 ;
-(void)processFetchedCloudStoreDataWithModifiedRecords:(id)arg1 deletedRecords:(id)arg2 request:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)requestUpdatesForPassUniqueIdentifier:(id)arg1 ;
-(void)passDidDisappear:(id)arg1 ;
-(void)generateRandomTransactionForPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)populateEvents:(id)arg1 forAccountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)copyDataFromZoneName:(id)arg1 toZoneName:(id)arg2 passUniqueID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_recordTypesForAccountEvents;
@end

