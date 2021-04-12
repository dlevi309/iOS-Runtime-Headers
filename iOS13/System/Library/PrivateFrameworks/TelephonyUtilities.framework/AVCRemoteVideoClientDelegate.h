/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol AVCRemoteVideoClientDelegate <NSObject>
@optional
-(void)remoteVideoClientDidReceiveFirstFrame:(id)arg1;
-(void)remoteVideoClient:(id)arg1 remoteVideoDidPause:(BOOL)arg2;
-(void)remoteVideoClient:(id)arg1 remoteMediaDidStall:(BOOL)arg2;
-(void)remoteVideoClient:(id)arg1 videoDidDegrade:(BOOL)arg2;
-(void)remoteVideoClient:(id)arg1 videoDidSuspend:(BOOL)arg2;
-(void)remoteVideoClientDidReceiveLastFrame:(id)arg1;
-(void)remoteVideoServerDidDie:(id)arg1;
-(void)remoteVideoClient:(id)arg1 remoteScreenAttributesDidChange:(id)arg2;
-(void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;

@end

