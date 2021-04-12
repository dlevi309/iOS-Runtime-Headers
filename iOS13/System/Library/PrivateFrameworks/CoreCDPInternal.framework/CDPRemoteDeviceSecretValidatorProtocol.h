/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@protocol CDPRemoteDeviceSecretValidatorProtocol
@property (assign,nonatomic) unsigned long long supportedEscapeOfferMask; 
@required
-(void)cancelValidationWithError:(id)arg1;
-(void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4;
-(void)validateRecoveryKey:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)approveFromAnotherDeviceWithCompletion:(/*^block*/id)arg1;
-(void)cancelApproveFromAnotherDevice;
-(void)resetAccountCDPState;
-(void)supportedEscapeOfferMaskCompletion:(/*^block*/id)arg1;
-(unsigned long long)supportedEscapeOfferMask;
-(void)setSupportedEscapeOfferMask:(unsigned long long)arg1;

@end

