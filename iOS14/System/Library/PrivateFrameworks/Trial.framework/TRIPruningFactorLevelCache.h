/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <libobjc.A.dylib/TRIFactorLevelCaching.h>

@class _PASLock, _PASSimpleCoalescingTimer;

@interface TRIPruningFactorLevelCache : NSObject <TRIFactorLevelCaching> {

	_PASLock* _lock;
	_PASSimpleCoalescingTimer* _pruningTimer;
	double _pruningDelaySeconds;

}
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)init;
-(void)enumerateFactorLevelsUsingBlock:(/*^block*/id)arg1 ;
-(void)_populateCacheForRequiredKey:(id)arg1 guardedData:(id)arg2 ;
-(id)factorLevelCurrentlyCachedForFactorName:(id)arg1 ;
-(void)pruneSynchronously;
-(id)initWithPruningDelaySeconds:(double)arg1 loadFactorLevels:(/*^block*/id)arg2 ;
@end

