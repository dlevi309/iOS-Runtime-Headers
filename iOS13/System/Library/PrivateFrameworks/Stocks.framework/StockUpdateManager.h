/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <Stocks/StockUpdaterDelegate.h>

@class NSMutableArray, NSHashTable, NSString;

@interface StockUpdateManager : NSObject <StockUpdaterDelegate> {

	BOOL _postingRemoteUpdateNotification;
	NSMutableArray* _activeUpdaters;
	NSMutableArray* _inactiveUpdaters;
	NSHashTable* _updateObservers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)failWithError:(id)arg1 ;
-(void)cancel;
-(void)reset;
-(BOOL)isLoading;
-(void)removeUpdateObserver:(id)arg1 ;
-(void)addUpdateObserver:(id)arg1 ;
-(void)_stocksDidReload;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)hadError;
-(id)availableStockUpdater;
-(void)_kickoffUpdater:(id)arg1 forStocks:(id)arg2 comprehensive:(BOOL)arg3 forceUpdate:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)updateStockComprehensive:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateStockComprehensive:(id)arg1 forced:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)updateAllStocksBasicWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateStocksBasic:(id)arg1 forced:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_updaterDidCancelOrFinish:(id)arg1 ;
-(void)stockUpdater:(id)arg1 didRequestUpdateForStocks:(id)arg2 isComprehensive:(BOOL)arg3 ;
-(void)stockUpdater:(id)arg1 didUpdateStocks:(id)arg2 isComprehensive:(BOOL)arg3 ;
-(void)stockUpdater:(id)arg1 didFailWithError:(id)arg2 whileUpdatingStocks:(id)arg3 comprehensive:(BOOL)arg4 ;
-(void)stocksDidUpdateRemotely;
-(void)resetUpdaters;
-(void)updateStocksComprehensive:(id)arg1 ;
-(void)updateStockComprehensive:(id)arg1 ;
-(void)updateAllStocksBasic;
-(void)updateAllStocksBasic:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateStockBasicWithCompletion:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateStaleStocksBasicWithCompletion:(/*^block*/id)arg1 ;
@end

