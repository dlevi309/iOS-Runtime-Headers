/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class PKPaymentTransaction, PKPaymentApplication, NSString;

@interface PKPaymentTransactionProcessorItem : NSObject {

	os_unfair_lock_s _transactionLock;
	BOOL _foundOptimalLocation;
	BOOL _useBackgroundLocation;
	BOOL _isClearingAttempt;
	PKPaymentTransaction* _paymentTransaction;
	PKPaymentApplication* _paymentApplication;
	NSString* _passUniqueIdentifier;

}

@property (nonatomic,retain) PKPaymentTransaction * paymentTransaction;              //@synthesize paymentTransaction=_paymentTransaction - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * paymentApplication;              //@synthesize paymentApplication=_paymentApplication - In the implementation block
@property (nonatomic,retain) NSString * passUniqueIdentifier;                        //@synthesize passUniqueIdentifier=_passUniqueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL foundOptimalLocation;                              //@synthesize foundOptimalLocation=_foundOptimalLocation - In the implementation block
@property (assign,nonatomic) BOOL useBackgroundLocation;                             //@synthesize useBackgroundLocation=_useBackgroundLocation - In the implementation block
@property (assign,nonatomic) BOOL isClearingAttempt;                                 //@synthesize isClearingAttempt=_isClearingAttempt - In the implementation block
-(id)init;
-(NSString *)passUniqueIdentifier;
-(void)setPassUniqueIdentifier:(NSString *)arg1 ;
-(PKPaymentApplication *)paymentApplication;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(BOOL)isClearingAttempt;
-(PKPaymentTransaction *)paymentTransaction;
-(void)setPaymentTransaction:(PKPaymentTransaction *)arg1 ;
-(BOOL)foundOptimalLocation;
-(void)setFoundOptimalLocation:(BOOL)arg1 ;
-(BOOL)useBackgroundLocation;
-(void)setUseBackgroundLocation:(BOOL)arg1 ;
-(void)setIsClearingAttempt:(BOOL)arg1 ;
@end

