/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPQueueFeeder.h>
#import <libobjc.A.dylib/MPRTCReportingItemSessionContaining.h>
#import <libobjc.A.dylib/MPAVItemObserver.h>
#import <libobjc.A.dylib/MPCQueueControllerDataSource.h>

@protocol MPMutableIdentifierListSection, OS_dispatch_queue;
@class MPCModelRadioPlaybackQueue, NSObject, MPAVItem, NSString, MPCModelRadioPersonalizationResponse, MPCPlaybackRequestEnvironment, ICUserIdentityStore, ICUserIdentity, ICStoreRequestContext, SSVPlayActivityController, NSDictionary;

@interface MPCModelRadioQueueFeeder : MPQueueFeeder <MPRTCReportingItemSessionContaining, MPAVItemObserver, MPCQueueControllerDataSource> {

	id<MPMutableIdentifierListSection> _section;
	MPCModelRadioPlaybackQueue* _playbackQueue;
	NSObject*<OS_dispatch_queue> _diffQueue;
	unsigned long long _backgroundTaskIdentifier;
	unsigned long long _backgroundTasks;
	MPAVItem* _currentItem;
	BOOL _hasReachedTracklistEnd;
	NSString* _lastCleanPlayedIdentifier;
	NSString* _lastPlayedIdentifier;
	MPCModelRadioPersonalizationResponse* _lastResponse;
	BOOL _mayHaveRestrictedContent;
	MPCPlaybackRequestEnvironment* _playbackRequestEnvironment;
	long long _queueGeneration;
	NSString* _siriAssetInfo;
	ICUserIdentityStore* _observedIdentityStore;
	ICUserIdentity* _proactiveCacheIdentity;
	ICStoreRequestContext* _storeRequestContext;
	SSVPlayActivityController* _playActivityController;
	/*^block*/id _finalTracklistLoadingCompletionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * rtcReportingPlayQueueSourceIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * rtcReportingSessionAdditionalUserInfo; 
@property (nonatomic,readonly) BOOL containsLiveStream; 
@property (nonatomic,readonly) BOOL containsTransportableContent; 
+(id)sharedQueue;
-(id)init;
-(void)dealloc;
-(long long)itemCount;
-(id)modelPlayEvent;
-(long long)supplementalPlaybackContextBehavior;
-(id)supplementalPlaybackContextWithReason:(long long)arg1 ;
-(void)getRepresentativeMetadataForPlaybackContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_beginBackgroundTaskAssertion;
-(void)_endBackgroundTaskAssertion;
-(NSString *)rtcReportingPlayQueueSourceIdentifier;
-(NSDictionary *)rtcReportingSessionAdditionalUserInfo;
-(void)reloadSection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didSignificantlyChangeItem:(id)arg1 ;
-(BOOL)section:(id)arg1 supportsShuffleType:(long long)arg2 ;
-(void)loadPlaybackContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)itemForItem:(id)arg1 inSection:(id)arg2 ;
-(BOOL)containsLiveStream;
-(BOOL)containsTransportableContent;
-(void)itemDidBeginPlayback:(id)arg1 ;
-(BOOL)canSkipItem:(id)arg1 ;
-(BOOL)shouldRequestAdditionalItemsWhenReachingTailOfSection:(id)arg1 ;
-(void)loadAdditionalItemsForSection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)placeholderItemForLoadingAdditionalItemsInSection:(id)arg1 ;
-(void)_updateProactiveCaching;
-(void)_endObservingIdentityStoreForSignOut;
-(id)_startPlaybackRequestWithPlaybackContext:(id)arg1 ;
-(void)_loadTracksWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_defaultGetTracksRequestWithContext:(id)arg1 radioStation:(id)arg2 ;
-(void)_detectSignOutForIdentityStore:(id)arg1 ;
-(void)_responseDidInvalidate;
-(void)_detectSignOutForIdentityStoreChangeNotification:(id)arg1 ;
-(id)_errorForRequest:(id)arg1 withError:(id)arg2 ;
-(void)_handlePersonalizationResponse:(id)arg1 personalizationError:(id)arg2 fromRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_observePersonalizationResponse:(id)arg1 ;
-(void)_savePlaybackHistoryWithCurrentIndex:(long long)arg1 ;
-(void)_beginObservingIdentityStoreForSignOut;
-(void)_handleGetTracksResponse:(id)arg1 getTracksError:(id)arg2 fromRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_responseDidInvalidateNotification:(id)arg1 ;
-(void)_removeRestrictedTracks;
-(void)_repersonalizeCurrentTracks;
@end

