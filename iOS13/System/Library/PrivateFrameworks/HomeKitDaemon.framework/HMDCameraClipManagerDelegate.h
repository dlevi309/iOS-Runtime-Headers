/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDCameraClipManagerDelegate <NSObject>
@optional
-(void)clipManagerDidBecomeAvailable:(id)arg1;
-(void)clipManagerDidBecomeUnavailable:(id)arg1;
-(BOOL)clipManager:(id)arg1 shouldAddNotificationForSignificantEvent:(id)arg2 withHomePresence:(id)arg3;
-(void)clipManager:(id)arg1 didAddSignificantEventNotification:(id)arg2;
-(void)clipManager:(id)arg1 didDeleteClip:(id)arg2;
-(void)clipManagerDidDisableCloudStorage:(id)arg1;

@end

