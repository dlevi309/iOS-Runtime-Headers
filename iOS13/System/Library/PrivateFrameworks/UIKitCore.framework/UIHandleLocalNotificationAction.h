/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class UILocalNotification, NSString, NSDictionary;

@interface UIHandleLocalNotificationAction : BSAction

@property (nonatomic,copy,readonly) UILocalNotification * notification; 
@property (nonatomic,copy,readonly) NSString * action; 
@property (nonatomic,copy,readonly) NSDictionary * userResponse; 
-(NSString *)action;
-(UILocalNotification *)notification;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(long long)UIActionType;
-(id)_initWithNotification:(id)arg1 action:(id)arg2 userResponse:(id)arg3 type:(long long)arg4 withHandler:(/*^block*/id)arg5 ;
-(id)initWithNotification:(id)arg1 ;
-(id)initWithNotification:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithNotification:(id)arg1 action:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithNotification:(id)arg1 action:(id)arg2 userResponse:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(NSDictionary *)userResponse;
@end

