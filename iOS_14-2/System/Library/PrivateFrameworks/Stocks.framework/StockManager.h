/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class NSMutableArray, NSUbiquitousKeyValueStore;

@interface StockManager : NSObject {

	NSMutableArray* _defaultListStockSymbols;
	BOOL _shouldPostSyncNotifications;
	NSMutableArray* _stocksList;
	NSMutableArray* _chartDataLRUCache;
	double _lastModifiedTime;
	BOOL _needRemoteAddNotification;
	BOOL _needRemoteDeleteNotification;
	BOOL _needRemoteMoveNotification;
	NSUbiquitousKeyValueStore* _syncedKVStore;

}
+(id)sharedManager;
+(void)clearSharedManager;
-(id)init;
-(void)handleSyncedDataChanged:(id)arg1 ;
-(void)dealloc;
-(void)UpdateChartDataInLRU:(id)arg1 ;
-(void)RemoveChartDataFromLRU:(id)arg1 ;
-(void)reloadStocksFromDefaults;
-(id)stocksList;
-(void)saveDataChanges;
-(id)stockWithSymbol:(id)arg1 ;
-(id)_defaultStockDictionaries;
-(BOOL)setLocalStockListFromSyncableStockList:(id)arg1 ;
-(void)saveListChanges;
-(void)clearCachedChartData;
-(id)makeSyncableStockListFromList:(id)arg1 ;
-(void)_addStock:(id)arg1 withRemoteNotification:(BOOL)arg2 ;
-(void)_removeStock:(id)arg1 withRemoteNotification:(BOOL)arg2 ;
-(void)DeleteChartData:(id)arg1 ;
-(void)_saveDataChangesWithStockDictionaries:(id)arg1 ;
-(id)stockForURL:(id)arg1 ;
-(void)addStock:(id)arg1 ;
-(void)removeStock:(id)arg1 ;
-(void)moveStockFromIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)clearCachedChartDataImageSets;
-(BOOL)anyMarketOpen;
-(void)purgeTransientData;
-(void)_checkForAddedStocks;
-(void)_checkForDeletedStocks;
-(void)_checkForMovedStocks;
@end

