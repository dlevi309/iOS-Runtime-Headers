/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class PKPaymentTransaction, NSString;

@interface PKPaymentTransactionProcessorItem : NSObject {

	os_unfair_lock_s _transactionLock;
	BOOL _foundOptimalLocation;
	BOOL _useBackgroundLocation;
	BOOL _isClearingAttempt;
	PKPaymentTransaction* _paymentTransaction;
	NSString* _transactionSourceIdentifier;

}

@property (nonatomic,retain) PKPaymentTransaction * paymentTransaction;              //@synthesize paymentTransaction=_paymentTransaction - In the implementation block
@property (nonatomic,retain) NSString * transactionSourceIdentifier;                 //@synthesize transactionSourceIdentifier=_transactionSourceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL foundOptimalLocation;                              //@synthesize foundOptimalLocation=_foundOptimalLocation - In the implementation block
@property (assign,nonatomic) BOOL useBackgroundLocation;                             //@synthesize useBackgroundLocation=_useBackgroundLocation - In the implementation block
@property (assign,nonatomic) BOOL isClearingAttempt;                                 //@synthesize isClearingAttempt=_isClearingAttempt - In the implementation block
-(id)init;
-(BOOL)isClearingAttempt;
-(PKPaymentTransaction *)paymentTransaction;
-(void)setPaymentTransaction:(PKPaymentTransaction *)arg1 ;
-(BOOL)foundOptimalLocation;
-(void)setFoundOptimalLocation:(BOOL)arg1 ;
-(BOOL)useBackgroundLocation;
-(void)setUseBackgroundLocation:(BOOL)arg1 ;
-(void)setIsClearingAttempt:(BOOL)arg1 ;
-(void)setTransactionSourceIdentifier:(NSString *)arg1 ;
-(NSString *)transactionSourceIdentifier;
@end

