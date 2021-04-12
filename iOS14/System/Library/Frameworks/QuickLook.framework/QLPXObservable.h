/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSMapTable;

@interface QLPXObservable : NSObject {

	long long _nestedChanges;
	NSMutableArray* _pendingChangeBlocks;
	long long _numAppliedPendingChanges;
	unsigned long long _currentChange;
	BOOL _isEnumeratingObservers;
	NSObject*<OS_dispatch_queue> _observersQueue;
	BOOL _observersQueue_shouldCopyChangeObserversOnWrite;
	NSMapTable* _observersQueue_changeObserversWithContexts;

}

@property (nonatomic,readonly) unsigned long long currentChanges; 
-(id)init;
-(void)_observersQueue_copyChangeObserversForWriteIfNeeded;
-(void)didPerformChanges;
-(void)willPerformChanges;
-(unsigned long long)currentChanges;
-(void)registerChangeObserver:(id)arg1 context:(void*)arg2 ;
-(void)signalChange:(unsigned long long)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 context:(void*)arg2 ;
-(void)enumerateObserversUsingBlock:(/*^block*/id)arg1 ;
-(id)mutableChangeObject;
-(void)didPublishChanges;
-(void)_willChange;
-(void)_didChange;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_applyPendingChanges;
-(void)_publishChanges;
@end

