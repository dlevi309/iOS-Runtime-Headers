/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


#import <MobileTimer/MobileTimer-Structs.h>
@class NSMutableArray, MTAlarm;

@interface MTAlarmCache : NSObject {

	BOOL _needsUpdate;
	os_unfair_lock_s _cacheLock;
	/*^block*/id _updateBlock;
	NSMutableArray* _orderedAlarms;
	NSMutableArray* _sleepAlarms;
	MTAlarm* _nextAlarm;

}

@property (nonatomic,copy) id updateBlock;                                //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedAlarms;              //@synthesize orderedAlarms=_orderedAlarms - In the implementation block
@property (nonatomic,retain) NSMutableArray * sleepAlarms;                //@synthesize sleepAlarms=_sleepAlarms - In the implementation block
@property (nonatomic,retain) MTAlarm * nextAlarm;                         //@synthesize nextAlarm=_nextAlarm - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                            //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s cacheLock;                  //@synthesize cacheLock=_cacheLock - In the implementation block
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(BOOL)needsUpdate;
-(MTAlarm *)nextAlarm;
-(void)getCachedAlarmsSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)setSleepAlarms:(NSMutableArray *)arg1 ;
-(void)markNeedsUpdate;
-(void)setNextAlarm:(MTAlarm *)arg1 ;
-(void)setOrderedAlarms:(NSMutableArray *)arg1 ;
-(os_unfair_lock_s)cacheLock;
-(NSMutableArray *)sleepAlarms;
-(id)initWithUpdateBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)orderedAlarms;
-(void)_getCachedAlarmsWithCompletion:(/*^block*/id)arg1 doSynchronous:(BOOL)arg2 ;
-(void)getCachedAlarmsWithCompletion:(/*^block*/id)arg1 ;
-(void)setUpdateBlock:(id)arg1 ;
-(id)updateBlock;
-(BOOL)_isUpdateNeeded;
-(void)setCacheLock:(os_unfair_lock_s)arg1 ;
@end

