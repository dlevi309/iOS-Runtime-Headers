/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PKAddPaymentPassViewControllerDelegate;
@class PKAddPaymentPassRequestConfiguration, _UIAsyncInvocation, PKRemoteAddPaymentPassViewController;

@interface PKAddPaymentPassViewController : UIViewController {

	id<PKAddPaymentPassViewControllerDelegate> _delegate;
	PKAddPaymentPassRequestConfiguration* _configuration;
	_UIAsyncInvocation* _remoteVCRequest;
	PKRemoteAddPaymentPassViewController* _remoteVC;

}

@property (assign,nonatomic,__weak) id<PKAddPaymentPassViewControllerDelegate> delegate; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)canAddPaymentPass;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<PKAddPaymentPassViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAddPaymentPassViewControllerDelegate>)arg1 ;
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
-(id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2 ;
-(void)_setRemoteVC:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

