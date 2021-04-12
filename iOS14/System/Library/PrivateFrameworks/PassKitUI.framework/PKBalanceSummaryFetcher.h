/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>

@protocol OS_dispatch_queue;
@class PKTransactionSource, PKAccount, NSObject, PKPaymentDefaultDataProvider, NSCalendar, NSString;

@interface PKBalanceSummaryFetcher : NSObject <PKPaymentDataProviderDelegate> {

	PKTransactionSource* _transactionSource;
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
-(id)_summaryWithTransactions:(id)arg1 currency:(id)arg2 type:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(BOOL)_transactionIsPurchase:(id)arg1 ;
-(BOOL)_transactionIsInterest:(id)arg1 ;
-(BOOL)_transactionIsCredit:(id)arg1 ;
-(void)balanceSummaryStartingWithDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithTransactionSource:(id)arg1 account:(id)arg2 ;
-(id)_sortedTransactions:(id)arg1 ascending:(BOOL)arg2 ;
@end

