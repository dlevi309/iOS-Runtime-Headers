/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks/Snappy.framework/Snappy
*/


@protocol SNTestCoordinating <NSObject>
@required
-(void)scrollTestWithTestName:(id)arg1 scrollView:(id)arg2 iterations:(long long)arg3 offset:(long long)arg4 numberOfScreens:(long long)arg5 direction:(unsigned long long)arg6;
-(void)scrollTestWithTestName:(id)arg1 scrollView:(id)arg2 iterations:(long long)arg3 offset:(long long)arg4 direction:(unsigned long long)arg5;
-(void)startedTestWithTestName:(id)arg1;
-(void)finishedTestWithTestName:(id)arg1 waitForCommit:(BOOL)arg2;
-(void)rotateToOrientation:(long long)arg1 beforeRotation:(/*^block*/id)arg2 afterRotation:(/*^block*/id)arg3;
-(BOOL)requiresRotationForOrientation:(long long)arg1;
-(void)failedTestWithTestName:(id)arg1 failureMessage:(id)arg2;

@end

