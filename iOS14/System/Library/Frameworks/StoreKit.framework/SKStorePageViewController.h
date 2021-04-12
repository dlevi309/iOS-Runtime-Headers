/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@protocol SKUIServiceStorePageViewController;
@class _UIAsyncInvocation, SKStoreProductViewController, SKRemoteStorePageViewController, SKInvocationQueueProxy, NSString;

@interface SKStorePageViewController : UIViewController <SKStoreProductViewControllerDelegate> {

	_UIAsyncInvocation* _cancelRequest;
	/*^block*/id _loadBlock;
	SKStoreProductViewController* _productPageViewController;
	SKRemoteStorePageViewController* _remoteViewController;
	SKInvocationQueueProxy*<SKUIServiceStorePageViewController> _serviceProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_requestRemoteViewController;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_addRemoteView;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)_prepareToLoadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_dismissProductPageViewController;
-(void)_didLoadWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)loadPageWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)loadPageWithURLBagKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_showProductPageWithItemIdentifier:(id)arg1 ;
@end

