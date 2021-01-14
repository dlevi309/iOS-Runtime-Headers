/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)iterations;
-(id)scrollViewWithContext:(id)arg1 ;
-(long long)numberOfScreens;
-(long long)offset;
-(unsigned long long)aggregate;
-(double)timeoutInSeconds;
-(NSString *)testName;
@end

