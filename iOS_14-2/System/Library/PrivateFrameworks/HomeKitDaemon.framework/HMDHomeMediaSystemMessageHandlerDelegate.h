/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDHomeMediaSystemMessageHandlerDelegate
@required
-(void)messageHandlerAddMediaSystem:(id)arg1 configuredName:(id)arg2 leftUUID:(id)arg3 leftAccessoryUUID:(id)arg4 rightUUID:(id)arg5 rightAccessoryUUID:(id)arg6 builderSession:(id)arg7 completion:(/*^block*/id)arg8;
-(void)messageHandlerRemoveMediaSystem:(id)arg1 builderSession:(id)arg2 completion:(/*^block*/id)arg3;
-(void)messageHandlerUpdateMediaSystem:(id)arg1 configuredName:(id)arg2 leftUUID:(id)arg3 leftAccessoryUUID:(id)arg4 rightUUID:(id)arg5 rightAccessoryUUID:(id)arg6 builderSession:(id)arg7 completion:(/*^block*/id)arg8;

@end

