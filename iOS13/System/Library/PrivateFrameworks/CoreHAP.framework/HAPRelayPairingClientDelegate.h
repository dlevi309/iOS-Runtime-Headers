/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAPRelayPairingClientDelegate <NSObject>
@required
-(void)relayPairingClient:(id)arg1 didCloseWithError:(id)arg2;
-(void)relayPairingClient:(id)arg1 didReceiveControllerIdentifier:(id)arg2;
-(void)relayPairingClient:(id)arg1 didReceiveAccessToken:(id)arg2 accessoryIdentifier:(id)arg3;

@end

