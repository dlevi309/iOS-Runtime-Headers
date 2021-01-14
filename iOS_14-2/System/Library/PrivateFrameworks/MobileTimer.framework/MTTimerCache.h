/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(MTTimer *)nextTimer;
-(BOOL)needsUpdate;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)getCachedTimersSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)_getCachedTimersWithCompletion:(/*^block*/id)arg1 doSynchronous:(BOOL)arg2 ;
-(void)markNeedsUpdate;
-(os_unfair_lock_s)cacheLock;
-(void)getCachedTimersWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithUpdateBlock:(/*^block*/id)arg1 ;
-(void)setNextTimer:(MTTimer *)arg1 ;
-(void)setUpdateBlock:(id)arg1 ;
-(NSMutableArray *)orderedTimers;
-(id)updateBlock;
-(BOOL)_isUpdateNeeded;
-(void)setCacheLock:(os_unfair_lock_s)arg1 ;
-(void)setOrderedTimers:(NSMutableArray *)arg1 ;
@end

