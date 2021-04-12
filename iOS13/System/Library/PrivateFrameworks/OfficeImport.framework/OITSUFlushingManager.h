/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol TSUiOSMemoryWarningFlushable;
#import <OfficeImport/OfficeImport-Structs.h>
@class OITSURetainedPointerKeyDictionary, OITSUPointerKeyDictionary, NSCondition, NSThread;

@interface OITSUFlushingManager : NSObject {

	OITSURetainedPointerKeyDictionary* _objects;
	set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *> >* _sortedObjects;
	set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *> >* _sortedNewObjects;
	OITSUPointerKeyDictionary* _inactiveObjects;
	unsigned _clock;
	BOOL _alwaysFlushing;
	BOOL _stopFlushing;
	BOOL _stopFlushingWhenQueueEmpty;
	BOOL _isFlushing;
	id<TSUiOSMemoryWarningFlushable> _flushingObject;
	NSCondition* _cond;
	NSCondition* _isFlushingCond;
	NSThread* _bgThread;
	unsigned long long _backgroundTransitionTaskId;
	unsigned long long _activeBgThreadTask;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedManager;
+(id)_singletonAlloc;
-(id)init;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)willEnterForeground;
-(void)didEnterBackground;
-(void)didReceiveMemoryWarning;
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
@end

