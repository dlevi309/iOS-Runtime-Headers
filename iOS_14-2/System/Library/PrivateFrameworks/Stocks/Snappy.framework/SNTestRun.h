/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks/Snappy.framework/Snappy
*/

#import <libobjc.A.dylib/SNTestRunOptions.h>

@protocol SNTestCase;
@class SNTestSuite, NSString;

@interface SNTestRun : NSObject <SNTestRunOptions> {

	id<SNTestCase> _testCase;
	SNTestSuite* _testSuite;

}

@property (nonatomic,readonly) id<SNTestCase> testCase;                 //@synthesize testCase=_testCase - In the implementation block
@property (nonatomic,readonly) SNTestSuite * testSuite;                 //@synthesize testSuite=_testSuite - In the implementation block
@property (nonatomic,readonly) long long orientation; 
@property (nonatomic,readonly) BOOL waitForCommitToFinish; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)orientation;
-(BOOL)waitForCommitToFinish;
-(SNTestSuite *)testSuite;
-(id<SNTestCase>)testCase;
-(id)initWithTestCase:(id)arg1 testSuite:(id)arg2 ;
-(void)setupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runTestWithContext:(id)arg1 testCoordinator:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

