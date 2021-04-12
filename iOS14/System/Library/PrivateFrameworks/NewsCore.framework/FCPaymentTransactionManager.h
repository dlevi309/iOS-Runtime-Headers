/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCPaymentTransactionObserverDelegate.h>
#import <libobjc.A.dylib/FCPaymentTransactionManager.h>

@protocol FCPaymentTransactionManagerDelegate;
@class FCPaymentTransactionObserver, NSMutableDictionary, NSString;

@interface FCPaymentTransactionManager : NSObject <FCPaymentTransactionObserverDelegate, FCPaymentTransactionManager> {

	id<FCPaymentTransactionManagerDelegate> delegate;
	FCPaymentTransactionObserver* _paymentTransactionObserver;
	NSMutableDictionary* _paymentQueueByProductID;

}

@property (nonatomic,retain) FCPaymentTransactionObserver * paymentTransactionObserver;              //@synthesize paymentTransactionObserver=_paymentTransactionObserver - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * paymentQueueByProductID;                          //@synthesize paymentQueueByProductID=_paymentQueueByProductID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FCPaymentTransactionManagerDelegate> delegate; 
-(id)init;
-(id<FCPaymentTransactionManagerDelegate>)delegate;
-(FCPaymentTransactionObserver *)paymentTransactionObserver;
-(BOOL)canMakePayments;
-(NSMutableDictionary *)paymentQueueByProductID;
-(void)setDelegate:(id<FCPaymentTransactionManagerDelegate>)arg1 ;
-(void)setPaymentTransactionObserver:(FCPaymentTransactionObserver *)arg1 ;
-(void)paymentTransactionObserver:(id)arg1 didFailPurchaseTransactionWithTransaction:(id)arg2 ;
-(void)paymentTransactionObserver:(id)arg1 didFinishPurchaseTransactionWithProductID:(id)arg2 ;
-(void)registerOngoingPurchaseTransactionsWithEntry:(id)arg1 ;
-(void)setPaymentQueueByProductID:(NSMutableDictionary *)arg1 ;
-(void)startPurchaseWithTagID:(id)arg1 productID:(id)arg2 purchaseID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 price:(id)arg6 webAccessOptIn:(BOOL)arg7 payment:(id)arg8 ;
-(id)createPaymentQueueWithProductID:(id)arg1 purchaseID:(id)arg2 webAccessOptIn:(BOOL)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 ;
@end

