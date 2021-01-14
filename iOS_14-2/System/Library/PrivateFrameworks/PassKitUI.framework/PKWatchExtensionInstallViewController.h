/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/ASCLockupViewDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKWatchDeviceAppCarouselView, ASCLockupView, PKPaymentPass, PKPaymentWebService, PKPaymentProvisioningController, NSString;

@interface PKWatchExtensionInstallViewController : PKExplanationViewController <ASCLockupViewDelegate> {

	PKWatchDeviceAppCarouselView* _deviceImageView;
	ASCLockupView* _appStoreView;
	PKPaymentPass* _paymentPass;
	PKPaymentWebService* _webservice;
	PKPaymentProvisioningController* _provisioningController;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;

}

@property (nonatomic,retain) PKPaymentPass * paymentPass;                                                //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * webservice;                                           //@synthesize webservice=_webservice - In the implementation block
@property (nonatomic,retain) PKPaymentProvisioningController * provisioningController;                   //@synthesize provisioningController=_provisioningController - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldShowWatchExtensionInstallViewControllerForPaymentPass:(id)arg1 webService:(id)arg2 ;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(PKPaymentProvisioningController *)provisioningController;
-(id)presentingViewControllerForLockupView:(id)arg1 ;
-(void)lockupViewDidFinishRequest:(id)arg1 ;
-(PKPaymentWebService *)webservice;
-(void)setProvisioningController:(PKPaymentProvisioningController *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(void)loadView;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(id)initWithPaymentPass:(id)arg1 provisioningController:(id)arg2 webService:(id)arg3 context:(long long)arg4 setupDelegate:(id)arg5 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)_proceedToNextScreen;
-(void)_installNowPressed;
-(void)setWebservice:(PKPaymentWebService *)arg1 ;
@end

