/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMXPCMessageTransport <NSObject>
@optional
-(void)fetchUserInfo:(/*^block*/id)arg1;
-(void)updateUserInfo:(id)arg1;

@required
-(void)handleMessage:(id)arg1;
-(void)handleMessage:(id)arg1 responseHandler:(/*^block*/id)arg2;

@end

