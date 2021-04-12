/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAPBTLEControlOutputStreamDelegate <NSObject>
@required
-(void)controlOutputStream:(id)arg1 didReceiveRequestToSendControlPacket:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)controlOutputStreamDidOpen:(id)arg1;
-(void)controlOutputStream:(id)arg1 didCloseWithError:(id)arg2;
-(void)controlOutputStreamDidComplete:(id)arg1;

@end

