/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol OS_nw_path_monitor, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface AKNetworkObserver : NSObject {

	NSObject*<OS_nw_path_monitor> _pathMonitor;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSMutableDictionary* _invocationByObserver;
	BOOL _isNetworkReachable;

}

@property (readonly) BOOL isNetworkReachable;              //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
+(id)sharedNetworkObserver;
-(id)init;
-(void)dealloc;
-(BOOL)isNetworkReachable;
-(void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeNetworkReachableObserver:(id)arg1 ;
-(void)_startPathMonitor;
-(void)_stopPathMonitor;
-(void)_networkReachabilityDidChange;
@end

