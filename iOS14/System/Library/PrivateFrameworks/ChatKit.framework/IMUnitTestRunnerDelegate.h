/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol IMUnitTestRunnerDelegate <NSObject>
@optional
-(void)unitTestRunner:(id)arg1 willRunTestsInBundleAtPath:(id)arg2;
-(void)unitTestRunner:(id)arg1 testSuiteWillStart:(id)arg2;
-(void)unitTestRunner:(id)arg1 didRunTestsInBundleAtPath:(id)arg2 results:(id)arg3;
-(void)unitTestRunner:(id)arg1 didReceiveOutput:(id)arg2;
-(void)unitTestRunner:(id)arg1 runningTestsInBundleAtPath:(id)arg2 failedWithError:(id)arg3;
-(void)unitTestRunner:(id)arg1 testSuiteDidFinish:(id)arg2 withResult:(id)arg3;
-(void)unitTestRunner:(id)arg1 testSuite:(id)arg2 didFailWithDescription:(id)arg3 inFile:(id)arg4 atLine:(unsigned long long)arg5;
-(void)unitTestRunner:(id)arg1 testCaseWillStart:(id)arg2;
-(void)unitTestRunner:(id)arg1 testCase:(id)arg2 didFailWithDescription:(id)arg3 inFile:(id)arg4 atLine:(unsigned long long)arg5;
-(void)unitTestRunner:(id)arg1 testCaseDidFinish:(id)arg2 withResult:(id)arg3;

@end

