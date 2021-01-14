/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks/Snappy.framework/Snappy
*/

#import <libobjc.A.dylib/SNTestRunFactory.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SNTestStore : NSObject <SNTestRunFactory> {

	NSMutableArray* _testSuites;
	NSMutableDictionary* _testCases;

}

@property (nonatomic,readonly) NSMutableArray * testSuites;                  //@synthesize testSuites=_testSuites - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * testCases;              //@synthesize testCases=_testCases - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)addTestCase:(id)arg1 ;
-(void)addTestSuite:(id)arg1 ;
-(NSMutableArray *)testSuites;
-(NSMutableDictionary *)testCases;
-(id)testRunForTestName:(id)arg1 ;
@end

