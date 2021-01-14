/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@protocol ISBiometricSessionDelegate <NSObject>
@optional
-(void)sender:(id)arg1 didFallbackToPassword:(BOOL)arg2;
-(void)sender:(id)arg1 shouldContinueTouchIDSession:(BOOL)arg2;
-(void)sender:(id)arg1 willSendChallenge:(id)arg2 andSignature:(id)arg3 andPaymentTokenData:(id)arg4 andFpanID:(id)arg5 isExtendedAction:(BOOL)arg6 isPayment:(BOOL)arg7 additionalHeaders:(id)arg8;

@end

