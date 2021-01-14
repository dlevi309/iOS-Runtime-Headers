/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCPaymentTransactionManager.h>

@protocol FCPaymentTransactionManagerDelegate;
@class NSString, NSError;

@interface FCMockPaymentTransactionManager : NSObject <FCPaymentTransactionManager> {

	id<FCPaymentTransactionManagerDelegate> delegate;
	NSString* _productID;
	long long _transactionState;
	NSError* _transactionError;
	unsigned long long _transactionExpectation;

}

@property (nonatomic,copy) NSString * productID;                                                   //@synthesize productID=_productID - In the implementation block
@property (assign,nonatomic) long long transactionState;                                           //@synthesize transactionState=_transactionState - In the implementation block
@property (nonatomic,copy) NSError * transactionError;                                             //@synthesize transactionError=_transactionError - In the implementation block
@property (assign,nonatomic) unsigned long long transactionExpectation;                            //@synthesize transactionExpectation=_transactionExpectation - In the implementation block
@property (assign,nonatomic,__weak) id<FCPaymentTransactionManagerDelegate> delegate; 
+(id)mockPaymentTransactionWithFailForProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3 ;
+(id)mockPaymentTransactionWithSuccessForProductID:(id)arg1 ;
-(id<FCPaymentTransactionManagerDelegate>)delegate;
-(BOOL)canMakePayments;
-(void)setDelegate:(id<FCPaymentTransactionManagerDelegate>)arg1 ;
-(NSString *)productID;
-(void)setProductID:(NSString *)arg1 ;
-(void)registerOngoingPurchaseTransactionsWithEntry:(id)arg1 ;
-(void)startPurchaseWithTagID:(id)arg1 productID:(id)arg2 purchaseID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 price:(id)arg6 webAccessOptIn:(BOOL)arg7 payment:(id)arg8 ;
-(long long)transactionState;
-(void)setTransactionExpectation:(unsigned long long)arg1 ;
-(void)setTransactionState:(long long)arg1 ;
-(void)setTransactionError:(NSError *)arg1 ;
-(unsigned long long)transactionExpectation;
-(NSError *)transactionError;
@end

