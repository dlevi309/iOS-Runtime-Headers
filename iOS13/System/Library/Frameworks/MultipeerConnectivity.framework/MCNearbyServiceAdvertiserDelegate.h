/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
*/


@protocol MCNearbyServiceAdvertiserDelegate <NSObject>
@optional
-(void)advertiser:(id)arg1 didNotStartAdvertisingPeer:(id)arg2;

@required
-(void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(/*^block*/id)arg4;

@end

