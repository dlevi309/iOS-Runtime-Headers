/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKUIClientProductPageViewController.h>

@class SKStoreProductViewController, NSString;

@interface SKRemoteProductViewController : _UIRemoteViewController <SKUIClientProductPageViewController> {

	SKStoreProductViewController* _productViewController;

}

@property (assign,nonatomic,__weak) SKStoreProductViewController * productViewController;              //@synthesize productViewController=_productViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setStatusBarHidden:(id)arg1 withAnimation:(id)arg2 ;
-(void)setStatusBarStyle:(id)arg1 animated:(id)arg2 ;
-(void)didFinish;
-(void)setProductViewController:(SKStoreProductViewController *)arg1 ;
-(void)didFinishWithResult:(id)arg1 ;
-(void)didFinishDismissal;
-(void)didReceiveTitle:(id)arg1 ;
-(void)loadDidFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)presentPageWithRequest:(id)arg1 animated:(id)arg2 ;
-(void)promptForStarRating;
-(SKStoreProductViewController *)productViewController;
@end

