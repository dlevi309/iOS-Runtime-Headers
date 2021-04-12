/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_stopMonitoring;
-(void)addObserver:(id)arg1 ;
-(BOOL)isSpringboardStarted;
-(void)enumerateObservers:(/*^block*/id)arg1 ;
-(void)didReceiveSpringboardStarted:(BOOL)arg1 ;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)_checkSpringBoardStarted;
-(void)dealloc;
@end

