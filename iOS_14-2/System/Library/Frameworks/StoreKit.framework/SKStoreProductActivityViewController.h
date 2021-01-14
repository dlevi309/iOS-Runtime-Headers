/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id<SKStoreProductActivityViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_requestRemoteViewController;
-(void)_addRemoteView;
-(void)setDelegate:(id<SKStoreProductActivityViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_didFinishWithResult:(unsigned long long)arg1 error:(id)arg2 ;
-(void)_viewTapped:(id)arg1 ;
@end

