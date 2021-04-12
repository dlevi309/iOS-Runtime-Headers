/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@protocol ISBiometricSessionDelegate <NSObject>
@optional
-(void)sender:(id)arg1 didFallbackToPassword:(BOOL)arg2;
-(void)sender:(id)arg1 shouldContinueTouchIDSession:(BOOL)arg2;
-(void)sender:(id)arg1 willSendChallenge:(id)arg2 andSignature:(id)arg3 andPaymentTokenData:(id)arg4 andFpanID:(id)arg5 isExtendedAction:(BOOL)arg6 isPayment:(BOOL)arg7 additionalHeaders:(id)arg8;

@end

