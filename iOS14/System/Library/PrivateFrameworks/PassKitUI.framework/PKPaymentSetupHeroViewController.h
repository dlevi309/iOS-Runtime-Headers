/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class ACAccountStore, PKPaymentSetupHeroView, NSArray, PKPaymentProvisioningController, PKPaymentHeroImageController, UIViewController, PKPaymentWebService, NSString;

@interface PKPaymentSetupHeroViewController : PKExplanationViewController <PKExplanationViewDelegate> {

	ACAccountStore* _accountStore;
	BOOL _nextButtonPushed;
	PKPaymentSetupHeroView* _splashView;
	BOOL _hideSetupLater;
	BOOL _hasFelicaSecureElement;
	BOOL _preflightComplete;
	NSArray* _featuredImages;
	BOOL _allowsManualEntry;
	PKPaymentProvisioningController* _provisioningController;
	id<PKPaymentSetupViewControllerDelegate> _delegate;
	PKPaymentHeroImageController* _heroImageController;
	long long _paymentSetupMode;
	UIViewController* _deferredNextViewController;

}

@property (nonatomic,readonly) PKPaymentProvisioningController * provisioningController;              //@synthesize provisioningController=_provisioningController - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * webService; 
@property (nonatomic,readonly) PKPaymentHeroImageController * heroImageController;                    //@synthesize heroImageController=_heroImageController - In the implementation block
@property (assign,nonatomic) BOOL allowsManualEntry;                                                  //@synthesize allowsManualEntry=_allowsManualEntry - In the implementation block
@property (assign,nonatomic) long long paymentSetupMode;                                              //@synthesize paymentSetupMode=_paymentSetupMode - In the implementation block
@property (nonatomic,retain) UIViewController * deferredNextViewController;                           //@synthesize deferredNextViewController=_deferredNextViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(PKPaymentWebService *)webService;
-(id<PKPaymentSetupViewControllerDelegate>)delegate;
-(BOOL)allowsManualEntry;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 ;
-(void)setDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(long long)paymentSetupMode;
-(PKPaymentProvisioningController *)provisioningController;
-(void)_next:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)setFeaturedHeroImages:(id)arg1 ;
-(PKPaymentHeroImageController *)heroImageController;
-(UIViewController *)deferredNextViewController;
-(void)setDeferredNextViewController:(UIViewController *)arg1 ;
-(void)loadView;
-(void)setPaymentSetupMode:(long long)arg1 ;
-(void)setAllowsManualEntry:(BOOL)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(id)_bodyText;
-(void)_terminateSetupFlow;
@end

