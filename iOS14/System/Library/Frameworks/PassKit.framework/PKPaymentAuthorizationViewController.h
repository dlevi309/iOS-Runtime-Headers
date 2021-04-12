/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorPrivateDelegate.h>

@protocol PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate;
@class PKPaymentAuthorizationCoordinator, NSString;

@interface PKPaymentAuthorizationViewController : UIViewController <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {

	BOOL _viewHasAppeared;
	id<PKPaymentAuthorizationViewControllerDelegate> _delegate;
	PKPaymentAuthorizationCoordinator* _paymentCoordinator;
	id<PKPaymentAuthorizationViewControllerPrivateDelegate> _privateDelegate;

}

@property (nonatomic,retain) PKPaymentAuthorizationCoordinator * paymentCoordinator;                                      //@synthesize paymentCoordinator=_paymentCoordinator - In the implementation block
@property (assign,nonatomic) BOOL viewHasAppeared;                                                                        //@synthesize viewHasAppeared=_viewHasAppeared - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationViewControllerPrivateDelegate> privateDelegate;              //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationViewControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canMakePayments;
+(void)paymentServicesMerchantURLForAPIType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
+(BOOL)canMakePaymentsUsingNetworks:(id)arg1 ;
+(BOOL)canMakePaymentsUsingNetworks:(id)arg1 capabilities:(unsigned long long)arg2 ;
+(void)paymentServicesMerchantURL:(/*^block*/id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id<PKPaymentAuthorizationViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)modalPresentationStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg1 ;
-(void)paymentAuthorizationCoordinatorWillAuthorizePayment:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 willFinishWithError:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didRequestMerchantSessionUpdate:(/*^block*/id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingAddress:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<PKPaymentAuthorizationViewControllerDelegate>)arg1 ;
-(id<PKPaymentAuthorizationViewControllerPrivateDelegate>)privateDelegate;
-(void)setPrivateDelegate:(id<PKPaymentAuthorizationViewControllerPrivateDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPaymentRequest:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setViewHasAppeared:(BOOL)arg1 ;
-(BOOL)viewHasAppeared;
-(PKPaymentAuthorizationCoordinator *)paymentCoordinator;
-(void)setPaymentCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 ;
@end

