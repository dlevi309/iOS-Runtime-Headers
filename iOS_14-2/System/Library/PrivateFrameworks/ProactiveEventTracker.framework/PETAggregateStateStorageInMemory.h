/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)expand:(unsigned long long)arg1 andRunWithLock:(/*^block*/id)arg2 ;
-(BOOL)resetLocked;
-(void)reset;
-(void)saveCorruptState;
-(void)dealloc;
@end

