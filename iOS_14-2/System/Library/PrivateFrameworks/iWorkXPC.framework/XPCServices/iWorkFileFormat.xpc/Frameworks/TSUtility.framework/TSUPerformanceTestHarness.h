/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSMutableArray;

@interface TSUPerformanceTestHarness : NSObject {

	NSMutableArray* mTestCases;
	BOOL mQuiet;
	long long mPassingTests;
	long long mTotalTests;
	BOOL mPassed;
	timeval mSetupTime;

}

@property (assign,nonatomic) BOOL quiet; 
@property (nonatomic,readonly) long long passingTestCount; 
@property (nonatomic,readonly) long long testCount; 
@property (nonatomic,readonly) BOOL passed; 
+(id)harness;
-(void)setup;
-(id)init;
-(BOOL)quiet;
-(void)report;
-(BOOL)passed;
-(void)cleanup;
-(void)testSuite;
-(void)dealloc;
-(void)setQuiet:(BOOL)arg1 ;
-(id)testWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 ;
-(id)p_createResultDirectory;
-(void)p_writeSystemConfigurationToDirectory:(id)arg1 ;
-(void)p_writeCsvResultsToDirectory:(id)arg1 ;
-(void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 ;
-(void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 precision:(double)arg4 ;
-(BOOL)runTests;
-(long long)passingTestCount;
-(long long)testCount;
@end

