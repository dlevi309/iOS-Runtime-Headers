/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAPBTLEControlOutputStreamDelegate <NSObject>
@required
-(void)controlOutputStream:(id)arg1 didReceiveRequestToSendControlPacket:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)controlOutputStreamDidOpen:(id)arg1;
-(void)controlOutputStream:(id)arg1 didCloseWithError:(id)arg2;
-(void)controlOutputStreamDidComplete:(id)arg1;

@end

