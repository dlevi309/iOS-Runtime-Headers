/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSNumber, SUScriptSubscriptionStatusResponse;

@interface SUScriptSubscriptionStatusObserver : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSNumber* _lastKnownActiveAccountUniqueIdentifier;
	SUScriptSubscriptionStatusResponse* _lastKnownSubscriptionStatusResponse;

}
+(id)sharedObserver;
-(id)init;
-(void)dealloc;
-(void)_handleAccountStoreDidChangeNotification:(id)arg1 ;
-(void)_handleSubscriptionStatusDidChangeNotification:(id)arg1 ;
@end

