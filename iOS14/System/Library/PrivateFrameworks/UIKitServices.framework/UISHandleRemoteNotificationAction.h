/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/

#import <BaseBoard/BSAction.h>

@interface UISHandleRemoteNotificationAction : BSAction
-(void)sendResponse:(id)arg1 ;
-(unsigned long long)UIActionType;
-(id)action;
-(id)payload;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)_initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 userResponse:(id)arg3 type:(unsigned long long)arg4 withHandler:(/*^block*/id)arg5 ;
-(id)initWithRemoteNotificationPayload:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 userResponse:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)userResponse;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
@end

