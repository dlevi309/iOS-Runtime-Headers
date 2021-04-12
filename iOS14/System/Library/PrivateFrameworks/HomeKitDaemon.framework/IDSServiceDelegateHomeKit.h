/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol IDSServiceDelegateHomeKit <IDSServiceDelegate>
@optional
-(void)service:(id)arg1 account:(id)arg2 incomingAccessoryData:(id)arg3 fromAccessoryID:(id)arg4 context:(id)arg5;
-(void)service:(id)arg1 account:(id)arg2 incomingAccessoryReportMessage:(id)arg3 controllerID:(id)arg4 accessoryID:(id)arg5 context:(id)arg6;
-(void)homeKitIDExpired:(id)arg1;
-(void)service:(id)arg1 maxHomeKitPayloadSizeChanged:(long long)arg2;

@end

