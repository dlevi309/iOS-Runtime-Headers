/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

