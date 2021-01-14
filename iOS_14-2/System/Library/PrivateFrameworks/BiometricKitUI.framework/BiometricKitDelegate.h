/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/


@protocol BiometricKitDelegate <NSObject>
@optional
-(void)enrollUpdate:(id)arg1;
-(void)enrollProgress:(id)arg1;
-(void)statusMessage:(unsigned)arg1;
-(void)touchIDButtonPressed:(BOOL)arg1;
-(void)enrollResult:(id)arg1;
-(void)taskResumeStatus:(int)arg1;
-(void)homeButtonPressed;
-(void)enrollFeedback:(id)arg1;
-(void)matchResult:(id)arg1 withDetails:(id)arg2;
-(void)matchResult:(id)arg1;
-(void)templateUpdate:(id)arg1 withDetails:(id)arg2;

@end

