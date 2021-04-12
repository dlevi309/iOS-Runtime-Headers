/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class ICRadioPlaybackHistoryStore, ICStoreRequestContext, MPModelRadioStation, _MPCModelRadioPlaybackQueueStationTracksCollection, MPCModelGenericAVItemUserIdentityPropertySet, ICRadioPlaybackHistory, MPSectionedCollection;

@interface MPCModelRadioPlaybackQueue : NSObject {

	ICRadioPlaybackHistoryStore* _playbackHistoryStore;
	ICStoreRequestContext* _storeRequestContext;
	MPModelRadioStation* _radioStation;
	_MPCModelRadioPlaybackQueueStationTracksCollection* _stationTracks;

}

@property (nonatomic,retain) MPCModelGenericAVItemUserIdentityPropertySet * identityPropertySet; 
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,retain) MPModelRadioStation * radioStation;                                              //@synthesize radioStation=_radioStation - In the implementation block
@property (nonatomic,copy,readonly) ICRadioPlaybackHistory * playbackHistory; 
@property (nonatomic,readonly) MPSectionedCollection * trackModels; 
@property (nonatomic,readonly) MPSectionedCollection * tracks; 
-(long long)numberOfItems;
-(MPSectionedCollection *)tracks;
-(void)setRadioStation:(MPModelRadioStation *)arg1 ;
-(MPModelRadioStation *)radioStation;
-(id)initWithPlaybackContext:(id)arg1 ;
-(MPCModelGenericAVItemUserIdentityPropertySet *)identityPropertySet;
-(void)setIdentityPropertySet:(MPCModelGenericAVItemUserIdentityPropertySet *)arg1 ;
-(id)AVItemAtIndex:(long long)arg1 ;
-(BOOL)isExplicitItemAtIndex:(long long)arg1 ;
-(ICRadioPlaybackHistory *)playbackHistory;
-(long long)removeExplicitItems;
-(void)savePlaybackHistoryWithUpdates:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(MPSectionedCollection *)trackModels;
-(id)trackForItemAtIndex:(long long)arg1 ;
-(void)updateWithPersonalizedResponse:(id)arg1 ;
-(void)savePlaybackHistoryWithUpdates:(/*^block*/id)arg1 ;
-(id)tracksByApplyingTracksResponse:(id)arg1 currentIndex:(long long)arg2 ;
@end

