/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
*/


@protocol OS_nw_path_monitor, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface FLNetworkObserver : NSObject {

	NSObject*<OS_nw_path_monitor> _pathMonitor;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSMutableDictionary* _invocationByObserver;
	BOOL _isNetworkReachable;
	BOOL _isWiFiEnabled;

}

@property (readonly) BOOL isNetworkReachable; 
@property (readonly) BOOL isAirplaneModeActiveWithoutWiFi; 
+(id)sharedNetworkObserver;
-(BOOL)isNetworkReachable;
-(id)init;
-(void)disableAirplaneMode;
-(void)_startPathMonitor;
-(void)_stopPathMonitor;
-(void)_networkReachabilityDidChange;
-(id)_init;
-(void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2 ;
-(BOOL)_isWiFiEnabled;
-(void)dealloc;
-(void)removeNetworkReachableObserver:(id)arg1 ;
-(BOOL)isAirplaneModeActiveWithoutWiFi;
-(id)addNetworkReachableBlock:(/*^block*/id)arg1 ;
@end

