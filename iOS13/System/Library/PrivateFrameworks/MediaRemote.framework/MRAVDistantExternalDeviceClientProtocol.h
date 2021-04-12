/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol MRAVDistantExternalDeviceClientProtocol <NSObject>
@optional
-(void)hostedExternalDeviceVolumeCapabilitiesDidChange:(unsigned)arg1 forEndpointWithIdentifier:(id)arg2 forOutputDeviceWithIdentifier:(id)arg3;

@required
-(void)hostedExternalDeviceConnectionStateDidChange:(unsigned)arg1 withError:(id)arg2;
-(void)hostedExternalDeviceNameDidChange:(id)arg1;
-(void)hostedExternalDeviceDidReceiveCustomData:(id)arg1 withName:(id)arg2;
-(void)hostedExternalDeviceVolumeDidChange:(float)arg1 forEndpointWithIdentifier:(id)arg2 forOutputDeviceWithIdentifier:(id)arg3;
-(void)hostedExternalDeviceEndpointDidChange:(id)arg1;

@end

