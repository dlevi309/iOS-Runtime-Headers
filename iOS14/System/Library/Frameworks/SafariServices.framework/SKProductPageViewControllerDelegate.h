/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SKProductPageViewControllerDelegate <NSObject>
@optional
-(void)productPage:(id)arg1 didFailLoadWithError:(id)arg2;
-(void)productPageDidFinishLoad:(id)arg1;
-(void)productPage:(id)arg1 didFinishWithResult:(long long)arg2;
-(void)productPage:(id)arg1 didReceiveTitle:(id)arg2;
-(void)productPage:(id)arg1 presentProductPage:(id)arg2 animated:(BOOL)arg3;
-(void)productPage:(id)arg1 didFinishPurchase:(id)arg2 withError:(id)arg3;
-(void)productPage:(id)arg1 purchaseBatchFailedWithError:(id)arg2;
-(void)productPage:(id)arg1 willMakePurchases:(id)arg2;

@end

