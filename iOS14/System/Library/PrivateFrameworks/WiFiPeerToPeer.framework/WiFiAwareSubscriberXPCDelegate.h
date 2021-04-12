/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
*/


@protocol WiFiAwareSubscriberXPCDelegate <NSObject>
@required
-(void)subscribeStartedWithInstanceID:(unsigned char)arg1;
-(void)subscribeTerminatedWithReason:(long long)arg1;
-(void)subscribeReceivedDiscoveryResult:(id)arg1;
-(void)subscribeLostDiscoveryResultForPublishID:(unsigned char)arg1 address:(id)arg2;
-(void)subscribeFailedToStartWithError:(long long)arg1;
-(void)subscribeReceivedMessage:(id)arg1 fromPublishID:(unsigned char)arg2 address:(id)arg3;

@end

