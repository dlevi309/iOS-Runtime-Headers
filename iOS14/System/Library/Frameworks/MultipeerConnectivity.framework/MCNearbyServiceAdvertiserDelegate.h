/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
*/


@protocol MCNearbyServiceAdvertiserDelegate <NSObject>
@optional
-(void)advertiser:(id)arg1 didNotStartAdvertisingPeer:(id)arg2;

@required
-(void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(/*^block*/id)arg4;

@end

