/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableDictionary *)testCases;
-(id)testRunForTestName:(id)arg1 ;
-(void)setParentTestSuite:(SNTestSuite *)arg1 ;
-(NSMutableArray *)subTestSuites;
-(SNTestSuite *)parentTestSuite;
-(id)testSetupList;
@end

