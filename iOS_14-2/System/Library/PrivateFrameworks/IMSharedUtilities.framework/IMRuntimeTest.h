/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class IMRuntimeTestRun;

@interface IMRuntimeTest : NSObject {

	IMRuntimeTestRun* _testRun;
	/*^block*/id _completion;

}

@property (retain) IMRuntimeTestRun * testRun;              //@synthesize testRun=_testRun - In the implementation block
@property (copy) id completion;                             //@synthesize completion=_completion - In the implementation block
+(id)logHandle;
+(void)testLog:(id)arg1 ;
+(id)testName;
-(void)setUp;
-(void)tearDown;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)startTest;
-(IMRuntimeTestRun *)testRun;
-(id)logHandle;
-(void)dispatchAfter:(double)arg1 block:(/*^block*/id)arg2 ;
-(Class)testRunClass;
-(void)setTestRun:(IMRuntimeTestRun *)arg1 ;
-(void)finishTest;
-(void)finishTestAfterInterval:(double)arg1 ;
-(void)testLog:(id)arg1 ;
-(void)runTest:(/*^block*/id)arg1 ;
-(id)testName;
@end

