/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <AppStoreKit/AppStoreKit-Structs.h>
#import <libobjc.A.dylib/AMSUIDynamicViewControllerDelegate.h>

@interface AppStoreKit.DynamicViewControllerDelegate : NSObject <AMSUIDynamicViewControllerDelegate> {

	 subscriptionManager;
	 purchaseSuccessHandler;
	 purchaseFailureHandler;
	 didDismissHandler;
	 contentViewConstructor;

}
-(id)init;
-(void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3 ;
-(id)dynamicViewController:(id)arg1 contentViewWithDictionary:(id)arg2 frame:(CGRect)arg3 ;
-(void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3 ;
@end

