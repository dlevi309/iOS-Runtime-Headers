/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol MRAVDistantExternalDeviceClientProtocol <NSObject>
@optional
-(void)hostedExternalDeviceVolumeCapabilitiesDidChange:(unsigned)arg1 forEndpointWithIdentifier:(id)arg2 forOutputDeviceWithIdentifier:(id)arg3;

@required
-(void)hostedExternalDeviceConnectionStateDidChange:(unsigned)arg1 withError:(id)arg2;
-(void)hostedExternalDeviceNameDidChange:(id)arg1;
-(void)hostedExternalDeviceDidReceiveCustomData:(id)arg1 withName:(id)arg2;
-(void)hostedExternalDeviceEndpointDidChange:(id)arg1;
-(void)hostedExternalDeviceVolumeDidChange:(float)arg1 forEndpointWithIdentifier:(id)arg2 forOutputDeviceWithIdentifier:(id)arg3;

@end

