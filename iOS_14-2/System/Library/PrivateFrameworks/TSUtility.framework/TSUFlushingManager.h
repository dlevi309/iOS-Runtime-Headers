/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@protocol TSUFlushable;
#import <TSUtility/TSUtility-Structs.h>
@class TSURetainedPointerKeyDictionary, TSUPointerKeyDictionary, NSCondition, TSUMemoryWatcher, NSThread;

@interface TSUFlushingManager : NSObject {

	TSURetainedPointerKeyDictionary* _objects;
	set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *> >* _sortedObjects;
	set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *> >* _sortedNewObjects;
	TSUPointerKeyDictionary* _inactiveObjects;
	unsigned _clock;
	BOOL _alwaysFlushing;
	BOOL _stopFlushing;
	BOOL _stopFlushingWhenQueueEmpty;
	BOOL _isFlushing;
	id<TSUFlushable> _flushingObject;
	NSCondition* _cond;
	NSCondition* _isFlushingCond;
	TSUMemoryWatcher* _memoryWatcher;
	NSThread* _bgThread;
	unsigned long long _backgroundTransitionTaskId;
	unsigned long long _activeBgThreadTask;

}
+(id)sharedManager;
+(id)_singletonAlloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(oneway void)release;
-(id)init;
-(id)retain;
-(void)willEnterForeground;
-(id)autorelease;
-(void)didEnterBackground;
-(void)addObject:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(unsigned long long)retainCount;
-(void)removeObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)_startFlushingObjects;
-(void)_stopFlushingObjects;
-(void)advanceClock;
-(void)_didUseObject:(id)arg1 ;
-(TSUFlushableObjectInfo*)eraseInfoForObject:(id)arg1 ;
-(void)insertObjectInfo:(TSUFlushableObjectInfo*)arg1 ;
-(void)_flushAllEligible;
-(void)_bgTaskStarted;
-(void)_backgroundThread:(id)arg1 ;
-(void)_bgThreadActive;
-(void)_bgThreadInactive;
-(void)_bgTaskFinished;
-(BOOL)isNewObject:(TSUFlushableObjectInfo*)arg1 ;
-(void)transferNewObjects;
-(void)doneWithObject:(id)arg1 ;
-(void)unsafeToFlush:(id)arg1 ;
-(void)safeToFlush:(id)arg1 wasAccessed:(BOOL)arg2 ;
-(BOOL)controlsActiveObject:(id)arg1 ;
-(BOOL)controlsInactiveObject:(id)arg1 ;
-(void)protectObject:(id)arg1 ;
-(void)stopProtectingObject:(id)arg1 ;
-(void)memoryLevelIncreased:(int)arg1 was:(int)arg2 ;
-(void)memoryLevelDecreased:(int)arg1 was:(int)arg2 ;
@end

