/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
*/


@protocol WiFiAwarePublisherXPCDelegate <NSObject>
@required
-(void)publishStartedWithInstanceID:(unsigned char)arg1;
-(void)publishFailedToStartWithError:(long long)arg1;
-(void)publishTerminatedWithReason:(long long)arg1;
-(void)publishReceivedMessage:(id)arg1 fromSubscriberID:(unsigned char)arg2 subscriberAddress:(id)arg3;
-(void)publishDataConfirmedForHandle:(id)arg1 localInterfaceIndex:(unsigned)arg2 serviceSpecificInfo:(id)arg3;
-(void)publishDataTerminatedForHandle:(id)arg1 reason:(long long)arg2;

@end

