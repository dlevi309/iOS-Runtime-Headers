/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol AKAppleIDAuthenticationLimitedUIProvider <NSObject>
@optional
-(void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)presentBasicLoginUIWithCompletion:(/*^block*/id)arg1;
-(void)dismissBasicLoginUIWithCompletion:(/*^block*/id)arg1;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4;
-(void)presentSecondFactorUIWithCompletion:(/*^block*/id)arg1;
-(void)dismissSecondFactorUIWithCompletion:(/*^block*/id)arg1;
-(void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4;

@end

