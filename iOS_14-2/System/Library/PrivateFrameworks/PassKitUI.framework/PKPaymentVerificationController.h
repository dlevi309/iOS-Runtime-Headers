/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKit/UINavigationControllerDelegate.h>

@protocol PKPaymentVerificationControllerDelegate, PKPaymentSetupViewControllerDelegate;
@class NSString, NSNumber, UIImage, PKPaymentPass, PKPaymentWebService, PKVerificationRequestRecord, PKPaymentProvisioningController, PKPassView;

@interface PKPaymentVerificationController : NSObject <UINavigationControllerDelegate> {

	NSString* _installedBankAppBundleID;
	NSString* _installedBankAppTitle;
	NSString* _inStoreBankAppTitle;
	NSNumber* _inStoreBankAppStoreID;
	UIImage* _passSnapshot;
	BOOL _bankAppNotFound;
	PKPaymentPass* _pass;
	id<PKPaymentVerificationControllerDelegate> _delegate;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	PKPaymentWebService* _webService;
	long long _context;
	long long _verificationContext;
	PKVerificationRequestRecord* _verificationRecord;
	PKPaymentProvisioningController* _provisioningController;
	PKPassView* _passView;

}

@property (nonatomic,retain) PKPaymentPass * pass;                                                       //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentVerificationControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * webService;                                         //@synthesize webService=_webService - In the implementation block
@property (assign,nonatomic) long long context;                                                          //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long verificationContext;                                              //@synthesize verificationContext=_verificationContext - In the implementation block
@property (nonatomic,readonly) PKVerificationRequestRecord * verificationRecord;                         //@synthesize verificationRecord=_verificationRecord - In the implementation block
@property (nonatomic,retain) PKPaymentProvisioningController * provisioningController;                   //@synthesize provisioningController=_provisioningController - In the implementation block
@property (readonly) NSString * verificationTitleString; 
@property (readonly) NSString * verificationBodyString; 
@property (readonly) BOOL shouldDisabledVerificationButton; 
@property (readonly) NSString * continueVerificationButtonTitle; 
@property (readonly) NSString * alternateMethodButtonTitle; 
@property (nonatomic,retain) PKPassView * passView;                                                      //@synthesize passView=_passView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPaymentWebService *)webService;
-(PKPassView *)passView;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(id<PKPaymentVerificationControllerDelegate>)delegate;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(long long)context;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)setDelegate:(id<PKPaymentVerificationControllerDelegate>)arg1 ;
-(long long)verificationContext;
-(PKPaymentProvisioningController *)provisioningController;
-(PKPaymentPass *)pass;
-(id)passSnapshot;
-(PKVerificationRequestRecord *)verificationRecord;
-(void)performVerificationOptionsRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setProvisioningController:(PKPaymentProvisioningController *)arg1 ;
-(void)performVerificationUpdateRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPaymentPass:(id)arg1 passView:(id)arg2 webService:(id)arg3 context:(long long)arg4 delegate:(id)arg5 setupDelegate:(id)arg6 verificationContext:(long long)arg7 ;
-(void)continueVerification;
-(void)sharedPaymentServiceChanged;
-(void)_queue_sharedPaymentWebServiceChanged;
-(void)setVerificationRecord:(PKVerificationRequestRecord *)arg1 ;
-(BOOL)_isBankAppInstalled;
-(void)_performStoreLookupForBankApp;
-(void)_didChangePresentation;
-(unsigned long long)_channelType;
-(id)_formattedPhoneNumber:(id)arg1 forTextMessage:(BOOL)arg2 ;
-(id)_bankAppName;
-(id)_bankAppStoreIDs;
-(void)_presentVerificationViewControllerForStepIdentifier:(id)arg1 ;
-(void)_presentVerificatonEntryCompletionViewController;
-(void)_completeVerificationUsingOutboundCall;
-(void)_completeVerificationUsingBankApp;
-(void)_launchBankApp;
-(void)_requestDelegatePresentationOfViewController:(id)arg1 ;
-(id)_outboundCallPhoneNumber;
-(void)_wrapViewControllerAndRequestDelegatePresentationOfView:(id)arg1 ;
-(void)_downloadAndAddPassWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)verificationTitleString;
-(NSString *)verificationBodyString;
-(BOOL)shouldDisabledVerificationButton;
-(NSString *)continueVerificationButtonTitle;
-(NSString *)alternateMethodButtonTitle;
-(void)selectOtherVerificationMethod;
-(void)submitVerificationCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setVerificationContext:(long long)arg1 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)setPassView:(PKPassView *)arg1 ;
-(void)dealloc;
-(void)setContext:(long long)arg1 ;
@end

