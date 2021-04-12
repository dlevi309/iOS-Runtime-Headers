/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSMapTable;

@interface ISObservable : NSObject {

	long long _nestedChanges;
	NSMutableArray* _pendingChangeBlocks;
	long long _numAppliedPendingChanges;
	unsigned long long _currentChange;
	BOOL _isEnumeratingObservers;
	NSObject*<OS_dispatch_queue> _observersQueue;
	BOOL _observersQueue_shouldCopyChangeObserversOnWrite;
	NSMapTable* _observersQueue_changeObserversWithContexts;
	BOOL _hasObservers;

}

@property (nonatomic,readonly) BOOL hasObservers;              //@synthesize hasObservers=_hasObservers - In the implementation block
-(id)init;
-(BOOL)hasObservers;
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
-(void)hasObserversDidChange;
-(void)_setHasObservers:(BOOL)arg1 ;
@end

