/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/


@protocol CATTaskClientDelegate <NSObject>
@optional
-(void)clientWillInvalidate:(id)arg1;
-(void)clientDidDisconnect:(id)arg1;
-(void)clientDidConnect:(id)arg1;
-(void)client:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
-(void)clientDidInvalidate:(id)arg1;

@required
-(void)client:(id)arg1 didInterruptWithError:(id)arg2;

@end

