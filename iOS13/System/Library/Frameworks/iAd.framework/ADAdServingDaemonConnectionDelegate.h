/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@protocol ADAdServingDaemonConnectionDelegate <NSObject>
@optional
-(BOOL)shouldConnectToAdServingDaemon;
-(void)adServingDaemonConnectionEstablished;
-(void)adServingDaemonConnectionLost;

@required
-(void)configureConnection:(id)arg1;
-(id)adServingDaemonMachServiceName;

@end

