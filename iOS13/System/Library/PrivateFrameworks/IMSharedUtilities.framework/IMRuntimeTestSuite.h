/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMRuntimeTest.h>

@class NSMutableArray, IMRuntimeTest, NSTimer, NSArray;

@interface IMRuntimeTestSuite : IMRuntimeTest {

	NSMutableArray* _tests;
	double _testSuiteStartDelay;
	double _testStartDelay;
	NSMutableArray* _runningTests;
	IMRuntimeTest* _currentTest;
	NSTimer* _timer;

}

@property (retain) NSArray * tests;                            //@synthesize tests=_tests - In the implementation block
@property (retain) NSMutableArray * runningTests;              //@synthesize runningTests=_runningTests - In the implementation block
@property (retain) IMRuntimeTest * currentTest;                //@synthesize currentTest=_currentTest - In the implementation block
@property (__weak) NSTimer * timer;                            //@synthesize timer=_timer - In the implementation block
@property (assign) double testSuiteStartDelay;                 //@synthesize testSuiteStartDelay=_testSuiteStartDelay - In the implementation block
@property (assign) double testStartDelay;                      //@synthesize testStartDelay=_testStartDelay - In the implementation block
+(void)runTestsIfNeededWithRepeatCount:(long long)arg1 withCount:(long long)arg2 ;
+(void)runTestsIfNeededWithRepeatCount:(long long)arg1 ;
-(id)init;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(IMRuntimeTest *)currentTest;
-(NSArray *)tests;
-(void)startTest;
-(void)currentTestDidFinish;
-(void)_startNextTest;
-(void)_cancelTimer;
-(double)testStartDelay;
-(void)_timerExpired:(id)arg1 ;
-(double)testSuiteStartDelay;
-(void)addTest:(id)arg1 ;
-(void)removeTest:(id)arg1 ;
-(void)setTests:(NSArray *)arg1 ;
-(void)setTestSuiteStartDelay:(double)arg1 ;
-(void)setTestStartDelay:(double)arg1 ;
-(NSMutableArray *)runningTests;
-(void)setRunningTests:(NSMutableArray *)arg1 ;
-(void)setCurrentTest:(IMRuntimeTest *)arg1 ;
@end

