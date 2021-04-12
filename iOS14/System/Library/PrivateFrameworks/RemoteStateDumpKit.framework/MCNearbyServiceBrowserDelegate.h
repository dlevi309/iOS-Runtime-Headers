/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteStateDumpKit.framework/RemoteStateDumpKit
*/


@protocol MCNearbyServiceBrowserDelegate <NSObject>
@optional
-(void)browser:(id)arg1 didNotStartBrowsingForPeers:(id)arg2;

@required
-(void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
-(void)browser:(id)arg1 lostPeer:(id)arg2;

@end

