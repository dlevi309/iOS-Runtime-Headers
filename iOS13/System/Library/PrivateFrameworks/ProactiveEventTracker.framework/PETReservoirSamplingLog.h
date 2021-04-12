/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/


@protocol PETReservoirSamplingLogStore;
#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
@class NSObject;

@interface PETReservoirSamplingLog : NSObject {

	opaque_pthread_mutex_t _lock;
	NSObject*<PETReservoirSamplingLogStore> _store;
	unsigned _limit;
	SCD_Struct_PE6 _rng;

}
-(id)init;
-(void)dealloc;
-(void)clear;
-(BOOL)_lock;
-(void)log:(id)arg1 ;
-(void)_unlock;
-(id)initWithStore:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)initWithPath:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)initInMemoryWithLimit:(unsigned long long)arg1 ;
-(BOOL)_readHeader;
-(void)_gc;
-(void)enumerateItemsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateItemsWithBlockLocked:(/*^block*/id)arg1 ;
-(void)_clearLocked;
-(void)enumerateAndClearItemsWithBlock:(/*^block*/id)arg1 ;
@end

