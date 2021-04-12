/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAPRelayPairingClientDelegate <NSObject>
@required
-(void)relayPairingClient:(id)arg1 didCloseWithError:(id)arg2;
-(void)relayPairingClient:(id)arg1 didReceiveControllerIdentifier:(id)arg2;
-(void)relayPairingClient:(id)arg1 didReceiveAccessToken:(id)arg2 accessoryIdentifier:(id)arg3;

@end

