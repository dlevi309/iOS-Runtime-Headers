/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>
#import <libobjc.A.dylib/MapsSync.MapsSyncDataQueryDelegate.h>

@class NSMutableDictionary, RTMapServiceManager;

@interface RTMapsSupportManager : RTService <MapsSync.MapsSyncDataQueryDelegate> {

	NSMutableDictionary* _queryMap;
	RTMapServiceManager* _mapServiceManager;

}

@property (nonatomic,retain) NSMutableDictionary * queryMap;                       //@synthesize queryMap=_queryMap - In the implementation block
@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;              //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(RTMapServiceManager *)mapServiceManager;
-(void)_setup;
-(id)init;
-(void)queryContentsDidChangeWithQuery:(id)arg1 ;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 ;
-(void)clearParkedCarBulletin;
-(void)showParkedCarBulletinForEvent:(id)arg1 ;
-(id)initWithMapServiceManager:(id)arg1 ;
-(void)_createQueries;
-(NSMutableDictionary *)queryMap;
-(void)_showParkedCarBulletinForEvent:(id)arg1 ;
-(void)_showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 ;
-(void)_clearParkedCarBulletin;
-(void)_fetchFavoritePlacesWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchPinnedPlacesWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchHistoryEntryPlaceDisplaysWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchHistoryEntryRoutesWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchFavoritePlacesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchPinnedPlacesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchHistoryEntryPlaceDisplaysWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchHistoryEntryRoutesWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(long long)_queryTypeForQuery:(id)arg1 ;
-(void)setQueryMap:(NSMutableDictionary *)arg1 ;
@end

