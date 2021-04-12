/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/


#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
@class PETAggregateStateStorage;

@interface PETAggregateState : NSObject {

	PETAggregateStateStorage* _storage;
	SCD_Struct_PE7 _rng;

}
+(unsigned char)hashForString:(id)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(void)incrementCounterBy:(double)arg1 forKey:(const void*)arg2 keyLength:(unsigned short)arg3 ;
-(id)initInMemory;
-(id)init;
-(void)updateDistributionWithValue:(double)arg1 forKey:(id)arg2 maxSampleSize:(unsigned short)arg3 ;
-(id)initWithPath:(id)arg1 ;
-(BOOL)checkIntegrity;
-(void)updateCounterTo:(double)arg1 forKey:(id)arg2 ;
-(void)updateDistributionWithValue:(double)arg1 forKey:(const void*)arg2 keyLength:(unsigned short)arg3 maxSampleSize:(unsigned short)arg4 ;
-(void)updateCounterTo:(double)arg1 forKey:(const void*)arg2 keyLength:(unsigned short)arg3 ;
-(id)description;
-(void)incrementCounterBy:(double)arg1 forKey:(id)arg2 ;
-(void)reset;
-(void)enumerateAndResetCounters:(/*^block*/id)arg1 distributions:(/*^block*/id)arg2 ;
-(void)enumerateCounters:(/*^block*/id)arg1 distributions:(/*^block*/id)arg2 ;
@end

