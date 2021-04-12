/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCRemoteVideoManagerDelegate <NSObject>
@optional
-(void)remoteVideoServerDidDie;

@required
-(void)remoteVideoAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
-(void)remoteVideoDidPause:(BOOL)arg1 streamToken:(long long)arg2;
-(void)remoteScreenAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
-(void)didReceiveFirstRemoteFrameForStreamToken:(long long)arg1;
-(void)remoteMediaDidStall:(BOOL)arg1 streamToken:(long long)arg2;
-(void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;
-(void)remoteVideoDidDegrade:(BOOL)arg1 streamToken:(long long)arg2;
-(void)remoteVideoDidSuspend:(BOOL)arg1 streamToken:(long long)arg2;
-(void)releaseQueueForStreamToken:(long long)arg1;

@end

