/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


#import <MobileTimer/MobileTimer-Structs.h>
@class NSMutableArray, MTAlarm;

@interface MTAlarmCache : NSObject {

	BOOL _needsUpdate;
	os_unfair_lock_s _cacheLock;
	/*^block*/id _updateBlock;
	NSMutableArray* _orderedAlarms;
	MTAlarm* _sleepAlarm;
	MTAlarm* _nextAlarm;

}

@property (nonatomic,copy) id updateBlock;                                //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedAlarms;              //@synthesize orderedAlarms=_orderedAlarms - In the implementation block
@property (nonatomic,retain) MTAlarm * sleepAlarm;                        //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
@property (nonatomic,retain) MTAlarm * nextAlarm;                         //@synthesize nextAlarm=_nextAlarm - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                            //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s cacheLock;                  //@synthesize cacheLock=_cacheLock - In the implementation block
-(BOOL)needsUpdate;
-(id)updateBlock;
-(void)setUpdateBlock:(id)arg1 ;
-(id)initWithUpdateBlock:(/*^block*/id)arg1 ;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(os_unfair_lock_s)cacheLock;
-(void)setCacheLock:(os_unfair_lock_s)arg1 ;
-(MTAlarm *)sleepAlarm;
-(void)_withLock:(/*^block*/id)arg1 ;
-(MTAlarm *)nextAlarm;
-(NSMutableArray *)orderedAlarms;
-(void)setOrderedAlarms:(NSMutableArray *)arg1 ;
-(void)setSleepAlarm:(MTAlarm *)arg1 ;
-(BOOL)_isUpdateNeeded;
-(void)_getCachedAlarmsWithCompletion:(/*^block*/id)arg1 doSynchronous:(BOOL)arg2 ;
-(void)markNeedsUpdate;
-(void)getCachedAlarmsWithCompletion:(/*^block*/id)arg1 ;
-(void)getCachedAlarmsSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)setNextAlarm:(MTAlarm *)arg1 ;
@end

