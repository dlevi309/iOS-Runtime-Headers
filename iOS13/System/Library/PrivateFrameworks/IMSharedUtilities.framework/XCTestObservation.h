/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@protocol XCTestObservation <NSObject>
@optional
-(void)testBundleWillStart:(id)arg1;
-(void)testBundleDidFinish:(id)arg1;
-(void)testSuiteWillStart:(id)arg1;
-(void)testSuite:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
-(void)testSuiteDidFinish:(id)arg1;
-(void)testCaseWillStart:(id)arg1;
-(void)testCase:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
-(void)testCaseDidFinish:(id)arg1;

@end

