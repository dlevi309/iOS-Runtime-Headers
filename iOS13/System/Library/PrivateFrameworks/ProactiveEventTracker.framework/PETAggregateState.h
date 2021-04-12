/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/


#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
@class PETAggregateStateStorage;

@interface PETAggregateState : NSObject {

	PETAggregateStateStorage* _storage;
	SCD_Struct_PE6 _rng;

}
+(unsigned char)hashForString:(id)arg1 ;
-(id)init;
-(id)description;
-(id)initWithPath:(id)arg1 ;
-(void)reset;
-(id)initWithStorage:(id)arg1 ;
-(id)initInMemory;
-(void)incrementCounterBy:(double)arg1 forKey:(const void*)arg2 keyLength:(unsigned short)arg3 ;
-(void)updateDistributionWithValue:(double)arg1 forKey:(const void*)arg2 keyLength:(unsigned short)arg3 maxSampleSize:(unsigned short)arg4 ;
-(void)incrementCounterBy:(double)arg1 forKey:(id)arg2 ;
-(void)updateDistributionWithValue:(double)arg1 forKey:(id)arg2 maxSampleSize:(unsigned short)arg3 ;
-(void)enumerateCounters:(/*^block*/id)arg1 distributions:(/*^block*/id)arg2 ;
-(void)enumerateAndResetCounters:(/*^block*/id)arg1 distributions:(/*^block*/id)arg2 ;
-(BOOL)checkIntegrity;
@end

