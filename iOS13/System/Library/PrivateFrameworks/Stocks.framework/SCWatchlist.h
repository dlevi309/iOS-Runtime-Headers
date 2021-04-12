/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <libobjc.A.dylib/SCKDatabaseObserver.h>

@protocol SCWatchlistMetadataProviding, SCWatchlistDefaultsProviding, OS_dispatch_queue;
@class SCKDatabase, NSHashTable, SCKStartupQueue, NSObject;

@interface SCWatchlist : NSObject <SCKDatabaseObserver> {

	SCKDatabase* _database;
	id<SCWatchlistMetadataProviding> _metadataProvider;
	id<SCWatchlistDefaultsProviding> _defaultsProvider;
	NSHashTable* _observers;
	SCKStartupQueue* _startupQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) SCKDatabase * database;                                         //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) id<SCWatchlistMetadataProviding> metadataProvider;              //@synthesize metadataProvider=_metadataProvider - In the implementation block
@property (nonatomic,retain) id<SCWatchlistDefaultsProviding> defaultsProvider;              //@synthesize defaultsProvider=_defaultsProvider - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                        //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) SCKStartupQueue * startupQueue;                                 //@synthesize startupQueue=_startupQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                     //@synthesize callbackQueue=_callbackQueue - In the implementation block
+(id)supportedCommands;
+(id)zoneSchema;
+(id)zoneMergeHandler;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setDatabase:(SCKDatabase *)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(SCKDatabase *)database;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(id<SCWatchlistMetadataProviding>)metadataProvider;
-(void)setMetadataProvider:(id<SCWatchlistMetadataProviding>)arg1 ;
-(void)_enqueueStartupSequence;
-(id)initWithDatabase:(id)arg1 metadataProvider:(id)arg2 defaultsProvider:(id)arg3 ;
-(SCKStartupQueue *)startupQueue;
-(id)_sortedStocks:(id)arg1 withSymbolOrder:(id)arg2 ;
-(void)removeSymbol:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<SCWatchlistDefaultsProviding>)defaultsProvider;
-(void)database:(id)arg1 didChangeZone:(id)arg2 from:(id)arg3 to:(id)arg4 ;
-(id)initWithDatabase:(id)arg1 metadataProvider:(id)arg2 defaults:(id)arg3 ;
-(void)fetchStocksWithCompletion:(/*^block*/id)arg1 ;
-(void)addStock:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reorderSymbol:(id)arg1 afterSymbol:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)replaceSymbol:(id)arg1 withSymbol:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeStock:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reorderStock:(id)arg1 toIndex:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDefaultsProvider:(id<SCWatchlistDefaultsProviding>)arg1 ;
-(void)setStartupQueue:(SCKStartupQueue *)arg1 ;
@end

