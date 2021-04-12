/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDStreamingManagerDelegate <NSObject>
@optional
-(void)streamingManagerDidStartRelay:(id)arg1;

@required
-(void)streamingManager:(id)arg1 didStartStream:(id)arg2 slotIdentifier:(id)arg3;
-(void)streamingManagerDidReceiveFirstFrame:(id)arg1 audioStreamSetting:(unsigned long long)arg2 aspectRatio:(id)arg3 slotIdentifier:(id)arg4;
-(void)streamingManagerDidStopStream:(id)arg1 error:(id)arg2;
-(void)streamingManagerDidNetworkImprove:(id)arg1;
-(void)streamingManagerDidNetworkDeteriorate:(id)arg1;
-(void)streamingManagerDidUpdateConfiguration:(id)arg1;

@end

