/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPaymentSetupViewControllerDelegate;
@class NSArray, PKPeerPaymentIdentityVerificationResponse, PKPaymentSetupFieldsModel, UIViewController, PKPeerPaymentWebService, PKPeerPaymentDocumentSubmissionController;

@interface PKPeerPaymentIdentityVerificationController : NSObject {

	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	NSArray* _viewControllers;
	unsigned long long _viewControllerIndex;
	PKPeerPaymentIdentityVerificationResponse* _response;
	PKPaymentSetupFieldsModel* _fieldsModel;
	long long _context;
	UIViewController* _firstViewController;
	PKPeerPaymentWebService* _webService;
	PKPeerPaymentDocumentSubmissionController* _captureController;

}

@property (nonatomic,readonly) PKPaymentSetupFieldsModel * fieldsModel;                                    //@synthesize fieldsModel=_fieldsModel - In the implementation block
@property (nonatomic,readonly) long long context;                                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) UIViewController * firstViewController;                                     //@synthesize firstViewController=_firstViewController - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentWebService * webService;                                       //@synthesize webService=_webService - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentIdentityVerificationResponse * response;                       //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentDocumentSubmissionController * captureController;              //@synthesize captureController=_captureController - In the implementation block
-(id)init;
-(long long)context;
-(PKPeerPaymentIdentityVerificationResponse *)response;
-(BOOL)_hasRequiredFields;
-(PKPeerPaymentWebService *)webService;
-(UIViewController *)firstViewController;
-(void)nextViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithPeerPaymentWebService:(id)arg1 identityVerificationResponse:(id)arg2 setupDelegate:(id)arg3 context:(long long)arg4 ;
-(PKPaymentSetupFieldsModel *)fieldsModel;
-(void)_formViewControllersWithExplanationView:(BOOL)arg1 ;
-(id)_nextLocalViewController;
-(void)_resetViewControllers;
-(id)_accountRestrictedErrorViewController;
-(id)_accountLockedErrorViewController;
-(id)_verificationErrorViewControllerWithError:(id)arg1 ;
-(void)_identityVerificationResquestWithCompletion:(/*^block*/id)arg1 ;
-(id)_generateFieldsModel;
-(PKPeerPaymentDocumentSubmissionController *)captureController;
@end

