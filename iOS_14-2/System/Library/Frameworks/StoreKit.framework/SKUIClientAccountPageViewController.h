/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@protocol SKUIClientAccountPageViewController <NSObject>
@required
-(void)didPrepareWithResult:(id)arg1 error:(id)arg2;
-(void)didFinishLoading;
-(void)dismissViewControllerWithResult:(id)arg1 error:(id)arg2;
-(void)financeInterruptionResolved:(BOOL)arg1;
-(void)overrideCreditCardPresentationWithCompletion:(/*^block*/id)arg1;
-(void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;
-(void)overrideRedeemCameraWithCompletion:(/*^block*/id)arg1;
-(void)setBridgedNavigationItemWithOptions:(id)arg1;
-(void)pushBridgedViewControllerAnimated:(BOOL)arg1 options:(id)arg2;
-(void)popBridgedViewControllersToIndex:(unsigned long long)arg1;
-(void)presentBridgedViewController;
-(void)dismissBridgedViewController;

@end

