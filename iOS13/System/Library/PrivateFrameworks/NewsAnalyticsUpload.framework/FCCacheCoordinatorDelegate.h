/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
*/


@protocol FCCacheCoordinatorDelegate <NSObject>
@optional
-(unsigned long long)cacheCoordinatorPreemptiveFlushSize:(id)arg1;

@required
-(unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
-(void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;

@end

