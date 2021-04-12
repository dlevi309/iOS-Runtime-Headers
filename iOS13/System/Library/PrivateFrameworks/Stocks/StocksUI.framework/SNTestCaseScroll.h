/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
*/


@protocol SNTestCaseScroll <SNTestCase>
@property (readonly,nonatomic) long long iterations; 
@property (readonly,nonatomic) long long offset; 
@property (readonly,nonatomic) unsigned long long scrollDirection; 
@property (readonly,nonatomic) long long numberOfScreens; 
@optional
-(unsigned long long)scrollDirection;
-(long long)numberOfScreens;

@required
-(long long)offset;
-(long long)iterations;
-(id)scrollViewWithContext:(id)arg1;
-(id)scrollViewWithContext:(id)arg1;

@end

