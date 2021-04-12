/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/


@protocol CWFPublicWiFiXPCRequestProtocol
@required
-(void)startMonitoringEvent:(id)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopMonitoringEvent:(id)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryInterfaceNamesWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySSIDWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySSIDHashWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryBSSIDWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryBSSIDHashWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;

@end

