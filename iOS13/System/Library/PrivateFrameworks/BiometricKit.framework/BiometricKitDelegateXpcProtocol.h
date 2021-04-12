/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/


@protocol BiometricKitDelegateXpcProtocol <NSObject>
@required
-(BOOL)isDelegate;
-(void)enrollResult:(id)arg1 client:(unsigned long long)arg2;
-(void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
-(void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
-(void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2;
-(void)statusMessage:(unsigned)arg1 details:(id)arg2 client:(unsigned long long)arg3;
-(void)homeButtonPressed:(unsigned long long)arg1;
-(void)touchIDButtonPressed:(BOOL)arg1 client:(unsigned long long)arg2;
-(void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
-(void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2;

@end

