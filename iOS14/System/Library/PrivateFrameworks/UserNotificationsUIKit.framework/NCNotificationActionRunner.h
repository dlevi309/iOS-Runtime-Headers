/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@protocol NCNotificationActionRunner <NSObject>
@property (assign,nonatomic) BOOL shouldForwardAction; 
@required
-(void)executeAction:(id)arg1 fromOrigin:(id)arg2 endpoint:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5;
-(BOOL)shouldForwardAction;
-(void)setShouldForwardAction:(BOOL)arg1;

@end

