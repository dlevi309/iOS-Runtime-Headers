/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProactiveEventTracker/PETAggregateStateStorage.h>

@class NSMutableData;

@interface PETAggregateStateStorageInMemory : PETAggregateStateStorage {

	NSMutableData* _data;
	opaque_pthread_mutex_t _lock;

}
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)expand:(unsigned long long)arg1 andRunWithLock:(/*^block*/id)arg2 ;
-(BOOL)resetLocked;
-(void)saveCorruptState;
@end

