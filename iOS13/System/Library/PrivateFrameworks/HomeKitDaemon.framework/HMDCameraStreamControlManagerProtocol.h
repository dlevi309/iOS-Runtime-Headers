/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class HMDCameraStreamMetrics;


@protocol HMDCameraStreamControlManagerProtocol <NSObject>
@property (nonatomic,readonly) HMDCameraStreamMetrics * streamMetrics; 
@required
-(void)startStream:(id)arg1;
-(void)updateAudioSetting:(unsigned long long)arg1;
-(void)updateAudioVolume:(id)arg1 callback:(/*^block*/id)arg2;
-(void)negotiateStream;
-(void)reconfigureStream:(id)arg1;
-(void)stopStream:(id)arg1;
-(void)remoteSetup:(id)arg1;
-(HMDCameraStreamMetrics *)streamMetrics;

@end

