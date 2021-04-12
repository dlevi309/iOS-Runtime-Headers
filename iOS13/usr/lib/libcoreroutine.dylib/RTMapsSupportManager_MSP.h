/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTMapsSupportManager.h>
#import <libobjc.A.dylib/MSPQueryDelegate.h>

@class MSPFavoritesContainer, MSPHistoryContainer, MSPPinnedPlacesContainer, RTTimerManager, RTTimer, NSMutableDictionary, NSString;

@interface RTMapsSupportManager_MSP : RTMapsSupportManager <MSPQueryDelegate> {

	MSPFavoritesContainer* _favoritesContainer;
	MSPHistoryContainer* _historyContainer;
	MSPPinnedPlacesContainer* _pinnedPlacesContainer;
	RTTimerManager* _timerManager;
	RTTimer* _queryTimer;
	NSMutableDictionary* _queryMap;

}

@property (nonatomic,retain) RTTimer * queryTimer;                          //@synthesize queryTimer=_queryTimer - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * queryMap;              //@synthesize queryMap=_queryMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createQueryWithContainer:(id)arg1 delegate:(id)arg2 filteredWithBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)_setup;
-(void)setup;
-(void)queryContentsDidLoad:(id)arg1 contentsVersion:(unsigned long long)arg2 ;
-(void)queryContentsDidChange:(id)arg1 contentsVersion:(unsigned long long)arg2 ;
-(id)favoritesContainer;
-(id)historyContainer;
-(id)pinnedPlacesContainer;
-(void)_showParkedCarBulletinForEvent:(id)arg1 ;
-(void)_showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 ;
-(void)_clearParkedCarBulletin;
-(id)initWithMapServiceManager:(id)arg1 timerManager:(id)arg2 ;
-(void)_fetchFavoritePlacesWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchPinnedPlacesWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchHistoryEntryPlaceDisplaysWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchHistoryEntryRoutesWithHandler:(/*^block*/id)arg1 ;
-(void)_createContainers;
-(void)_createQueries;
-(void)_createFavoritesQuery:(id)arg1 ;
-(void)_createHistoryPlaceDisplaysQuery:(id)arg1 ;
-(void)_createHistoryRoutesQuery:(id)arg1 ;
-(void)_createPinnedPlacesQuery:(id)arg1 ;
-(void)_startQueryTimer;
-(RTTimer *)queryTimer;
-(void)setQueryTimer:(RTTimer *)arg1 ;
-(void)_handleQueryTimerExpiry;
-(void)_queryContentsDidLoad:(id)arg1 contentsVersion:(unsigned long long)arg2 ;
-(void)_invalidateQueryTimer;
-(NSMutableDictionary *)queryMap;
@end

