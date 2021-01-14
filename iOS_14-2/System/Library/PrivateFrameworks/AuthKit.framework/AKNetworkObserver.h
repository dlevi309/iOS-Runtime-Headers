/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isNetworkReachable;
-(id)init;
-(void)_startPathMonitor;
-(void)_stopPathMonitor;
-(void)_networkReachabilityDidChange;
-(void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)dealloc;
-(void)removeNetworkReachableObserver:(id)arg1 ;
@end

