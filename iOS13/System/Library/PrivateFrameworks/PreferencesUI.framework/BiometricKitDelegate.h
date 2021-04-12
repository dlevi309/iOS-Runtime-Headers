/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
*/


@protocol BiometricKitDelegate <NSObject>
@optional
-(void)statusMessage:(unsigned)arg1;
-(void)enrollProgress:(id)arg1;
-(void)enrollResult:(id)arg1;
-(void)matchResult:(id)arg1 withDetails:(id)arg2;
-(void)matchResult:(id)arg1;
-(void)homeButtonPressed;
-(void)touchIDButtonPressed:(BOOL)arg1;
-(void)templateUpdate:(id)arg1 withDetails:(id)arg2;
-(void)taskResumeStatus:(int)arg1;
-(void)enrollUpdate:(id)arg1;
-(void)enrollFeedback:(id)arg1;

@end

