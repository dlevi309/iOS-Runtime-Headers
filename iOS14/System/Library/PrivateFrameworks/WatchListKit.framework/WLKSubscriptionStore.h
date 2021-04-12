/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_connection;
-(void)dealloc;
-(id)cachedSubscriptionData;
-(void)fetchSubscriptionData:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setIsSubscriptionSyncInProgress:(BOOL)arg1 ;
-(BOOL)_isSubscriptionSyncInProgress;
-(void)refreshSubscriptionDataIfNeeded;
@end

