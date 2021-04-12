/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteStateDumpKit.framework/RemoteStateDumpKit
*/

#import <RemoteStateDumpKit/RSPeerToPeerConnectionController.h>
#import <libobjc.A.dylib/MCNearbyServiceBrowserDelegate.h>

@class MCNearbyServiceBrowser, NSString;

@interface RSPeerToPeerClientController : RSPeerToPeerConnectionController <MCNearbyServiceBrowserDelegate> {

	MCNearbyServiceBrowser* _serviceBrowser;

}

@property (nonatomic,retain) MCNearbyServiceBrowser * serviceBrowser;              //@synthesize serviceBrowser=_serviceBrowser - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)abort;
-(MCNearbyServiceBrowser *)serviceBrowser;
-(void)setServiceBrowser:(MCNearbyServiceBrowser *)arg1 ;
-(void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3 ;
-(void)browser:(id)arg1 lostPeer:(id)arg2 ;
-(void)browser:(id)arg1 didNotStartBrowsingForPeers:(id)arg2 ;
-(void)prepareForConnection;
@end

