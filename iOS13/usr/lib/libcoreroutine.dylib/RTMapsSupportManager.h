/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol OS_dispatch_queue;
#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@class RTMapServiceManager, NSObject, RTTimerManager;

@interface RTMapsSupportManager : NSObject {

	RTMapServiceManager* _mapServiceManager;
	NSObject*<OS_dispatch_queue> _queue;
	RTTimerManager* _timerManager;

}

@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;              //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RTTimerManager * timerManager;                        //@synthesize timerManager=_timerManager - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(RTTimerManager *)timerManager;
-(void)setTimerManager:(RTTimerManager *)arg1 ;
-(void)showParkedCarBulletinForEvent:(id)arg1 ;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 ;
-(void)clearParkedCarBulletin;
-(RTMapServiceManager *)mapServiceManager;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(id)initWithMapServiceManager:(id)arg1 ;
-(void)_showParkedCarBulletinForEvent:(id)arg1 ;
-(void)_showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 ;
-(void)_clearParkedCarBulletin;
-(id)initWithMapServiceManager:(id)arg1 timerManager:(id)arg2 ;
-(void)_fetchFavoritePlacesWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchPinnedPlacesWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchHistoryEntryPlaceDisplaysWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchHistoryEntryRoutesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchFavoritePlacesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchPinnedPlacesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchHistoryEntryPlaceDisplaysWithHandler:(/*^block*/id)arg1 ;
-(void)fetchHistoryEntryRoutesWithHandler:(/*^block*/id)arg1 ;
@end

