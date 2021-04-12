/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/


@protocol IMCloudKitEventHandler <NSObject>
@optional
-(void)cloudKitEventNotificationManager:(id)arg1 didDisableAllDevices:(BOOL)arg2 error:(id)arg3;
-(void)cloudKitEventNotificationManager:(id)arg1 didChangeEnabled:(BOOL)arg2 error:(id)arg3;
-(void)cloudKitEventNotificationManager:(id)arg1 syncStateDidChange:(id)arg2;
-(void)cloudKitEventNotificationManager:(id)arg1 didFetchSyncStatistics:(id)arg2 error:(id)arg3;
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;
-(void)cloudKitEventNotificationManager:(id)arg1 didPerformAdditionalStorageRequiredCheck:(BOOL)arg2 additionalStorageRequired:(unsigned long long)arg3 forAccountId:(id)arg4 error:(id)arg5;

@end

