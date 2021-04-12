/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKPeerPaymentServiceExportedInterface.h>
#import <libobjc.A.dylib/PKPeerPaymentTargetDeviceDelegate.h>

@protocol OS_dispatch_queue;
@class PKXPCService, PKPeerPaymentAccount, PKPeerPaymentPreferences, NSObject, NSHashTable, PKPeerPaymentWebServiceContext;

@interface PKPeerPaymentService : NSObject <PKPeerPaymentServiceExportedInterface, PKPeerPaymentTargetDeviceDelegate> {

	PKXPCService* _remoteService;
	PKPeerPaymentAccount* _account;
	PKPeerPaymentPreferences* _preferences;
	NSObject*<OS_dispatch_queue> _replyQueue;
	os_unfair_lock_s _accountLock;
	os_unfair_lock_s _lockObservers;
	NSHashTable* _observers;
	long long _accountChangedNotificationSuspensionCount;

}

@property (nonatomic,retain) PKPeerPaymentWebServiceContext * sharedPeerPaymentWebServiceContext; 
@property (nonatomic,readonly) PKPeerPaymentAccount * account; 
@property (nonatomic,readonly) PKPeerPaymentPreferences * preferences; 
+(id)sharedInstance;
-(void)unregisterObserver:(id)arg1 ;
-(PKPeerPaymentAccount *)account;
-(void)registerObserver:(id)arg1 ;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(void)_accountChanged:(id)arg1 ;
-(id)init;
-(PKPeerPaymentPreferences *)preferences;
-(void)setSharedPeerPaymentWebServiceContext:(PKPeerPaymentWebServiceContext *)arg1 ;
-(void)registerDeviceWithCompletion:(/*^block*/id)arg1 ;
-(PKPeerPaymentWebServiceContext *)sharedPeerPaymentWebServiceContext;
-(void)sharedPeerPaymentWebServiceContextWithCompletion:(/*^block*/id)arg1 ;
-(void)cloudStoreStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1 ;
-(void)noteAccountDeleted;
-(void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(id)arg1 ;
-(void)presentIdentityVerificationFlowWithResponse:(id)arg1 orientation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentPeerPaymentTermsAndConditionsWithAccount:(id)arg1 orientation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)downloadPassIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)unregisterDeviceWithCompletion:(/*^block*/id)arg1 ;
-(id)lastUsedAlternateFundingSourcePassUniqueIdentifier;
-(void)accountWithCompletion:(/*^block*/id)arg1 ;
-(void)updateAssociatedAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)updateAccountAndAssociatedAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)preferencesWithCompletion:(/*^block*/id)arg1 ;
-(void)updatePreferencesWithCompletion:(/*^block*/id)arg1 ;
-(void)deletePreferencesWithCompletion:(/*^block*/id)arg1 ;
-(void)registerDeviceWithForceReregister:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)registrationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 forceReregister:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentRegistrationFlowWithAccount:(id)arg1 amount:(id)arg2 state:(unsigned long long)arg3 senderAddress:(id)arg4 orientation:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)balanceForPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)initalizeCloudStoreIfNecessaryWithHandler:(/*^block*/id)arg1 ;
-(void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteRegistrationRequest:(id)arg1 forHandle:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didReceiveAppleCashSharingRecipientCapabilities:(id)arg1 forHandle:(id)arg2 ;
-(void)suspendAccountChangedNotifications;
-(void)receivedPeerPaymentMessageData:(id)arg1 ;
-(void)setPreferences:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_preferencesChanged:(id)arg1 ;
-(id)_synchronousRemoteObjectProxyForSelector:(SEL)arg1 ;
-(void)_postAccountChangeNotificationIfNecessaryForAccount:(id)arg1 previousAccount:(id)arg2 ;
-(void)resumeAccountChangedNotifications;
-(void)presentRegistrationFlowWithAccount:(id)arg1 orientation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateMessageReceivedDate:(id)arg1 forTransactionWithIdentifier:(id)arg2 ;
-(void)_sharedPeerPaymentWebServiceContextWithCompletion:(/*^block*/id)arg1 ;
-(void)_accessObserversWithHandler:(/*^block*/id)arg1 ;
-(void)updateAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)sendAppleCashCapabilitiesRequestForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

