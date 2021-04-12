/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRConcreteEndpoint.h>

@class AVOutputDeviceGroup;

@interface MRAVConcreteEndpoint : MRConcreteEndpoint {

	AVOutputDeviceGroup* _outputDeviceGroup;

}
+(id)errorWithChangeResult:(id)arg1 outputDevice:(id)arg2 ;
-(id)initWithDesignatedGroupLeader:(id)arg1 outputDevices:(id)arg2 ;
-(void)handleVolumeChangedNotification:(id)arg1 ;
-(void)setExternalDevice:(id)arg1 ;
-(void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)registerVolumeNotifications;
-(void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(float)volumeForOutputDevice:(id)arg1 error:(id*)arg2 ;
-(void)addOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)volumeControlCapabilitiesForOutputDevice:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleVolumeCapabilityChangedNotification:(id)arg1 ;
-(id)initWithOutputDeviceGroup:(id)arg1 groupLeader:(id)arg2 outputDevices:(id)arg3 ;
-(void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

