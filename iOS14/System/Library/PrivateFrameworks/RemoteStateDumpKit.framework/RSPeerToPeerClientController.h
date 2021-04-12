/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)browser:(id)arg1 didNotStartBrowsingForPeers:(id)arg2 ;
-(void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3 ;
-(void)browser:(id)arg1 lostPeer:(id)arg2 ;
-(void)prepareForConnection;
-(MCNearbyServiceBrowser *)serviceBrowser;
-(void)setServiceBrowser:(MCNearbyServiceBrowser *)arg1 ;
@end

