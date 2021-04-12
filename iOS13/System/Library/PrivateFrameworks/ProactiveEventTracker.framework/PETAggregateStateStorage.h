/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/


@interface PETAggregateStateStorage : NSObject
+(id)storageInMemory;
+(id)storageOnDisk:(id)arg1 ;
-(void)reset;
-(void)expand:(unsigned long long)arg1 andRunWithLock:(/*^block*/id)arg2 ;
-(BOOL)resetLocked;
-(void)saveCorruptState;
-(void)runWithLock:(/*^block*/id)arg1 ;
@end

