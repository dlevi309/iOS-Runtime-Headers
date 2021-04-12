/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMRuntimeTestRun.h>

@class NSMutableArray, NSArray;

@interface IMRuntimeTestSuiteTestRun : IMRuntimeTestRun {

	NSMutableArray* _testRuns;
	NSArray* _testRun;

}

@property (copy,readonly) NSArray * testRuns;              //@synthesize testRun=_testRun - In the implementation block
-(id)init;
-(void)addTestRun:(id)arg1 ;
-(NSArray *)testRuns;
@end

