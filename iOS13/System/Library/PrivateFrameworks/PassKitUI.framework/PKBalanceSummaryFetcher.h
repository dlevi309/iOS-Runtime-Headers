/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>

@protocol OS_dispatch_queue;
@class PKPaymentPass, NSString, PKAccount, NSObject, PKPaymentDefaultDataProvider, NSCalendar;

@interface PKBalanceSummaryFetcher : NSObject <PKPaymentDataProviderDelegate> {

	PKPaymentPass* _paymentPass;
	NSString* _passUniqueID;
	PKAccount* _account;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _replyQueue;
	PKPaymentDefaultDataProvider* _paymentDataProvider;
	NSCalendar* _currentCalendar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_sortedTransactions:(id)arg1 ascending:(BOOL)arg2 ;
-(id)initWithPaymentPass:(id)arg1 account:(id)arg2 ;
-(void)balanceSummaryStartingWithDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)_summaryWithTransactions:(id)arg1 currency:(id)arg2 type:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(BOOL)_transactionIsPurchase:(id)arg1 ;
-(BOOL)_transactionIsInterest:(id)arg1 ;
-(BOOL)_transactionIsCredit:(id)arg1 ;
@end

