/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKAccountFlowController.h>

@interface PKCreditAccountController : PKAccountFlowController
+(BOOL)_shouldDisplayBalanceForAccount:(id)arg1 ;
+(BOOL)_shouldDisplayBalanceAndTransactionsForPaymentPass:(id)arg1 ;
+(BOOL)_shouldDisplayTransactionsForAccount:(id)arg1 ;
+(id)relevantScheduledPaymentFromScheduledPayments:(id)arg1 account:(id)arg2 ;
+(void)resolutionToReceiveCashbackForAccount:(id)arg1 withPeerPaymentAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)shouldDisplayAccountInformationForPaymentPass:(id)arg1 withAccount:(id)arg2 ;
+(BOOL)shouldDisplayTransactionsForPaymentPass:(id)arg1 withAccount:(id)arg2 ;
+(unsigned long long)paymentEducationStateForAccount:(id)arg1 mostRecentTransactions:(id)arg2 upcomingScheduledPayments:(id)arg3 ;
@end

