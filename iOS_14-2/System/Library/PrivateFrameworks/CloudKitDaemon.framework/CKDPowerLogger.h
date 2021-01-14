/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@interface CKDPowerLogger : NSObject
+(id)sharedLogger;
-(void)registerPowerLoggingXPCActivity;
-(void)cacheOperationCombinedMetrics:(id)arg1 forOperationID:(id)arg2 operationType:(long long)arg3 operationGroupID:(id)arg4 operationGroupName:(id)arg5 operationGroupQuantity:(unsigned long long)arg6 operationQualityOfService:(long long)arg7 appContainerTuple:(id)arg8 ;
-(void)logOperationCombinedMetrics:(id)arg1 forOperationID:(id)arg2 operationType:(long long)arg3 operationGroupID:(id)arg4 operationGroupName:(id)arg5 operationGroupQuantity:(unsigned long long)arg6 operationQualityOfService:(long long)arg7 appContainerTuple:(id)arg8 ;
@end

