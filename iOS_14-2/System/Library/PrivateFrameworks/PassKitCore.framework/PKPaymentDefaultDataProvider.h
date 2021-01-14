/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/PKPaymentDataProvider.h>

@protocol OS_dispatch_queue, PKPaymentDataProviderDelegate;
@class NSString, PKOSVersionRequirement, PKPaymentWebService, PKPaymentService, PKSecureElement, NSHashTable, NSObject;

@interface PKPaymentDefaultDataProvider : NSObject <PKPaymentServiceDelegate, PKPaymentDataProvider> {

	PKPaymentService* _paymentService;
	PKSecureElement* _secureElement;
	NSHashTable* _delegates;
	os_unfair_lock_s _delegateLock;
	NSObject*<OS_dispatch_queue> _replyQueue;
	id<PKPaymentDataProviderDelegate> _delegate;
	PKPaymentWebService* _paymentWebService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isDeviceInRestrictedMode; 
@property (nonatomic,readonly) NSString * secureElementIdentifier; 
@property (nonatomic,readonly) BOOL secureElementIsProductionSigned; 
@property (nonatomic,retain) NSString * defaultPaymentPassIdentifier; 
@property (nonatomic,readonly) BOOL isPaymentHandoffDisabled; 
@property (assign,nonatomic,__weak) id<PKPaymentDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * deviceClass; 
@property (nonatomic,readonly) PKOSVersionRequirement * deviceVersion; 
@property (nonatomic,readonly) PKPaymentWebService * paymentWebService;                      //@synthesize paymentWebService=_paymentWebService - In the implementation block
-(PKOSVersionRequirement *)deviceVersion;
-(NSString *)deviceName;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)cashbackByPeriodForTransactionSourceIdentifiers:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 calendar:(id)arg4 calendarUnit:(unsigned long long)arg5 type:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)transactionCountByPeriodForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 calendar:(id)arg4 calendarUnit:(unsigned long long)arg5 includePurchaseTotal:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(void)_accessDelegatesWithHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)installmentTransactionsForInstallmentPlanIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<PKPaymentDataProviderDelegate>)delegate;
-(void)installmentPlanTransactionsForTransactionSourceIdentifiers:(id)arg1 accountIdentifier:(id)arg2 withRedemptionType:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg1 withPeerPaymentCounterpartHandles:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)transactionReceiptWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)deviceClass;
-(NSString *)secureElementIdentifier;
-(id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)balanceReminderThresholdForBalance:(id)arg1 pass:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPaymentHandoffDisabled:(BOOL)arg1 ;
-(BOOL)isDeviceInRestrictedMode;
-(BOOL)secureElementIsProductionSigned;
-(BOOL)isPaymentHandoffDisabled;
-(BOOL)supportsTransactionsForPass:(id)arg1 ;
-(BOOL)supportsAddingPaymentPasses;
-(BOOL)supportsMessagesForPass:(id)arg1 ;
-(long long)apiVersion;
-(BOOL)supportsLowPowerExpressMode;
-(void)transactionWithServiceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)supportsNotificationsForPass:(id)arg1 ;
-(BOOL)supportsInAppPaymentsForPass:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)passUpgradeWithRequest:(id)arg1 pass:(id)arg2 visibleViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)commutePlanReminderForCommutePlan:(id)arg1 pass:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 orderedByDate:(long long)arg6 limit:(long long)arg7 completion:(/*^block*/id)arg8 ;
-(id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 ;
-(void)setDelegate:(id<PKPaymentDataProviderDelegate>)arg1 ;
-(void)balancesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeExpressPassesWithCardType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg1 withMerchantCategory:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(/*^block*/id)arg8 ;
-(id)expressPassesInformationWithCardType:(long long)arg1 ;
-(void)credentialWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)hasTransactionsForTransactionSourceIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCredential:(id)arg2 ;
-(void)setCommutePlanReminder:(id)arg1 forCommutePlan:(id)arg2 pass:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)familyMembersWithCompletion:(/*^block*/id)arg1 ;
-(void)approvedTransactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg1 matchingMerchant:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2 ;
-(void)transactionWithIdentifier:(id)arg1 didDownloadTransactionReceipt:(id)arg2 ;
-(void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)pendingTransactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2 ;
-(void)submitTransactionAnswerForTransaction:(id)arg1 questionType:(unsigned long long)arg2 answer:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)transactionWithReferenceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPaymentService:(id)arg1 secureElement:(id)arg2 ;
-(void)transactionsRequiringReviewForAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDefaultPaymentPassIdentifier:(NSString *)arg1 ;
-(NSString *)defaultPaymentPassIdentifier;
-(void)transactionWithServiceIdentifier:(id)arg1 transactionSourceIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)photosForFamilyMembersWithDSIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)archiveMessageWithIdentifier:(id)arg1 ;
-(void)transactionsForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1 ;
-(void)messagesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(PKPaymentWebService *)paymentWebService;
-(BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
-(void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deletePaymentTransactionWithIdentifier:(id)arg1 ;
-(void)mapsMerchantsWithCompletion:(/*^block*/id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateBalanceReminder:(id)arg2 forBalanceWithIdentifier:(id)arg3 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionType:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(/*^block*/id)arg8 ;
-(id)expressPassesInformation;
-(void)setBalanceReminder:(id)arg1 forBalance:(id)arg2 pass:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)transactionReceiptForTransactionWithIdentifier:(id)arg1 updateIfNecessary:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)installmentPlansWithTransactionReferenceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

