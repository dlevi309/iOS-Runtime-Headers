/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class IMRuntimeTestRun;

@interface IMRuntimeTest : NSObject {

	IMRuntimeTestRun* _testRun;
	/*^block*/id _completion;

}

@property (retain) IMRuntimeTestRun * testRun;              //@synthesize testRun=_testRun - In the implementation block
@property (copy) id completion;                             //@synthesize completion=_completion - In the implementation block
+(id)testName;
+(id)logHandle;
+(void)testLog:(id)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(id)testName;
-(void)tearDown;
-(void)setUp;
-(void)dispatchAfter:(double)arg1 block:(/*^block*/id)arg2 ;
-(Class)testRunClass;
-(IMRuntimeTestRun *)testRun;
-(id)logHandle;
-(void)testLog:(id)arg1 ;
-(void)setTestRun:(IMRuntimeTestRun *)arg1 ;
-(void)startTest;
-(void)finishTest;
-(void)runTest:(/*^block*/id)arg1 ;
-(void)finishTestAfterInterval:(double)arg1 ;
@end

