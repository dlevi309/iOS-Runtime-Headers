/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDMRSetEndpointVolumeOperationExternalObjectInterface.h>

@interface HMDMRSetEndpointVolumeOperationDefaultExternalObjectInterface : HMFObject <HMDMRSetEndpointVolumeOperationExternalObjectInterface>
-(id)createMPCAssistantDiscovery;
-(id)createMPCAssistantConnection;
-(id)copyMRAVEndpointOutputDevices:(void*)arg1 ;
-(id)copyMRAVOutputDeviceUniqueIdentifier:(void*)arg1 ;
-(void)setMRAVOutputDeviceVolume:(float)arg1 endpoint:(void*)arg2 outputDeviceUID:(id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

