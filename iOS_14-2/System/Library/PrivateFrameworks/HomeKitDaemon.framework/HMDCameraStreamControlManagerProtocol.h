/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

