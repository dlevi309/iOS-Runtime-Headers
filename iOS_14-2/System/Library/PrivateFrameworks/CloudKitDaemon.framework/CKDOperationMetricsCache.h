/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKit/CKSQLite.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CKDOperationMetricsCache : CKSQLite {

	NSObject*<OS_dispatch_queue> _cacheQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheQueue;              //@synthesize cacheQueue=_cacheQueue - In the implementation block
+(id)dbFileName;
+(id)sharedCache;
-(void)setCacheQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(id)_initWithCacheDir:(id)arg1 ;
-(void)flushMetricsToPowerLog;
-(void)addOperationCombinedMetrics:(id)arg1 forOperationID:(id)arg2 operationType:(long long)arg3 operationGroupID:(id)arg4 operationGroupName:(id)arg5 operationGroupQuantity:(unsigned long long)arg6 operationQualityOfService:(long long)arg7 appContainerTuple:(id)arg8 ;
@end

