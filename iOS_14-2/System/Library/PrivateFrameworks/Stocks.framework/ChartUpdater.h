/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)parseData:(id)arg1 ;
-(long long)interval;
-(id<ChartUpdaterDelegate>)delegate;
-(BOOL)updateChartForStock:(id)arg1 interval:(long long)arg2 ;
-(void)setDelegate:(id<ChartUpdaterDelegate>)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)cancel;
-(void)didParseData;
-(BOOL)updateChartForStock:(id)arg1 interval:(long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)parseDataSeriesDictionary:(id)arg1 ;
-(void)parseDataSeriesDictionary:(id)arg1 interval:(long long)arg2 ;
-(id)dataSeries;
@end

