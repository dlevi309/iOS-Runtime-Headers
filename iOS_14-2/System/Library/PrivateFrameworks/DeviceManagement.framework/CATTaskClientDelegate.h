/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/


@protocol CATTaskClientDelegate <NSObject>
@optional
-(void)clientDidDisconnect:(id)arg1;
-(void)clientDidInvalidate:(id)arg1;
-(void)clientWillInvalidate:(id)arg1;
-(void)client:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
-(void)clientDidConnect:(id)arg1;

@required
-(void)client:(id)arg1 didInterruptWithError:(id)arg2;

@end

