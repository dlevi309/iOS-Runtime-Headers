/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteStateDumpKit.framework/RemoteStateDumpKit
*/

#import <RemoteStateDumpKit/RSPeerToPeerConnectionController.h>
#import <libobjc.A.dylib/MCNearbyServiceAdvertiserDelegate.h>

@class MCNearbyServiceAdvertiser, NSString;

@interface RSPeerToPeerServerController : RSPeerToPeerConnectionController <MCNearbyServiceAdvertiserDelegate> {

	BOOL _advertiserDidNotStartAdvertising;
	MCNearbyServiceAdvertiser* _serviceAdvertiser;

}

@property (nonatomic,retain) MCNearbyServiceAdvertiser * serviceAdvertiser;              //@synthesize serviceAdvertiser=_serviceAdvertiser - In the implementation block
@property (assign,nonatomic) BOOL advertiserDidNotStartAdvertising;                      //@synthesize advertiserDidNotStartAdvertising=_advertiserDidNotStartAdvertising - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)abort;
-(void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(/*^block*/id)arg4 ;
-(void)advertiser:(id)arg1 didNotStartAdvertisingPeer:(id)arg2 ;
-(void)prepareForConnection;
-(void)setServiceAdvertiser:(MCNearbyServiceAdvertiser *)arg1 ;
-(MCNearbyServiceAdvertiser *)serviceAdvertiser;
-(BOOL)didStartAcceptingConnections;
-(BOOL)advertiserDidNotStartAdvertising;
-(void)setAdvertiserDidNotStartAdvertising:(BOOL)arg1 ;
@end

