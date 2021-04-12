/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/


@class TBDataSourceMediator, WiFi3BarsTileCacheObserver, NSXPCConnection;

@interface WiFi3BarsTileFetcher : NSObject {

	TBDataSourceMediator* _dataSourceMediator;
	unsigned long long _lastFetchedKey;
	WiFi3BarsTileCacheObserver* _tileCacheObserver;
	NSXPCConnection* _connectionToService;

}

@property (nonatomic,retain) TBDataSourceMediator * dataSourceMediator;                   //@synthesize dataSourceMediator=_dataSourceMediator - In the implementation block
@property (assign,nonatomic) unsigned long long lastFetchedKey;                           //@synthesize lastFetchedKey=_lastFetchedKey - In the implementation block
@property (nonatomic,retain) WiFi3BarsTileCacheObserver * tileCacheObserver;              //@synthesize tileCacheObserver=_tileCacheObserver - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connectionToService;                     //@synthesize connectionToService=_connectionToService - In the implementation block
-(void)dealloc;
-(id)initWithDataSourceMediator:(id)arg1 ;
-(void)_handleLocationManagerVisitCallbackWithVisit:(id)arg1 ;
-(TBDataSourceMediator *)dataSourceMediator;
-(void)setDataSourceMediator:(TBDataSourceMediator *)arg1 ;
-(unsigned long long)lastFetchedKey;
-(void)setLastFetchedKey:(unsigned long long)arg1 ;
-(WiFi3BarsTileCacheObserver *)tileCacheObserver;
-(void)setTileCacheObserver:(WiFi3BarsTileCacheObserver *)arg1 ;
-(NSXPCConnection *)connectionToService;
@end

