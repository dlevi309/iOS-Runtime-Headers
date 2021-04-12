/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@protocol XCTestObservation <NSObject>
@optional
-(void)testBundleWillStart:(id)arg1;
-(void)testBundleDidFinish:(id)arg1;
-(void)testSuiteWillStart:(id)arg1;
-(void)testSuite:(id)arg1 didRecordIssue:(id)arg2;
-(void)testSuiteDidFinish:(id)arg1;
-(void)testCaseWillStart:(id)arg1;
-(void)testCase:(id)arg1 didRecordIssue:(id)arg2;
-(void)testCaseDidFinish:(id)arg1;
-(void)testSuite:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
-(void)testCase:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;

@end

