/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface CSEventMonitor : NSObject {

	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_stopMonitoring;
-(void)addObserver:(id)arg1 ;
-(void)enumerateObservers:(/*^block*/id)arg1 ;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)notifyObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(unsigned long long)type;
-(void)dealloc;
-(void)enumerateObserversInQueue:(/*^block*/id)arg1 ;
@end

