/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol NPKPaymentProvisioningFlowControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id<NPKPaymentProvisioningFlowControllerDelegate> delegate; 
@required
-(id<NPKPaymentProvisioningFlowControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)reset;
-(void)setReaderModeProvisioningSupported:(BOOL)arg1;
-(void)setDigitalIssuanceSupported:(BOOL)arg1;
-(void)setSeparateLocalDeviceEntryRequired:(BOOL)arg1;
-(void)startProvisioningFlow:(id)arg1;
-(void)startIssuerVerificationFlowForPaymentPass:(id)arg1 requestContext:(id)arg2;
-(void)startInAppProvisioningFlowWithConfiguration:(id)arg1 requestContext:(id)arg2;
-(void)acknowledgeWelcome:(id)arg1;
-(void)chooseFlowForPickerItem:(id)arg1 requestContext:(id)arg2;
-(void)chooseProduct:(id)arg1 requestContext:(id)arg2;
-(void)handleDigitalIssuanceAmount:(id)arg1 requestContext:(id)arg2;
-(void)chooseReaderMode:(id)arg1;
-(void)handleReaderModeFields:(id)arg1 requestContext:(id)arg2;
-(void)chooseCredentials:(id)arg1 requestContext:(id)arg2;
-(void)chooseManualEntry:(id)arg1;
-(void)handleManualEntryFields:(id)arg1 credential:(id)arg2 requestContext:(id)arg3;
-(void)handleProductSelection:(id)arg1 requestContext:(id)arg2;
-(void)handlePasscodeUpgradeCompleteWithSuccess:(BOOL)arg1 error:(id)arg2 requestContext:(id)arg3;
-(void)acceptTerms:(id)arg1;
-(void)skipProvisioning:(id)arg1;
-(void)acknowledgeMoreInformation:(id)arg1;
-(void)handleIssuerVerificationChannel:(id)arg1 requestContext:(id)arg2;
-(void)handleIssuerVerificationFields:(id)arg1 requestContext:(id)arg2;
-(void)handleIssuerVerificationCode:(id)arg1 requestContext:(id)arg2;
-(void)skipIssuerVerification:(id)arg1;
-(void)handleIssuerApplicationAddRequest:(id)arg1 requestContext:(id)arg2;

@end

