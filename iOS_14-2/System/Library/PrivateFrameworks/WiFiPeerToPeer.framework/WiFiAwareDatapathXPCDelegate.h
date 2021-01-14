/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
*/


@protocol WiFiAwareDatapathXPCDelegate <NSObject>
@required
-(void)datapathStartedWithInstanceID:(unsigned char)arg1 initiatorDataAddress:(id)arg2 localInterfaceIndex:(unsigned)arg3;
-(void)datapathFailedToStartWithError:(long long)arg1;
-(void)datapathConfirmedForPeerDataAddress:(id)arg1 serviceSpecificInfo:(id)arg2;
-(void)datapathReceivedControlDataAddress:(id)arg1 serviceSpecificInfo:(id)arg2 onInterfaceIndex:(unsigned)arg3;
-(void)datapathTerminatedWithReason:(long long)arg1;

@end

