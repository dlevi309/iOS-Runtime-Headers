/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorPrivateDelegate.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKOrderPhysicalCardController, CNPostalAddress, PKPhysicalCardArtworkOption, PKOrderPhysicalCardHeroView, CLInUseAssertion, PKPaymentAuthorizationCoordinator, PKBusinessChatController, NSString;

@interface PKOrderPhysicalCardAddressConfirmationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKViewControllerPreflightable> {

	PKOrderPhysicalCardController* _controller;
	unsigned long long _featureIdentifier;
	CNPostalAddress* _shippingAddress;
	PKPhysicalCardArtworkOption* _artworkOption;
	PKOrderPhysicalCardHeroView* _physicalCardHeroView;
	CLInUseAssertion* _inUseAssertion;
	BOOL _authorized;
	PKPaymentAuthorizationCoordinator* _paymentAuthorizationCoordinator;
	PKBusinessChatController* _businessChatController;
	id<PKPaymentSetupViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKPaymentSetupViewControllerDelegate>)delegate;
-(void)_presentViewController:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeApplePayTrustSignature:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)viewDidLoad;
-(void)_terminateFlow;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(id)_addressBodyStringWithPostalAddress:(id)arg1 ;
-(void)_showDisplayableError:(id)arg1 ;
-(void)_showSpinner:(BOOL)arg1 ;
-(void)_presentNextViewControllerOrTerminate;
-(id)initWithOrderPhysicalCardController:(id)arg1 ;
-(void)dealloc;
@end

