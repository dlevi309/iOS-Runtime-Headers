/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <libobjc.A.dylib/SKProductsRequestDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface SKProductStorePromotionController : NSObject <SKProductsRequestDelegate> {

	NSMutableArray* _fetchOrderProductsRequests;
	NSMutableArray* _fetchOrderCompletions;
	NSMutableArray* _fetchOrderOrders;
	NSObject*<OS_dispatch_queue> _fetchOrderQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultController;
-(id)init;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)fetchStorePromotionVisibilityForProduct:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateStorePromotionVisibility:(long long)arg1 forProduct:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchStorePromotionOrderWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateStorePromotionOrder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

