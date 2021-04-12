/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Notification/FindMyDeviceAccountNotificationPlugin.bundle/FindMyDeviceAccountNotificationPlugin
*/


@protocol ACDAccountNotificationPlugin <NSObject>
@optional
-(BOOL)canRemoveAccount:(id)arg1 inStore:(id)arg2 error:(id*)arg3;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2 error:(id*)arg3;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2;
-(BOOL)canRemoveAccount:(id)arg1 inStore:(id)arg2;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4;
-(void)account:(id)arg1 willPerformActionsForDataclasses:(id)arg2;
-(void)account:(id)arg1 didPerformActionsForDataclasses:(id)arg2;

@end

