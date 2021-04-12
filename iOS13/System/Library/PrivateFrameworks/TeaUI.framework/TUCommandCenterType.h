/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


@protocol TUCommandCenterType
@required
-(void)removeContextProvider:(id)arg1;
-(void)executeCommand:(id)arg1;
-(BOOL)canExecuteCommand:(id)arg1;
-(void)addContextProvider:(id)arg1 forCommand:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeContextProvider:(id)arg1 forCommand:(id)arg2;
-(long long)stateForCommand:(id)arg1;

@end

