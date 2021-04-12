/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_willChange;
-(void)_didChange;
-(void)enumerateObserversUsingBlock:(/*^block*/id)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)registerChangeObserver:(id)arg1 context:(void*)arg2 ;
-(id)mutableChangeObject;
-(void)_observersQueue_copyChangeObserversForWriteIfNeeded;
-(void)willPerformChanges;
-(void)didPerformChanges;
-(void)_publishChanges;
-(void)didPublishChanges;
-(void)_applyPendingChanges;
-(void)unregisterChangeObserver:(id)arg1 context:(void*)arg2 ;
-(void)signalChange:(unsigned long long)arg1 ;
-(unsigned long long)currentChanges;
@end

