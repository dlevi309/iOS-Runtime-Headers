/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <libobjc.A.dylib/SKPaymentTransactionObserver.h>
#import <libobjc.A.dylib/SKPaymentQueueClientDelegate.h>

@interface AppStoreKit.ArcadeSubscriptionManager : NSObject <SKPaymentTransactionObserver, SKPaymentQueueClientDelegate> {

	 paymentQueue;
	 dialogHandler;
	 activeStoreAccountProvider;
	 observers;
	 stateLock;
	 arcadeSubscriptionFamilyId;
	 subscriptionEntitlements;
	 subscriptionState;
	 paymentCallbacks;
	 logger;

}
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2 ;
-(void)handleEngagementRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)entitlementsDidChange;
-(void)dealloc;
@end

