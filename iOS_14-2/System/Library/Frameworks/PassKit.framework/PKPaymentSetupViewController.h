/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@class PKRemotePaymentSetupViewController, PKPaymentSetupRequest, _UIAsyncInvocation, UIActivityIndicatorView, UILabel, UIButton;

@interface PKPaymentSetupViewController : UIViewController {

	PKRemotePaymentSetupViewController* _remoteVC;
	PKPaymentSetupRequest* _paymentSetupRequest;
	_UIAsyncInvocation* _remoteVCRequest;
	UIActivityIndicatorView* _spinner;
	UILabel* _loadingLabel;
	UIButton* _cancelButton;

}
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(void)paymentSetupFeaturesForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillLayoutSubviews;
-(long long)modalTransitionStyle;
-(long long)modalPresentationStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(id)childViewControllerForStatusBarStyle;
-(BOOL)shouldAutorotate;
-(id)initWithCoder:(id)arg1 ;
-(void)_setRemoteVC:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithPaymentSetupRequest:(id)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(void)loadView;
-(void)_cancelTapped;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)paymentSetupDidFinish;
-(void)_hideLoadingContent;
@end

