/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@protocol OS_dispatch_queue, SKPaymentQueueDelegate;
@class NSString, SKPaymentQueueClient, NSMutableDictionary, NSMutableArray, NSObject, SKXPCConnection;

@interface SKPaymentQueueInternal : NSObject {

	BOOL _checkedIn;
	BOOL _isRedemptionSheetShowing;
	BOOL _isRefreshing;
	BOOL _restoreFinishedDuringRefresh;
	BOOL _restoringCompletedTransactions;
	NSString* _identifier;
	SKPaymentQueueClient* _client;
	NSMutableDictionary* _downloads;
	NSMutableArray* _localTransactions;
	NSMutableArray* _transactions;
	NSMutableArray* _weakObservers;
	NSObject*<OS_dispatch_queue> _observerQueue;
	SKXPCConnection* _requestConnection;
	SKXPCConnection* _responseConnection;
	id<SKPaymentQueueDelegate> _delegate;

}
-(id)init;
-(void)dealloc;
@end

