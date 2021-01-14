/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDIDSMessageCenterDelegate <NSObject>
@optional
-(void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifierForResponse:(id)arg2;
-(void)messageCenter:(id)arg1 activeDeviceDidChange:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3;
-(void)messageCenter:(id)arg1 didReceiveUnknownRequest:(id)arg2;

@end

