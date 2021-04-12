/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCCacheCoordinatorDelegate <NSObject>
@optional
-(unsigned long long)cacheCoordinatorPreemptiveFlushSize:(id)arg1;

@required
-(unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
-(void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;

@end

