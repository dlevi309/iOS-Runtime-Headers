/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
*/

#import <libobjc.A.dylib/SNTestCaseScroll.h>
#import <libobjc.A.dylib/SNTestRunOptions.h>

@class NSString, NSArray;

@interface StocksUI.ForYouFeedScrollLandscapeTestCase : NSObject <SNTestCaseScroll, SNTestRunOptions> {

	 testName;
	 timeoutInSeconds;
	 aggregate;
	 requiredCapabilities;
	 iterations;
	 offset;
	 numberOfScreens;
	 orientation;
	 waitForCommitToFinish;

}

@property (readonly,nonatomic) NSString * testName; 
@property (readonly,nonatomic) double timeoutInSeconds; 
@property (readonly,nonatomic) unsigned long long aggregate; 
@property (readonly,nonatomic) NSArray * requiredCapabilities; 
@property (readonly,nonatomic) long long iterations; 
@property (readonly,nonatomic) long long offset; 
@property (readonly,nonatomic) long long numberOfScreens; 
@property (readonly,nonatomic) long long orientation; 
@property (readonly,nonatomic) BOOL waitForCommitToFinish; 
-(id)init;
-(long long)orientation;
-(long long)offset;
-(NSString *)testName;
-(long long)iterations;
-(NSArray *)requiredCapabilities;
-(unsigned long long)aggregate;
-(double)timeoutInSeconds;
-(long long)numberOfScreens;
-(id)scrollViewWithContext:(id)arg1 ;
-(BOOL)waitForCommitToFinish;
@end

