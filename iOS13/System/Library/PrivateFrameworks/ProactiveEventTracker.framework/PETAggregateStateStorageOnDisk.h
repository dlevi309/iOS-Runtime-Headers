/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProactiveEventTracker/PETAggregateStateStorage.h>

@class NSString;

@interface PETAggregateStateStorageOnDisk : PETAggregateStateStorage {

	NSString* _path;
	int _fd;
	void* _bytes;
	unsigned long long _mappedLen;
	AB _dead;
	opaque_pthread_mutex_t _localLock;

}
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)reset;
-(void)expand:(unsigned long long)arg1 andRunWithLock:(/*^block*/id)arg2 ;
-(BOOL)resetLocked;
-(void)saveCorruptState;
-(void)_remapWithFlock:(BOOL)arg1 ;
-(void)_die;
-(unsigned long long)_reserveCapacity:(unsigned)arg1 ;
@end

