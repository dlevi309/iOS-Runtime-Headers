/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class NSData, MPAVItem, NSOperationQueue, NSString, MPAVController, MPCReportingController;

@interface MPCReportingPlaybackObserver : NSObject {

	NSData* _currentJingleReportingTimedMetadata;
	BOOL _hasPendingContainerChange;
	BOOL _hasSetLastPlayEventTimeStamp;
	BOOL _isReloadingWithPlaybackContext;
	BOOL _itemDidChangeWhenReloadingPlaybackContext;
	BOOL _isScrubbing;
	BOOL _currentItemIsHLS;
	MPAVItem* _itemForCurrentTimeChange;
	NSOperationQueue* _recordEventOperationQueue;
	NSString* _itemContentItemIDForLastPlayEventEndTime;
	double _lastPlayEventEndTimeForCurrentItem;
	double _lastPlayEventTimeStamp;
	BOOL _shouldReportAsPlaying;
	double _startTimeForCurrentTimeChange;
	BOOL _offline;
	BOOL _SBEnabled;
	MPAVController* _player;
	MPCReportingController* _reportingController;
	unsigned long long _storeAccountID;
	NSString* _storeFrontID;

}

@property (nonatomic,readonly) MPAVController * player;                                      //@synthesize player=_player - In the implementation block
@property (assign,getter=isOffline,nonatomic) BOOL offline;                                  //@synthesize offline=_offline - In the implementation block
@property (nonatomic,readonly) MPCReportingController * reportingController;                 //@synthesize reportingController=_reportingController - In the implementation block
@property (assign,setter=BEnabled,getter=isSBEnabled,nonatomic) BOOL SBEnabled;              //@synthesize SBEnabled=_SBEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long storeAccountID;                              //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,copy) NSString * storeFrontID;                                          //@synthesize storeFrontID=_storeFrontID - In the implementation block
-(MPAVController *)player;
-(void)_playerItemWillChangeNotification:(id)arg1 ;
-(void)setSBEnabled:(BOOL)arg1 ;
-(id)initWithPlayer:(id)arg1 reportingController:(id)arg2 ;
-(double)_itemEndTimeForItem:(id)arg1 withProposedEndTime:(double)arg2 ;
-(BOOL)isOffline;
-(void)_sendPlaybackStartNotification;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(void)setOffline:(BOOL)arg1 ;
-(void)_playerItemDidChangeNotification:(id)arg1 ;
-(unsigned long long)storeAccountID;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(MPCReportingController *)reportingController;
-(void)_playerDidSetCurrentTimeNotification:(id)arg1 ;
-(BOOL)isSBEnabled;
-(void)_playerWillSetCurrentTimeNotification:(id)arg1 ;
-(NSString *)storeFrontID;
-(void)recordPlayActivityEvents:(id)arg1 forEventSource:(id)arg2 ;
-(void)_playerPlaybackStateDidChangeNotification:(id)arg1 ;
-(void)didTransitionItemForBan:(id)arg1 ;
-(id)_newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg1 eventSource:(id)arg2 ;
-(void)recordUserSeekFromTime:(double)arg1 toTime:(double)arg2 forItem:(id)arg3 ;
-(void)_reportPlaybackEndedForTimeoutWithItem:(id)arg1 ;
-(void)_playerDidReloadWithPlaybackContextNotification:(id)arg1 ;
-(void)didHitPlaybackTimeoutEndingPlayback:(BOOL)arg1 withCurrentItem:(id)arg2 ;
-(void)_playerItemDidChangeWhenReloadingPlaybackContextNotification:(id)arg1 ;
-(void)_sendPlaybackEndNotification:(double)arg1 endTime:(double)arg2 ;
-(void)_itemReportingJingleTimedMetadataDidChangeNotification:(id)arg1 ;
-(void)_setLastPlayEventEndTime:(double)arg1 forItemContentItemID:(id)arg2 ;
-(void)_playerWillReloadWithPlaybackContextNotification:(id)arg1 ;
-(id)newPlayActivityEvent;
-(void)willHitPlaybackTimeoutEndingPlayback:(BOOL)arg1 withCurrentItem:(id)arg2 ;
-(double)_itemStartTimeForItem:(id)arg1 ;
-(void)dealloc;
-(void)willTransitionItemForBan:(id)arg1 ;
@end

