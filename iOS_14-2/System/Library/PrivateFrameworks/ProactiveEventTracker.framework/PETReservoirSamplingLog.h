/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/


@protocol PETReservoirSamplingLogStore;
#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
@class NSObject;

@interface PETReservoirSamplingLog : NSObject {

	opaque_pthread_mutex_t _lock;
	NSObject*<PETReservoirSamplingLogStore> _store;
	unsigned _limit;
	SCD_Struct_PE7 _rng;

}
-(void)_gc;
-(void)clear;
-(void)_unlock;
-(BOOL)_lock;
-(id)init;
-(id)initWithStore:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)initWithPath:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)initInMemoryWithLimit:(unsigned long long)arg1 ;
-(BOOL)_readHeader;
-(void)enumerateItemsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateItemsWithBlockLocked:(/*^block*/id)arg1 ;
-(void)_clearLocked;
-(void)enumerateAndClearItemsWithBlock:(/*^block*/id)arg1 ;
-(void)log:(id)arg1 ;
-(void)dealloc;
@end

