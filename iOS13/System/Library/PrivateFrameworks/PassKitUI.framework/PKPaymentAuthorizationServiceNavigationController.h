/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKCompactNavigationContainedNavigationController.h>

@protocol UIViewControllerTransitioningDelegate;
@class PKPaymentAuthorizationLayout, PKPaymentAuthorizationServiceViewController;

@interface PKPaymentAuthorizationServiceNavigationController : PKCompactNavigationContainedNavigationController {

	PKPaymentAuthorizationLayout* _layout;
	PKPaymentAuthorizationServiceViewController* _authorizationViewController;
	id<UIViewControllerTransitioningDelegate> _paymentTransitioningDelegate;

}

@property (nonatomic,retain) id<UIViewControllerTransitioningDelegate> paymentTransitioningDelegate;                   //@synthesize paymentTransitioningDelegate=_paymentTransitioningDelegate - In the implementation block
@property (nonatomic,readonly) PKPaymentAuthorizationServiceViewController * authorizationViewController;              //@synthesize authorizationViewController=_authorizationViewController - In the implementation block
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)_backgroundColorForModalFormSheet;
-(PKPaymentAuthorizationServiceViewController *)authorizationViewController;
-(id)initWithLayoutStyle:(long long)arg1 paymentRequest:(id)arg2 ;
-(id<UIViewControllerTransitioningDelegate>)paymentTransitioningDelegate;
-(void)setPaymentTransitioningDelegate:(id<UIViewControllerTransitioningDelegate>)arg1 ;
@end

