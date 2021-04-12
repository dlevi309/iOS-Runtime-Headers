/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/


@protocol CDPRemoteDeviceSecretValidatorProtocol;
@interface CDPRemoteDeviceSecretValidator : NSObject {

	id<CDPRemoteDeviceSecretValidatorProtocol> _validator;

}
-(void)cancelValidationWithError:(id)arg1 ;
-(void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)validateRecoveryKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)approveFromAnotherDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelApproveFromAnotherDevice;
-(void)resetAccountCDPState;
-(void)supportedEscapeOfferMaskCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)supportedEscapeOfferMask;
-(id)initWithContext:(id)arg1 validator:(id)arg2 ;
-(void)_executeSyncOnMainThreadIfNeeded:(/*^block*/id)arg1 ;
@end

