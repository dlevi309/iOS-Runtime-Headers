/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillLayoutSubviews;
-(long long)modalTransitionStyle;
-(id<PKAddPaymentPassViewControllerDelegate>)delegate;
-(long long)modalPresentationStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)setDelegate:(id<PKAddPaymentPassViewControllerDelegate>)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(BOOL)shouldAutorotate;
-(id)initWithCoder:(id)arg1 ;
-(void)_setRemoteVC:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2 ;
-(id)childViewControllerForStatusBarHidden;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

