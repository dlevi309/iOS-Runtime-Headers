/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue;
@class PKPaymentTransaction, PKPaymentApplication, NSObject;

@interface PKPaymentTransactionMapsLookupRequest : NSObject {

	PKPaymentTransaction* _transaction;
	PKPaymentApplication* _paymentApplication;
	NSObject*<OS_dispatch_queue> _internalQueue;
	BOOL _clearingAttempt;

}

@property (assign,getter=isClearingAttempt,nonatomic) BOOL clearingAttempt;              //@synthesize clearingAttempt=_clearingAttempt - In the implementation block
-(id)_merchantLookupRequest;
-(id)_brandFromMapItem:(id)arg1 ;
-(id)_merchantFromMapItem:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 paymentApplication:(id)arg2 ;
-(void)startLookupWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isClearingAttempt;
-(void)setClearingAttempt:(BOOL)arg1 ;
@end

