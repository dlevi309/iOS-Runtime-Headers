/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
*/

#import <libobjc.A.dylib/SNTestCaseScroll.h>

@class NSString;

@interface StocksUI.StockFeedScrollTestCase : NSObject <SNTestCaseScroll> {

	 testName;
	 timeoutInSeconds;
	 aggregate;
	 iterations;
	 offset;
	 numberOfScreens;

}

@property (readonly,nonatomic) NSString * testName; 
@property (readonly,nonatomic) double timeoutInSeconds; 
@property (readonly,nonatomic) unsigned long long aggregate; 
@property (readonly,nonatomic) long long iterations; 
@property (readonly,nonatomic) long long offset; 
@property (readonly,nonatomic) long long numberOfScreens; 
-(id)init;
-(long long)offset;
-(NSString *)testName;
-(long long)iterations;
-(unsigned long long)aggregate;
-(double)timeoutInSeconds;
-(long long)numberOfScreens;
-(id)scrollViewWithContext:(id)arg1 ;
@end

