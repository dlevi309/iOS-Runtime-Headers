/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSHashTable;

@interface ATXMemoryPressureMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_source> _memoryMonitoringSource;
	NSHashTable* _observers;

}
+(id)sharedInstance;
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(id)init;
-(void)_notifyObserversOfMemoryPressure;
-(void)dealloc;
@end

