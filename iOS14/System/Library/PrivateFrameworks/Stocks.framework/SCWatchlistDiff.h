/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class NSArray, NSDictionary;

@interface SCWatchlistDiff : NSObject {

	NSArray* _addedStocks;
	NSDictionary* _indexesOfAddedStocks;
	NSArray* _removedStocks;
	NSArray* _reorderedStocks;
	NSDictionary* _indexesOfReorderedStocks;
	NSArray* _stocksPreDiff;
	NSArray* _stocksPostDiff;

}

@property (nonatomic,copy,readonly) NSArray * addedStocks;                                //@synthesize addedStocks=_addedStocks - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * indexesOfAddedStocks;                  //@synthesize indexesOfAddedStocks=_indexesOfAddedStocks - In the implementation block
@property (nonatomic,copy,readonly) NSArray * removedStocks;                              //@synthesize removedStocks=_removedStocks - In the implementation block
@property (nonatomic,copy,readonly) NSArray * reorderedStocks;                            //@synthesize reorderedStocks=_reorderedStocks - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * indexesOfReorderedStocks;              //@synthesize indexesOfReorderedStocks=_indexesOfReorderedStocks - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,copy,readonly) NSArray * stocksPreDiff;                              //@synthesize stocksPreDiff=_stocksPreDiff - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stocksPostDiff;                             //@synthesize stocksPostDiff=_stocksPostDiff - In the implementation block
+(id)reorderedStocksFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)isEmpty;
-(NSArray *)addedStocks;
-(NSArray *)removedStocks;
-(NSDictionary *)indexesOfAddedStocks;
-(NSArray *)reorderedStocks;
-(NSDictionary *)indexesOfReorderedStocks;
-(NSArray *)stocksPostDiff;
-(id)initWithOldStocks:(id)arg1 newStocks:(id)arg2 ;
-(NSArray *)stocksPreDiff;
@end

