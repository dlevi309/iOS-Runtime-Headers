/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKUIClientAccountPageViewController.h>

@class SKAccountPageViewController, NSString;

@interface SKRemoteAccountPageViewController : _UIRemoteViewController <SKUIClientAccountPageViewController> {

	SKAccountPageViewController* _accountPageViewController;

}

@property (assign,nonatomic,__weak) SKAccountPageViewController * accountPageViewController;              //@synthesize accountPageViewController=_accountPageViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id)disconnect;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)didPrepareWithResult:(id)arg1 error:(id)arg2 ;
-(void)didFinishLoading;
-(void)dismissViewControllerWithResult:(id)arg1 error:(id)arg2 ;
-(void)financeInterruptionResolved:(BOOL)arg1 ;
-(void)overrideCreditCardPresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2 ;
-(void)overrideRedeemCameraWithCompletion:(/*^block*/id)arg1 ;
-(void)setBridgedNavigationItemWithOptions:(id)arg1 ;
-(void)pushBridgedViewControllerAnimated:(BOOL)arg1 options:(id)arg2 ;
-(void)popBridgedViewControllersToIndex:(unsigned long long)arg1 ;
-(void)presentBridgedViewController;
-(void)dismissBridgedViewController;
-(SKAccountPageViewController *)accountPageViewController;
-(void)setAccountPageViewController:(SKAccountPageViewController *)arg1 ;
@end

