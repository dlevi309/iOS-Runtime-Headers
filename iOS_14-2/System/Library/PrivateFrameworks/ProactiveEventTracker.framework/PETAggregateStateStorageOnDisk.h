/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)_reserveCapacity:(unsigned)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)expand:(unsigned long long)arg1 andRunWithLock:(/*^block*/id)arg2 ;
-(BOOL)resetLocked;
-(void)_die;
-(void)reset;
-(void)_remapWithFlock:(BOOL)arg1 ;
-(void)saveCorruptState;
-(void)dealloc;
@end

