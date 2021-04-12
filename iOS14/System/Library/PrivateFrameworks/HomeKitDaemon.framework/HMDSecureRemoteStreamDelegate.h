/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDSecureRemoteStreamDelegate <HMFMessageTransportDelegate>
@optional
-(void)secureRemoteStreamIsIdle:(id)arg1;
-(void)secureRemoteStream:(id)arg1 didCloseWithError:(id)arg2;

@required
-(void)secureRemoteStream:(id)arg1 receivedRequestToSendMessage:(id)arg2;

@end

