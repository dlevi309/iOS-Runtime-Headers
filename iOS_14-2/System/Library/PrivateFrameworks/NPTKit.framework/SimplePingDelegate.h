/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit
*/


@protocol SimplePingDelegate <NSObject>
@optional
-(void)simplePing:(id)arg1 didStartWithAddress:(id)arg2;
-(void)simplePing:(id)arg1 didFailWithError:(id)arg2;
-(void)simplePing:(id)arg1 didSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
-(void)simplePing:(id)arg1 didTimeOut:(id)arg2 sequenceNumber:(unsigned short)arg3 error:(id)arg4;
-(void)simplePing:(id)arg1 didFailToSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3 error:(id)arg4;
-(void)simplePing:(id)arg1 didReceivePingResponsePacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
-(void)simplePing:(id)arg1 didReceiveUnexpectedPacket:(id)arg2;

@end

