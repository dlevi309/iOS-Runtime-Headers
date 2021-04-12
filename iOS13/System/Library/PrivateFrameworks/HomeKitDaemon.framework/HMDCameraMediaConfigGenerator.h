/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@interface HMDCameraMediaConfigGenerator : HMFObject
-(BOOL)extractSelectedConfigFromProtocolParameters:(id)arg1 videoStreamConfig:(id*)arg2 audioStreamConfig:(id*)arg3 ;
-(BOOL)extractReselectedConfigFromVideoTier:(id)arg1 videoStreamConfig:(id*)arg2 ;
-(BOOL)_loadAVCVideoStreamConfig:(id)arg1 protocolParameters:(id)arg2 ;
-(BOOL)_loadAVCAudioStreamConfig:(id)arg1 protocolParameters:(id)arg2 ;
-(BOOL)_loadConfig:(id)arg1 cipherCuite:(id)arg2 ;
-(void)_loadConfig:(id)arg1 sendSrtpParameters:(id)arg2 receiveSrtpParameters:(id)arg3 ;
-(void)_loadMiscConfig:(id)arg1 ;
@end

