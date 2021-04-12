/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol SKUIServiceProductActivityViewController, SKStoreProductActivityViewControllerDelegate;
@class SKInvocationQueueProxy, _UIAsyncInvocation, SKRemoteProductActivityViewController, NSDictionary, _SKStoreProductActivityAnimationController, NSString;

@interface SKStoreProductActivityViewController : UIViewController <UIViewControllerTransitioningDelegate> {

	SKInvocationQueueProxy*<SKUIServiceProductActivityViewController> _serviceProxy;
	_UIAsyncInvocation* _cancelRequest;
	SKRemoteProductActivityViewController* _remoteViewController;
	NSDictionary* _parameters;
	_SKStoreProductActivityAnimationController* _animationController;
	id<SKStoreProductActivityViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKStoreProductActivityViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<SKStoreProductActivityViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKStoreProductActivityViewControllerDelegate>)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)_addRemoteView;
-(void)_requestRemoteViewController;
-(void)_didFinishWithResult:(unsigned long long)arg1 error:(id)arg2 ;
-(void)_viewTapped:(id)arg1 ;
@end

