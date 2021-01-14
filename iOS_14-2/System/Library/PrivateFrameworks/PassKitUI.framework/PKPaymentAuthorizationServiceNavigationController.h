/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithStyle:(unsigned long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)initWithLayoutStyle:(long long)arg1 paymentRequest:(id)arg2 ;
-(PKPaymentAuthorizationServiceViewController *)authorizationViewController;
-(id<UIViewControllerTransitioningDelegate>)paymentTransitioningDelegate;
-(void)setPaymentTransitioningDelegate:(id<UIViewControllerTransitioningDelegate>)arg1 ;
-(id)_backgroundColorForModalFormSheet;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

