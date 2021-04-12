/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUViewController.h>
#import <libobjc.A.dylib/SKUIIPhoneProductPageDelegate.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegatePrivate.h>

@class UIViewController, SKUIIPhoneProductPageViewController, SKStoreProductViewController, SKUIStorePageViewController, NSString;

@interface SUSKUIStorePageViewController : SUViewController <SKUIIPhoneProductPageDelegate, SKStoreProductViewControllerDelegatePrivate> {

	UIViewController* _activeChildViewController;
	SKUIIPhoneProductPageViewController* _iphoneProductPageViewController;
	SKStoreProductViewController* _remoteProductViewController;
	SKUIStorePageViewController* _storePageViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)dismissAnimated:(BOOL)arg1 ;
-(id)initWithSection:(id)arg1 ;
-(void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(void)productViewController:(id)arg1 presentProductWithRequest:(id)arg2 animated:(BOOL)arg3 ;
-(void)_loadClientContextWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)iPhoneProductPage:(id)arg1 shouldOpenItem:(id)arg2 ;
-(BOOL)iPhoneProductPage:(id)arg1 shouldOpenURL:(id)arg2 ;
-(void)reloadWithStorePage:(id)arg1 forURL:(id)arg2 ;
-(void)_showProductPageWithPageDictionary:(id)arg1 ;
-(void)_showStorePageWithPageDictionary:(id)arg1 ;
-(void)_setActiveChildViewController:(id)arg1 ;
-(void)_showRemoteViewControllerWithPageDictionary:(id)arg1 ;
-(void)_showIPhoneProductPageWithPage:(id)arg1 clientContext:(id)arg2 ;
@end

