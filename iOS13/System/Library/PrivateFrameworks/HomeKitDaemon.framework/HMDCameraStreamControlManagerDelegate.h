/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDCameraStreamControlManagerDelegate <NSObject>
@required
-(void)streamControlManagerDidNegotiateStream:(id)arg1 selectedParameters:(id)arg2;
-(void)streamControlManagerDidSetupRemoteConnection:(id)arg1;
-(void)streamControlManagerDidStartStream:(id)arg1 slotIdentifier:(id)arg2;
-(void)streamControlManagerDidReceiveFirstFrame:(id)arg1 audioStreamSetting:(unsigned long long)arg2 aspectRatio:(id)arg3 slotIdentifier:(id)arg4;
-(void)streamControlManagerDidReconfigureStream:(id)arg1;
-(void)streamControlManagerDidStopStreamForSessionID:(id)arg1 error:(id)arg2;
-(void)streamControlManager:(id)arg1 didFail:(id)arg2;

@end

