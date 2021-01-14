/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol NPKPaymentWebServiceCompanionTargetDeviceDelegate <NSObject>
@required
-(void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;
-(void)noteForegroundVerificationObserverActive:(BOOL)arg1;
-(void)setNewAuthRandom:(/*^block*/id)arg1;
-(void)handlePreconditionNotMetWithUniqueIDs:(id)arg1 preconditionDescription:(id)arg2 shouldUnregister:(BOOL)arg3;
-(void)handlePushToken:(id)arg1;
-(void)handleUpdatePaymentPassWithTypeIdentifier:(id)arg1;
-(void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2;
-(void)handlePaymentTransactions:(id)arg1 appletStates:(id)arg2 forUniqueIDs:(id)arg3;
-(void)handleAppletState:(id)arg1 forUniqueID:(id)arg2;
-(void)handleRemoveTransactionsWithIdentifiers:(id)arg1;
-(void)handleBalanceUpdate:(id)arg1 forUniqueID:(id)arg2;
-(void)handleBalanceReminderUpdate:(id)arg1 balance:(id)arg2 forUniqueID:(id)arg3;
-(void)handleCredentialsUpdate:(id)arg1 forUniqueID:(id)arg2;
-(void)archiveWebServiceContext:(id)arg1;
-(void)archiveWebServiceBackgroundContext:(id)arg1;
-(void)handlePaymentWebServiceContextFromWatch:(id)arg1;
-(void)sendWebServiceContextToWatch;
-(void)showPaymentSetupForAppDisplayName:(id)arg1;
-(void)sendPaymentOptionsDefaultsToWatch;
-(void)handleUpdatedPeerPaymentWebServiceContext:(id)arg1 account:(id)arg2;
-(void)handleDownloadAllPaymentPasses;
-(void)checkCompanionPeerPaymentRegistrationState;

@end

