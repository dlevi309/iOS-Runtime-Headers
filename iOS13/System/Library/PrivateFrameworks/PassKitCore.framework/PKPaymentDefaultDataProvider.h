/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/PKPaymentDataProvider.h>

@protocol OS_dispatch_queue, PKPaymentDataProviderDelegate;
@class NSString, PKOSVersionRequirement, PKPaymentWebService, PKPaymentService, PKSecureElement, NSHashTable, NSLock, NSObject;

@interface PKPaymentDefaultDataProvider : NSObject <PKPaymentServiceDelegate, PKPaymentDataProvider> {

	PKPaymentService* _paymentService;
	PKSecureElement* _secureElement;
	NSHashTable* _delegates;
	NSLock* _delegateLock;
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
-(id)init;
-(void)dealloc;
-(id<PKPaymentDataProviderDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentDataProviderDelegate>)arg1 ;
-(NSString *)deviceName;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSString *)deviceClass;
-(long long)apiVersion;
-(PKOSVersionRequirement *)deviceVersion;
-(void)setDefaultPaymentPassIdentifier:(NSString *)arg1 ;
-(NSString *)defaultPaymentPassIdentifier;
-(BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1 ;
-(NSString *)secureElementIdentifier;
-(id)initWithPaymentService:(id)arg1 secureElement:(id)arg2 ;
-(void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(PKPaymentWebService *)paymentWebService;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCredential:(id)arg2 ;
-(void)transactionWithIdentifier:(id)arg1 didDownloadTransactionReceipt:(id)arg2 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)cashbackByPeriodFromPassUniqueIdentifier:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 calendar:(id)arg4 calendarUnit:(unsigned long long)arg5 type:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withMapsIdentifier:(unsigned long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 matchingMerchant:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)transactionsForPaymentPassWithuniqueIdentifier:(id)arg1 withMerchantCategory:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(/*^block*/id)arg8 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionType:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(/*^block*/id)arg8 ;
-(void)transactionWithServiceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transactionWithReferenceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)installmentTransactionsForInstallmentPlanIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)installmentPlansWithTransactionReferenceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)installmentPlanTransactionsForPassUniqueIdentifier:(id)arg1 accountIdentifier:(id)arg2 withRedemptionType:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)mapsMerchantsWithCompletion:(/*^block*/id)arg1 ;
-(id)expressPassesInformationWithCardType:(long long)arg1 ;
-(void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeExpressPassesWithCardType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)submitTransactionAnswerForTransaction:(id)arg1 questionType:(unsigned long long)arg2 answer:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)transactionsRequiringReviewForAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)credentialWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transactionReceiptWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transactionReceiptForTransactionWithIdentifier:(id)arg1 updateIfNecessary:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 ;
-(id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 orderedByDate:(long long)arg6 limit:(long long)arg7 completion:(/*^block*/id)arg8 ;
-(void)messagesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)balancesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)balanceReminderThresholdForBalance:(id)arg1 pass:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setBalanceReminder:(id)arg1 forBalance:(id)arg2 pass:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setCommutePlanReminder:(id)arg1 forCommutePlan:(id)arg2 pass:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deletePaymentTransactionWithIdentifier:(id)arg1 forPassWithUniqueIdentifier:(id)arg2 ;
-(void)archiveMessageWithIdentifier:(id)arg1 ;
-(void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1 ;
-(id)expressPassesInformation;
-(void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_accessDelegatesWithHandler:(/*^block*/id)arg1 ;
-(void)setPaymentHandoffDisabled:(BOOL)arg1 ;
-(BOOL)isDeviceInRestrictedMode;
-(BOOL)secureElementIsProductionSigned;
-(BOOL)isPaymentHandoffDisabled;
-(void)passUpgradeWithRequest:(id)arg1 pass:(id)arg2 visibleViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)approvedTransactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)pendingTransactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)transactionCountByPeriodForPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 calendar:(id)arg4 calendarUnit:(unsigned long long)arg5 includePurchaseTotal:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(void)commutePlanReminderForCommutePlan:(id)arg1 pass:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)supportsTransactionsForPass:(id)arg1 ;
-(BOOL)supportsMessagesForPass:(id)arg1 ;
-(BOOL)supportsNotificationsForPass:(id)arg1 ;
-(BOOL)supportsInAppPaymentsForPass:(id)arg1 ;
-(BOOL)supportsLowPowerExpressMode;
@end

