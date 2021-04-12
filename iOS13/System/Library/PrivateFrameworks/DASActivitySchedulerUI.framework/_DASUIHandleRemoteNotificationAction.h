/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DASActivitySchedulerUI.framework/DASActivitySchedulerUI
*/

#import <BaseBoard/BSAction.h>

@class NSDictionary, NSString;

@interface _DASUIHandleRemoteNotificationAction : BSAction

@property (nonatomic,copy,readonly) NSDictionary * payload; 
@property (nonatomic,copy,readonly) NSString * action; 
@property (nonatomic,copy,readonly) NSDictionary * userResponse; 
-(NSString *)action;
-(NSDictionary *)payload;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(void)sendResponse:(id)arg1 ;
-(long long)UIActionType;
-(NSDictionary *)userResponse;
-(id)_initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 userResponse:(id)arg3 type:(long long)arg4 withHandler:(/*^block*/id)arg5 ;
-(id)initWithRemoteNotificationPayload:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 userResponse:(id)arg3 withHandler:(/*^block*/id)arg4 ;
@end

