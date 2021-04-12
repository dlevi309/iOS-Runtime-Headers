/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/


@protocol SRDaemonNotificationDelegate <NSObject>
@optional
-(void)daemonNotificationDaemonDidResetDatastore:(id)arg1;
-(void)daemonNotificationDaemonDidChangeTimeSignificantly:(id)arg1;

@required
-(void)daemonNotificationDaemonDidStart:(id)arg1;

@end

