/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@interface UIHandleStatusBarTapAction : BSAction

@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) int statusBarStyleOverride; 
-(long long)UIActionType;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithStatusBarStyle:(long long)arg1 ;
-(id)initWithStatusBarStyleOverride:(int)arg1 ;
-(id)initWithStatusBarStyle:(long long)arg1 andStatusBarStyleOverride:(int)arg2 ;
-(int)statusBarStyleOverride;
-(long long)statusBarStyle;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
@end

