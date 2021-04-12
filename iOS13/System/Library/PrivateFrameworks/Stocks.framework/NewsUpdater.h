/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id<NewsUpdaterDelegate>)delegate;
-(void)setDelegate:(id<NewsUpdaterDelegate>)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)parseData:(id)arg1 ;
-(void)resetLocale;
-(void)didParseData;
-(id)aggregateDictionaryDomain;
-(void)clearNewsCacheOnDisk;
-(void)fetchNewsForStock:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)shouldReloadOnResume;
-(void)loadNewsCacheFromDiskForSymbol:(id)arg1 ;
-(void)fetchNewsForStock:(id)arg1 ;
-(void)saveLastResponse;
@end

