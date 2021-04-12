/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBBiometricMonitorObserver <NSObject>
@optional
-(void)biometricMonitorDataSourceMatchingStarted:(id)arg1;
-(void)biometricMonitorDataSourceMatchingFailed:(id)arg1;
-(void)biometricMonitorDataSourceMatchingSucceeded:(id)arg1;
-(void)biometricMonitorDataSourceMatchingEnded:(id)arg1;
-(void)biometricMonitorDataSourcePresenceDetectionStarted:(id)arg1;
-(void)biometricMonitorDataSourcePresenceDetectionFailed:(id)arg1;
-(void)biometricMonitorDataSourcePresenceDetectionSucceeded:(id)arg1;
-(void)biometricMonitorDataSourcePresenceDetectionEnded:(id)arg1;
-(void)biometricMonitorDataSourcePoseUpdated:(id)arg1;

@end

