/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@interface SKProductStorePromotionController : NSObject
+(id)defaultController;
-(void)_fetchProductsForPromotionOrder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchStorePromotionVisibilityForProduct:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateStorePromotionVisibility:(long long)arg1 forProduct:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchStorePromotionOrderWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateStorePromotionOrder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

