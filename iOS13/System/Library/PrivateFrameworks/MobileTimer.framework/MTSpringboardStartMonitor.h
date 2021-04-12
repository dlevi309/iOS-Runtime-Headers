/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol OS_dispatch_queue;
@class MTObserverStore, NSObject;

@interface MTSpringboardStartMonitor : NSObject {

	int _notifyToken;
	BOOL _isSpringBoardStarted;
	MTObserverStore* _observers;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_stopMonitoring;
-(BOOL)_checkSpringBoardStarted;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)didReceiveSpringboardStarted:(BOOL)arg1 ;
-(void)enumerateObservers:(/*^block*/id)arg1 ;
-(BOOL)isSpringboardStarted;
@end

