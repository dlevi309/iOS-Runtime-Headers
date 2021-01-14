/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKTransitItemReferenceDateUpdater.h>

@class MKMapItem, NSTimer, NSDate;

@interface MKTransitMapItemUpdater : MKTransitItemReferenceDateUpdater {

	BOOL _lastInfoRefreshFailed;
	BOOL _refreshing;
	MKMapItem* _mapItem;
	NSTimer* _dataRefreshTimer;
	NSDate* _suggestedDataRefreshDate;

}

@property (nonatomic,readonly) MKMapItem * mapItem;                                            //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKTransitMapItemUpdaterDelegate> delegate; 
@property (assign,nonatomic) BOOL lastInfoRefreshFailed;                                       //@synthesize lastInfoRefreshFailed=_lastInfoRefreshFailed - In the implementation block
@property (assign,getter=isRefreshing,nonatomic) BOOL refreshing;                              //@synthesize refreshing=_refreshing - In the implementation block
@property (nonatomic,retain) NSTimer * dataRefreshTimer;                                       //@synthesize dataRefreshTimer=_dataRefreshTimer - In the implementation block
@property (nonatomic,retain) NSDate * suggestedDataRefreshDate;                                //@synthesize suggestedDataRefreshDate=_suggestedDataRefreshDate - In the implementation block
-(void)setActive:(BOOL)arg1 ;
-(id)initWithMapItem:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isStuckWithExpiredInfoRelativeToDate:(id)arg1 ;
-(BOOL)lastInfoRefreshFailed;
-(MKMapItem *)mapItem;
-(BOOL)isRefreshing;
-(NSTimer *)dataRefreshTimer;
-(void)_transitInfoUpdated;
-(void)_resumeDataRefreshTimer;
-(void)_suspendDataRefreshTimer;
-(NSDate *)suggestedDataRefreshDate;
-(void)_scheduleDataUpdateForTransitItemAtDate:(id)arg1 ;
-(void)_refreshTransitInfoIfNeeded;
-(void)setDataRefreshTimer:(NSTimer *)arg1 ;
-(void)setSuggestedDataRefreshDate:(NSDate *)arg1 ;
-(void)setRefreshing:(BOOL)arg1 ;
-(void)_processUpdatedMapItems:(id)arg1 identifier:(id)arg2 ttl:(double)arg3 error:(id)arg4 ;
-(void)setLastInfoRefreshFailed:(BOOL)arg1 ;
-(BOOL)_isInfoExpiredRelativeToDate:(id)arg1 ;
@end

