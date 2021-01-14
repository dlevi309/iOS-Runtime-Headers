/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol OS_dispatch_queue, NSCopying;
@class NSObject, SUScriptSubscriptionStatusResponse, ICMusicSubscriptionStatusMonitor;

@interface SUScriptSubscriptionStatusObserver : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	SUScriptSubscriptionStatusResponse* _lastKnownSubscriptionStatusResponse;
	ICMusicSubscriptionStatusMonitor* _subscriptionStatusMonitor;
	id<NSCopying> _subscriptionStatusMonitorObservationToken;

}
+(id)sharedObserver;
-(id)init;
-(void)_updateWithSubscriptionStatus:(id)arg1 ;
-(void)dealloc;
@end

