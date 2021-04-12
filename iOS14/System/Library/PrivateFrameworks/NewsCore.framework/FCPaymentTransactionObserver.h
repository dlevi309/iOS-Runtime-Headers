/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/SKPaymentTransactionObserver.h>

@protocol FCPaymentTransactionObserverDelegate;
@class NSString;

@interface FCPaymentTransactionObserver : NSObject <SKPaymentTransactionObserver> {

	id<FCPaymentTransactionObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FCPaymentTransactionObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)failedTransaction:(id)arg1 ;
-(id<FCPaymentTransactionObserverDelegate>)delegate;
-(void)setDelegate:(id<FCPaymentTransactionObserverDelegate>)arg1 ;
-(void)finishTransaction:(id)arg1 ;
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2 ;
@end

