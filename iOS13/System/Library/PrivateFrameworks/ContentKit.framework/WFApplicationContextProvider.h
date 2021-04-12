/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@protocol WFApplicationContextProvider <NSObject>
@property (assign,nonatomic) BOOL wfIdleTimerDisabled; 
@optional
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

