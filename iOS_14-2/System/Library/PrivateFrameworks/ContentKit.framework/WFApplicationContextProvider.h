/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@protocol WFApplicationContextProvider <NSObject>
@property (assign,nonatomic) BOOL wfIdleTimerDisabled; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@optional
-(long long)userInterfaceStyle;
-(long long)currentApplicationStateForWFApplicationContext:(id)arg1;
-(BOOL)wfIdleTimerDisabled;
-(void)setWfIdleTimerDisabled:(BOOL)arg1;

@required
-(BOOL)shouldReverseLayoutDirection;
-(id)bundleForWFApplicationContext:(id)arg1;
-(id)currentUserInterfaceTypeForWFApplicationContext:(id)arg1;
-(id)notificationNameForApplicationStateEvent:(long long)arg1 applicationContext:(id)arg2;
-(id)keyWindowForWFApplicationContext:(id)arg1;
-(id)applicationForWFApplicationContext:(id)arg1;

@end

