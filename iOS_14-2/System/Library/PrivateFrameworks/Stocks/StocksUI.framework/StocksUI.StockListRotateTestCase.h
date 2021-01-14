/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
*/

#import <libobjc.A.dylib/SNTestCaseRotate.h>

@class NSString, NSArray;

@interface StocksUI.StockListRotateTestCase : NSObject <SNTestCaseRotate> {

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
-(NSArray *)requiredCapabilities;
-(long long)rotateOrientation;
-(unsigned long long)aggregate;
-(double)timeoutInSeconds;
-(NSString *)testName;
@end

