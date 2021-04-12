/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCRemoteVideoManagerDelegate <NSObject>
@optional
-(void)remoteVideoServerDidDie;

@required
-(void)remoteVideoDidDegrade:(BOOL)arg1 streamToken:(long long)arg2;
-(void)remoteVideoDidSuspend:(BOOL)arg1 streamToken:(long long)arg2;
-(void)releaseQueueForStreamToken:(long long)arg1;
-(void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;
-(void)remoteMediaDidStall:(BOOL)arg1 streamToken:(long long)arg2;
-(void)remoteScreenAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
-(void)remoteVideoAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
-(void)didReceiveFirstRemoteFrameForStreamToken:(long long)arg1;
-(void)remoteVideoDidPause:(BOOL)arg1 streamToken:(long long)arg2;

@end

