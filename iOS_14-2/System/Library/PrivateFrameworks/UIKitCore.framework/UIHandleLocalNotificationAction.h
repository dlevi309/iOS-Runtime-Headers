/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class UILocalNotification, NSString, NSDictionary;

@interface UIHandleLocalNotificationAction : BSAction

@property (nonatomic,copy,readonly) UILocalNotification * notification; 
@property (nonatomic,copy,readonly) NSString * action; 
@property (nonatomic,copy,readonly) NSDictionary * userResponse; 
-(long long)UIActionType;
-(UILocalNotification *)notification;
-(id)_initWithNotification:(id)arg1 action:(id)arg2 userResponse:(id)arg3 type:(long long)arg4 withHandler:(/*^block*/id)arg5 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(NSString *)action;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithNotification:(id)arg1 ;
-(id)initWithNotification:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithNotification:(id)arg1 action:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithNotification:(id)arg1 action:(id)arg2 userResponse:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(NSDictionary *)userResponse;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
@end

