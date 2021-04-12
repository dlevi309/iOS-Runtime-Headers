/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/Snappy.framework/Snappy
*/


@class NSMutableDictionary, NSMutableArray;

@interface SNTestSuite : NSObject {

	NSMutableDictionary* _testCases;
	NSMutableArray* _subTestSuites;
	SNTestSuite* _parentTestSuite;

}

@property (nonatomic,readonly) NSMutableDictionary * testCases;                 //@synthesize testCases=_testCases - In the implementation block
@property (nonatomic,readonly) NSMutableArray * subTestSuites;                  //@synthesize subTestSuites=_subTestSuites - In the implementation block
@property (assign,nonatomic,__weak) SNTestSuite * parentTestSuite;              //@synthesize parentTestSuite=_parentTestSuite - In the implementation block
-(id)init;
-(void)addTestCase:(id)arg1 ;
-(void)addSubTestSuite:(id)arg1 ;
-(id)testRunForTestName:(id)arg1 ;
-(NSMutableDictionary *)testCases;
-(void)setParentTestSuite:(SNTestSuite *)arg1 ;
-(NSMutableArray *)subTestSuites;
-(SNTestSuite *)parentTestSuite;
-(id)testSetupList;
@end

