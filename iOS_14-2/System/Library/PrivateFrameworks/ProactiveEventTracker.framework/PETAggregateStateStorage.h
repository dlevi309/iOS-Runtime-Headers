/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/


@interface PETAggregateStateStorage : NSObject
+(id)storageInMemory;
+(id)storageOnDisk:(id)arg1 ;
-(void)expand:(unsigned long long)arg1 andRunWithLock:(/*^block*/id)arg2 ;
-(BOOL)resetLocked;
-(void)reset;
-(void)runWithLock:(/*^block*/id)arg1 ;
-(void)saveCorruptState;
@end

