/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, WLKSubscriptionData;

@interface WLKSubscriptionStore : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	int _subscriptionSyncSubscriptionDataDidChangeNotificationToken;
	WLKSubscriptionData* _subscriptionData;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_connection;
-(id)cachedSubscriptionData;
-(void)fetchSubscriptionData:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchSubscriptionDataDictionary:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)refreshSubscriptionDataIfNeeded;
@end

