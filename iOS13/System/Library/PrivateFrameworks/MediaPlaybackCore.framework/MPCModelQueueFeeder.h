/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPQueueFeeder.h>
#import <libobjc.A.dylib/MPRTCReportingItemSessionContaining.h>
#import <libobjc.A.dylib/MPRequestResponseControllerDelegate.h>
#import <libobjc.A.dylib/MPCQueueControllerDataSource.h>

@protocol OS_dispatch_queue, MPCModelPlaybackRequest, MPCModelPlaybackResponse, MPMutableIdentifierListSection;
@class NSString, NSDictionary, NSObject, NSLock, NSHashTable, MPRequestResponseController, MPModelRequest, MPModelResponse, MPCPlaybackRequestEnvironment, ICUserIdentity, MPIdentifierSet, MPCModelGenericAVItemUserIdentityPropertySet, MPAVItem, MPCModelPlaybackContext, MPModelGenericObject;

@interface MPCModelQueueFeeder : MPQueueFeeder <MPRTCReportingItemSessionContaining, MPRequestResponseControllerDelegate, MPCQueueControllerDataSource> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _diffQueue;
	NSLock* _diffLock;
	NSHashTable* _activeModelGenericAVItems;
	NSDictionary* _assetStoreFronts;
	unsigned long long _backgroundTaskIdentifier;
	unsigned long long _backgroundTasks;
	NSDictionary* _endTimeModifications;
	/*^block*/id _loadingCompletionHandler;
	MPRequestResponseController* _requestController;
	MPModelRequest*<MPCModelPlaybackRequest> _request;
	MPModelResponse*<MPCModelPlaybackResponse> _response;
	NSString* _rtcReportingPlayQueueSourceIdentifier;
	BOOL _isSiriInitiated;
	MPCPlaybackRequestEnvironment* _playbackRequestEnvironment;
	ICUserIdentity* _proactiveCacheIdentity;
	MPIdentifierSet* _startItemIdentifiers;
	NSDictionary* _startTimeModifications;
	id<MPMutableIdentifierListSection> _section;
	MPCModelGenericAVItemUserIdentityPropertySet* _identityPropertySet;
	MPAVItem* _currentItem;
	MPCModelPlaybackContext* _playbackContext;
	MPModelGenericObject* _fallbackSectionRepresentation;

}

@property (nonatomic,copy) MPModelGenericObject * fallbackSectionRepresentation;                       //@synthesize fallbackSectionRepresentation=_fallbackSectionRepresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * rtcReportingPlayQueueSourceIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * rtcReportingSessionAdditionalUserInfo; 
@property (nonatomic,readonly) BOOL containsLiveStream; 
@property (nonatomic,readonly) BOOL containsTransportableContent; 
+(id)requiredPropertiesForStaticMediaClips;
-(id)init;
-(void)dealloc;
-(id)uniqueIdentifier;
-(id)modelPlayEvent;
-(long long)supplementalPlaybackContextBehavior;
-(id)supplementalPlaybackContextWithReason:(long long)arg1 ;
-(void)getRepresentativeMetadataForPlaybackContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)applyVolumeNormalizationForItem:(id)arg1 ;
-(id)playbackInfoForItem:(id)arg1 ;
-(BOOL)section:(id)arg1 shouldShuffleExcludeItem:(id)arg2 ;
-(void)_beginBackgroundTaskAssertion;
-(void)_endBackgroundTaskAssertion;
-(NSString *)rtcReportingPlayQueueSourceIdentifier;
-(void)controller:(id)arg1 defersResponseReplacement:(/*^block*/id)arg2 ;
-(BOOL)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2 ;
-(void)didFinishLoadingRequestForController:(id)arg1 ;
-(void)willBeginLoadingRequestForController:(id)arg1 ;
-(void)reloadSection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)section:(id)arg1 supportsShuffleType:(long long)arg2 ;
-(void)loadPlaybackContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)itemForItem:(id)arg1 inSection:(id)arg2 ;
-(BOOL)containsLiveStream;
-(BOOL)containsTransportableContent;
-(void)itemDidBeginPlayback:(id)arg1 ;
-(BOOL)shouldUsePlaceholderForItem:(id)arg1 inSection:(id)arg2 ;
-(id)firstItemIntersectingIdentifierSet:(id)arg1 ;
-(void)_updateProactiveCaching;
-(id)_equivalencySourceAdamIDForIdentifierSet:(id)arg1 ;
-(id)_sectionedModelObjectsRepresentationForSectionedCollection:(id)arg1 ;
-(id)_supplementalLibraryRequest;
-(MPModelGenericObject *)fallbackSectionRepresentation;
-(id)updatedPlaybackContext;
-(void)setFallbackSectionRepresentation:(MPModelGenericObject *)arg1 ;
@end

