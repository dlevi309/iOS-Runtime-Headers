/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <Stocks/YQLRequest.h>

@protocol ChartUpdaterDelegate;
@class Stock, StockChartData;

@interface ChartUpdater : YQLRequest {

	Stock* _stock;
	StockChartData* _currentChartData;
	/*^block*/id _updateCompletionHandler;
	id<ChartUpdaterDelegate> _delegate;
	long long _interval;

}

@property (assign,nonatomic,__weak) id<ChartUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) long long interval;                                            //@synthesize interval=_interval - In the implementation block
+(id)_rangeStringForInterval:(long long)arg1 ;
-(id<ChartUpdaterDelegate>)delegate;
-(void)setDelegate:(id<ChartUpdaterDelegate>)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)cancel;
-(long long)interval;
-(void)parseData:(id)arg1 ;
-(void)didParseData;
-(id)aggregateDictionaryDomain;
-(BOOL)updateChartForStock:(id)arg1 interval:(long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)parseDataSeriesDictionary:(id)arg1 ;
-(BOOL)updateChartForStock:(id)arg1 interval:(long long)arg2 ;
-(void)parseDataSeriesDictionary:(id)arg1 interval:(long long)arg2 ;
-(id)dataSeries;
@end

