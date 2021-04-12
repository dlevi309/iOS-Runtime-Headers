/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithPlaybackContext:(id)arg1 ;
-(MPSectionedCollection *)tracks;
-(void)setRadioStation:(MPModelRadioStation *)arg1 ;
-(MPModelRadioStation *)radioStation;
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

