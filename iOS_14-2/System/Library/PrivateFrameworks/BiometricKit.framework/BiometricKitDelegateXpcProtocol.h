/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/


@protocol BiometricKitDelegateXpcProtocol <NSObject>
@required
-(void)touchIDButtonPressed:(BOOL)arg1 client:(unsigned long long)arg2;
-(void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
-(void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2;
-(BOOL)isDelegate;
-(void)enrollResult:(id)arg1 client:(unsigned long long)arg2;
-(void)statusMessage:(unsigned)arg1 details:(id)arg2 client:(unsigned long long)arg3;
-(void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
-(void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
-(void)homeButtonPressed:(unsigned long long)arg1;
-(void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2;

@end

