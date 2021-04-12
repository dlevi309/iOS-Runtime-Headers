/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
*/

#import <libobjc.A.dylib/SNTestCaseRotate.h>

@class NSString, NSArray;

@interface StocksUI.StockFeedRotateTestCase : NSObject <SNTestCaseRotate> {

	 testName;
	 timeoutInSeconds;
	 aggregate;
	 requiredCapabilities;
	 rotateOrientation;

}

@property (readonly,nonatomic) NSString * testName; 
@property (readonly,nonatomic) double timeoutInSeconds; 
@property (readonly,nonatomic) unsigned long long aggregate; 
@property (readonly,nonatomic) NSArray * requiredCapabilities; 
@property (readonly,nonatomic) long long rotateOrientation; 
-(id)init;
-(NSString *)testName;
-(NSArray *)requiredCapabilities;
-(unsigned long long)aggregate;
-(double)timeoutInSeconds;
-(long long)rotateOrientation;
@end

