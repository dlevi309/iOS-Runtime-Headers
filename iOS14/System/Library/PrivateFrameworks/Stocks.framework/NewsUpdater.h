/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <Stocks/YQLRequest.h>

@protocol NewsUpdaterDelegate;
@class StockNewsItemCollection, Stock;

@interface NewsUpdater : YQLRequest {

	id<NewsUpdaterDelegate> _delegate;
	BOOL _firstLoad;
	double _lastResponseTimestamp;
	StockNewsItemCollection* _lastNewsItemCollection;
	Stock* _stock;
	/*^block*/id _updateCompletionHandler;

}

@property (assign,nonatomic,__weak) id<NewsUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_newsItemCollectionCache;
+(id)sharedNewsUpdater;
-(void)parseData:(id)arg1 ;
-(id)init;
-(id<NewsUpdaterDelegate>)delegate;
-(void)setDelegate:(id<NewsUpdaterDelegate>)arg1 ;
-(void)resetLocale;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(void)clearNewsCacheOnDisk;
-(void)fetchNewsForStock:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)shouldReloadOnResume;
-(void)loadNewsCacheFromDiskForSymbol:(id)arg1 ;
-(void)fetchNewsForStock:(id)arg1 ;
-(void)saveLastResponse;
@end

