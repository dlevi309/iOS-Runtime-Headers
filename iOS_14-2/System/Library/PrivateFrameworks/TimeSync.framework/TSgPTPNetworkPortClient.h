/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@protocol TSgPTPNetworkPortClient <NSObject>
@optional
-(void)didTimeoutOnMACLookupForPort:(id)arg1;
-(void)didSyncTimeoutForPort:(id)arg1;
-(void)didSyncTimeoutWithMean:(unsigned long long)arg1 median:(unsigned long long)arg2 standardDeviation:(unsigned long long)arg3 minimum:(unsigned long long)arg4 maximum:(unsigned long long)arg5 numberOfSamples:(unsigned)arg6 forPort:(id)arg7;
-(void)didChangeASCapable:(BOOL)arg1 forPort:(id)arg2;
-(void)didChangeAdministrativeEnable:(BOOL)arg1 forPort:(id)arg2;
-(void)didTerminateServiceForPort:(id)arg1;

@end

