/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKUIClientStorePageViewController.h>

@class SKStorePageViewController, NSString;

@interface SKRemoteStorePageViewController : _UIRemoteViewController <SKUIClientStorePageViewController> {

	SKStorePageViewController* _storePageViewController;

}

@property (assign,nonatomic,__weak) SKStorePageViewController * storePageViewController;              //@synthesize storePageViewController=_storePageViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setStorePageViewController:(SKStorePageViewController *)arg1 ;
-(SKStorePageViewController *)storePageViewController;
-(void)showProductPageWithItemIdentifier:(id)arg1 ;
@end

