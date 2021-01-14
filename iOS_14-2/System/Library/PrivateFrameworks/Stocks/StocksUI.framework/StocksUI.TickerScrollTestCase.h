/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
*/

#import <libobjc.A.dylib/SNTestCaseScroll.h>

@class NSString, NSArray;

@interface StocksUI.TickerScrollTestCase : NSObject <SNTestCaseScroll> {

	 testName;
	 timeoutInSeconds;
	 aggregate;
	 requiredCapabilities;
	 iterations;
	 offset;
	 numberOfScreens;
	 scrollDirection;

}

@property (readonly,nonatomic) NSString * testName; 
@property (readonly,nonatomic) double timeoutInSeconds; 
@property (readonly,nonatomic) unsigned long long aggregate; 
@property (readonly,nonatomic) NSArray * requiredCapabilities; 
@property (readonly,nonatomic) long long iterations; 
@property (readonly,nonatomic) long long offset; 
@property (readonly,nonatomic) long long numberOfScreens; 
@property (readonly,nonatomic) unsigned long long scrollDirection; 
-(id)init;
-(long long)iterations;
-(unsigned long long)scrollDirection;
-(id)scrollViewWithContext:(id)arg1 ;
-(long long)numberOfScreens;
-(NSArray *)requiredCapabilities;
-(long long)offset;
-(unsigned long long)aggregate;
-(double)timeoutInSeconds;
-(NSString *)testName;
@end

