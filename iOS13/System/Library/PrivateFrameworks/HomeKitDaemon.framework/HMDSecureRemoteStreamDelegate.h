/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDSecureRemoteStreamDelegate <HMFMessageTransportDelegate>
@optional
-(void)secureRemoteStreamIsIdle:(id)arg1;
-(void)secureRemoteStream:(id)arg1 didCloseWithError:(id)arg2;

@required
-(void)secureRemoteStream:(id)arg1 receivedRequestToSendMessage:(id)arg2;

@end

