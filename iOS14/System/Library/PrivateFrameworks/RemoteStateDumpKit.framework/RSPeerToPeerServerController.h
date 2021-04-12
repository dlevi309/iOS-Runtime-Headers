/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)prepareForConnection;
-(BOOL)didStartAcceptingConnections;
-(void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(/*^block*/id)arg4 ;
-(void)advertiser:(id)arg1 didNotStartAdvertisingPeer:(id)arg2 ;
-(void)setServiceAdvertiser:(MCNearbyServiceAdvertiser *)arg1 ;
-(MCNearbyServiceAdvertiser *)serviceAdvertiser;
-(BOOL)advertiserDidNotStartAdvertising;
-(void)setAdvertiserDidNotStartAdvertising:(BOOL)arg1 ;
@end

