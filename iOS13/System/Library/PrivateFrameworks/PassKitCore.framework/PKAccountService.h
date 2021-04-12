/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKAccountServiceExportedInterface.h>

@protocol OS_dispatch_queue;
@class PKXPCService, NSObject, NSLock, NSHashTable;

@interface PKAccountService : NSObject <PKAccountServiceExportedInterface> {

	PKXPCService* _remoteService;
	NSObject*<OS_dispatch_queue> _replyQueue;
	NSLock* _lockObservers;
	NSHashTable* _observers;
	long long _accountChangedNotificationSuspensionCount;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)accountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountAdded:(id)arg1 ;
-(void)accountRemoved:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)updateAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountsForProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)updateAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)updateAccountWithIdentifier:(id)arg1 extended:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)insertEvents:(id)arg1 withAccountidentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateScheduledPaymentsWithAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateMockAccountWithAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)noteAccountDeleted;
-(void)deleteEventWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)defaultAccountForFeature:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_accessObserversWithHandler:(/*^block*/id)arg1 ;
-(void)noteVirtualCardAutoFilledBySafari:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountsWithCompletion:(/*^block*/id)arg1 ;
-(void)accountsWithPassLocallyProvisionedWithCompletion:(/*^block*/id)arg1 ;
-(void)accountWithVirtualCardIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountForPassWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteLocalAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performAccountAction:(id)arg1 withAccountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)termsWithIdentifier:(id)arg1 accepted:(BOOL)arg2 withAccountIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)updatePreferences:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)preferencesForAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)userInfoForAccountIdentifier:(id)arg1 forceFetch:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateUserInfoForAccountIdentifier:(id)arg1 contact:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginPhysicalCardRequestWithOrder:(id)arg1 forAccountWithIdentifier:(id)arg2 deviceMetadata:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)completePhysicalCardRequest:(id)arg1 withSignature:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginPhysicalCardAction:(id)arg1 onPhysicalCardWithIdentifier:(id)arg2 forAccountWithIdentifier:(id)arg3 deviceMetadata:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)completePhysicalCardActionRequest:(id)arg1 withSignature:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)scheduleSetupReminderForAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)eventsForAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)eventsForAccountIdentifier:(id)arg1 types:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 orderedByDate:(long long)arg5 limit:(unsigned long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)deleteEventsWithAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteEventsWithAccountIdentifier:(id)arg1 excludingTypes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)lastRedemptionEventToPeerPaymentForAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)creditStatementsForAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createVirtualCard:(long long)arg1 forAccountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)performVirtualCardAction:(long long)arg1 forVirtualCardIdentifier:(id)arg2 forAccountIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateVirtualCardsWithAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cardCredentialsForVirtualCard:(id)arg1 authorization:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchKeychainCredentialForVirtualCardIdentifier:(id)arg1 forAccountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)virtualCardsInKeychainWithCompletion:(/*^block*/id)arg1 ;
-(void)writeVirtualCardToKeychain:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(id)arg1 withStatementIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)scheduledPaymentsWithAccountIdentifier:(id)arg1 includeFailedRecurringPayments:(BOOL)arg2 allowFetchFromServer:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)exportTransactionDataForAccountIdentifier:(id)arg1 withFileFormat:(id)arg2 beginDate:(id)arg3 endDate:(id)arg4 productTimeZone:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)accountChanged:(id)arg1 ;
-(void)statementsChangedForAccountIdentifier:(id)arg1 ;
-(void)scheduledPaymentsChangedForAccountIdentifier:(id)arg1 ;
-(void)_accountsChanged:(id)arg1 ;
-(/*^block*/id)errorHandlerForMethod:(SEL)arg1 completion:(/*^block*/id)arg2 ;
-(void)activateBroadwayPhysicalCardWithActivationCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)inactivePhysicalCardForFeatureIdentifier:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)activatePhysicalCard:(id)arg1 withActivationCode:(id)arg2 forFeatureIdentifier:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)scheduledPaymentsWithAccountIdentifier:(id)arg1 includeFailedRecurringPayments:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)markUserViewedIntroduction:(BOOL)arg1 forInstallmentIdentifiers:(id)arg2 accountIdentifier:(id)arg3 ;
@end

