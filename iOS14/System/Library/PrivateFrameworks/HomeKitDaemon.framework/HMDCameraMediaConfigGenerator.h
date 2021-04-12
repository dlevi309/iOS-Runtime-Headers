/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

