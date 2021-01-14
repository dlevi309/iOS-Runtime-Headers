/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@protocol ADAdServingDaemonConnectionDelegate <NSObject>
@optional
-(BOOL)shouldConnectToAdServingDaemon;
-(void)adServingDaemonConnectionLost;
-(void)adServingDaemonConnectionEstablished;

@required
-(id)adServingDaemonMachServiceName;
-(void)configureConnection:(id)arg1;

@end

