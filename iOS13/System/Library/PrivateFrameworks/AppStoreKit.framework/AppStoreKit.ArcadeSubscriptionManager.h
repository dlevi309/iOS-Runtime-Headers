/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <libobjc.A.dylib/SKPaymentTransactionObserver.h>

@interface AppStoreKit.ArcadeSubscriptionManager : NSObject <SKPaymentTransactionObserver> {

	 paymentQueue;
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
-(id)init;
-(void)dealloc;
-(void)entitlementsDidChange;
@end

