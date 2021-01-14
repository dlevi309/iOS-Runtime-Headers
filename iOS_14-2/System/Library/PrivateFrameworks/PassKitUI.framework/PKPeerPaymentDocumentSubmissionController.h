/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentDocumentSubmissionController.h>
#import <libobjc.A.dylib/PKPeerPaymentAccountResolutionControllerDelegate.h>

@class PKPeerPaymentWebService, PKPeerPaymentIdentityVerificationResponse, PKPeerPaymentAccountResolutionController, NSString;

@interface PKPeerPaymentDocumentSubmissionController : PKPaymentDocumentSubmissionController <PKPeerPaymentAccountResolutionControllerDelegate> {

	PKPeerPaymentWebService* _webService;
	PKPeerPaymentIdentityVerificationResponse* _identityVerificationResponse;
	PKPeerPaymentAccountResolutionController* _accountResolutionController;

}

@property (nonatomic,retain) PKPeerPaymentWebService * webService;                                                  //@synthesize webService=_webService - In the implementation block
@property (nonatomic,retain) PKPeerPaymentIdentityVerificationResponse * identityVerificationResponse;              //@synthesize identityVerificationResponse=_identityVerificationResponse - In the implementation block
@property (nonatomic,retain) PKPeerPaymentAccountResolutionController * accountResolutionController;                //@synthesize accountResolutionController=_accountResolutionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPeerPaymentWebService *)webService;
-(void)setWebService:(PKPeerPaymentWebService *)arg1 ;
-(void)uploadID;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2 ;
-(id)initWithPeerPaymentWebService:(id)arg1 identityVerificationResponse:(id)arg2 setupDelegate:(id)arg3 context:(long long)arg4 ;
-(void)contactApplePressed;
-(PKPeerPaymentIdentityVerificationResponse *)identityVerificationResponse;
-(void)setIdentityVerificationResponse:(PKPeerPaymentIdentityVerificationResponse *)arg1 ;
-(PKPeerPaymentAccountResolutionController *)accountResolutionController;
-(void)setAccountResolutionController:(PKPeerPaymentAccountResolutionController *)arg1 ;
@end

