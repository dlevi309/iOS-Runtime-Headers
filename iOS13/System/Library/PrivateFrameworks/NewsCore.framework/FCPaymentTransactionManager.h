/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDelegate:(id<FCPaymentTransactionManagerDelegate>)arg1 ;
-(void)registerOngoingPurchaseTransactionsWithEntry:(id)arg1 ;
-(void)startPurchaseWithTagID:(id)arg1 productID:(id)arg2 purchaseID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 price:(id)arg6 webAccessOptIn:(BOOL)arg7 payment:(id)arg8 ;
-(id)createPaymentQueueWithProductID:(id)arg1 purchaseID:(id)arg2 webAccessOptIn:(BOOL)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 ;
-(FCPaymentTransactionObserver *)paymentTransactionObserver;
-(NSMutableDictionary *)paymentQueueByProductID;
-(void)paymentTransactionObserver:(id)arg1 didFinishPurchaseTransactionWithProductID:(id)arg2 ;
-(void)paymentTransactionObserver:(id)arg1 didFailPurchaseTransactionWithTransaction:(id)arg2 ;
-(void)setPaymentTransactionObserver:(FCPaymentTransactionObserver *)arg1 ;
-(void)setPaymentQueueByProductID:(NSMutableDictionary *)arg1 ;
@end

