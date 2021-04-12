/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


#import <MobileTimer/MobileTimer-Structs.h>
@class NSMutableArray, MTTimer;

@interface MTTimerCache : NSObject {

	BOOL _needsUpdate;
	os_unfair_lock_s _cacheLock;
	/*^block*/id _updateBlock;
	NSMutableArray* _orderedTimers;
	MTTimer* _nextTimer;

}

@property (nonatomic,copy) id updateBlock;                                //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedTimers;              //@synthesize orderedTimers=_orderedTimers - In the implementation block
@property (nonatomic,retain) MTTimer * nextTimer;                         //@synthesize nextTimer=_nextTimer - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                            //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s cacheLock;                  //@synthesize cacheLock=_cacheLock - In the implementation block
-(BOOL)needsUpdate;
-(id)updateBlock;
-(void)setUpdateBlock:(id)arg1 ;
-(id)initWithUpdateBlock:(/*^block*/id)arg1 ;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(os_unfair_lock_s)cacheLock;
-(void)setCacheLock:(os_unfair_lock_s)arg1 ;
-(MTTimer *)nextTimer;
-(NSMutableArray *)orderedTimers;
-(void)setOrderedTimers:(NSMutableArray *)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(BOOL)_isUpdateNeeded;
-(void)markNeedsUpdate;
-(void)_getCachedTimersWithCompletion:(/*^block*/id)arg1 doSynchronous:(BOOL)arg2 ;
-(void)getCachedTimersWithCompletion:(/*^block*/id)arg1 ;
-(void)getCachedTimersSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)setNextTimer:(MTTimer *)arg1 ;
@end

