/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PKSubcredentialMessageComposeViewControllerDelegate;
@class _UIAsyncInvocation, PKAppletSubcredentialSharingRequest, PKRemoteSubcredentialMessageComposeViewController;

@interface PKSubcredentialMessageComposeViewController : UIViewController {

	id<PKSubcredentialMessageComposeViewControllerDelegate> _delegate;
	_UIAsyncInvocation* _remoteVCRequest;
	PKAppletSubcredentialSharingRequest* _sharingRequest;
	PKRemoteSubcredentialMessageComposeViewController* _remoteVC;

}

@property (assign,nonatomic,__weak) id<PKSubcredentialMessageComposeViewControllerDelegate> delegate; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)viewWillLayoutSubviews;
-(long long)modalTransitionStyle;
-(id<PKSubcredentialMessageComposeViewControllerDelegate>)delegate;
-(long long)modalPresentationStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)setDelegate:(id<PKSubcredentialMessageComposeViewControllerDelegate>)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(BOOL)shouldAutorotate;
-(id)initWithSharingRequest:(id)arg1 delegate:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setRemoteVC:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)childViewControllerForStatusBarHidden;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

