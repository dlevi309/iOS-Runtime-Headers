/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(long long)modalPresentationStyle;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(long long)modalTransitionStyle;
-(id)initWithPaymentSetupRequest:(id)arg1 ;
-(void)_cancelTapped;
-(void)_setRemoteVC:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)paymentSetupDidFinish;
-(void)_hideLoadingContent;
@end

