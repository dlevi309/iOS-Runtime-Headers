/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)iterations;
-(id)scrollViewWithContext:(id)arg1;
-(id)scrollViewWithContext:(id)arg1;
-(long long)offset;

@end

