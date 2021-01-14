/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface AXPhoenixEventMonitor : NSObject {

	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSHashTable * observers;                         //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)_stopMonitoring;
-(void)addObserver:(id)arg1 ;
-(void)enumerateObservers:(/*^block*/id)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)notifyObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)enumerateObserversInQueue:(/*^block*/id)arg1 ;
@end

