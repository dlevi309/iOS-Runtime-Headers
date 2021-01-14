/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXUserEventTrackerCommon.h>

@class NSHashTable;

@interface PXUserEventTracker : PXUserEventTrackerCommon {

	double _timeLoggedOnDetailViewWillAppear;
	double _timeLoggedOnMemoriesFeedWillAppear;
	unsigned long long _totalNumberOfRelatedJumps;
	unsigned long long _MaxDepthOfRelatedJumps;
	NSHashTable* __relatedLookupTable;

}

@property (setter=_setRelatedLookupTable:,nonatomic,retain) NSHashTable * _relatedLookupTable;              //@synthesize _relatedLookupTable=__relatedLookupTable - In the implementation block
+(id)sharedInstance;
-(void)logForYouMemoriesFeedCount;
-(void)livePhotoEffectSelected:(long long)arg1 ;
-(void)livePhotoEffectPreviewFinishedRendering:(double)arg1 ;
-(void)logViewCountForLogSubState:(unsigned long long)arg1 ;
-(void)_resetDetailViewTraversalStatistics;
-(void)_aggdJumpCountLoggingDryrun:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2 ;
-(void)logInterestingMemoryNotificationRespondedCount;
-(id)init;
-(void)logForYouMemoriesDetailsCount;
-(void)_logAggdDurationCounterForLogState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)logCounterValuesForLogSubState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)logUserDidSelectGadgetAccessoryButtonWithKey:(CFStringRef)arg1 ;
-(void)_logAggdAddValueForScalarKey:(CFStringRef)arg1 value:(long long)arg2 ;
-(void)livePhotoEffectOptionsAppeared;
-(void)logPeopleConfirmAdditionalViewCount;
-(void)willViewMemoriesFeedView;
-(void)logPeopleHomeNumberOfPeopleWithContactName:(unsigned long long)arg1 numberOfPeopleWithStringName:(unsigned long long)arg2 ;
-(void)_aggdDurationLoggingDryrun:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)logPeopleAddToPeopleHome;
-(void)logZKSectionVisible:(BOOL)arg1 forSectionType:(long long)arg2 ;
-(void)livePhotoEffectSavingFailed;
-(void)logSearchResultType:(unsigned long long)arg1 ;
-(void)logPeopleMeSuggestionConfirmed:(BOOL)arg1 ;
-(void)logForYouNavigatedToSharedAlbumActivityViewFromRecentActivityEntry;
-(void)didPresentOneUpFromOrigin:(long long)arg1 ;
-(void)logBootstrapMergeCandidatesVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4 ;
-(void)didNavigateInOneUpFromOrigin:(long long)arg1 ;
-(void)logForYouSuggestionSavedCount;
-(void)logConfirmAdditionalSuggestionsConfirmed:(unsigned long long)arg1 rejected:(unsigned long long)arg2 ;
-(void)logForYouSuggestionViewed1UpCount;
-(void)logSearchNumberOfTermsInSearchFieldOnSuccessfulSearch:(unsigned long long)arg1 ;
-(void)logImpressionCountForEventSource:(unsigned long long)arg1 ;
-(void)logMergeCandidateInlineControlWithSignature:(unsigned long long)arg1 ;
-(void)logTappedZKItemType:(long long)arg1 ;
-(void)didFinishViewingDetailsWithCurrentContext:(id)arg1 ;
-(void)didPlayMiroMovieForAssetCollection:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)logSearchSiriFoundResults:(BOOL)arg1 ;
-(void)didFavoriteMemory;
-(void)logForYouNavigatedToSharedAlbumActivityViewFromCollageView;
-(void)livePhotoEffectSuggestionApplied;
-(void)didConfirmDeleteOfMemory;
-(void)logForYouSuggestionSharedCount;
-(void)didViewDetailsForAssetCollection:(id)arg1 ;
-(void)logCounterValuesForLogSubSubState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)logNamingTypeSelection:(unsigned long long)arg1 ;
-(void)logForYouInboxItemSelectedWithType:(long long)arg1 ;
-(void)logConfirmAdditionalMergeCandidatesVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4 ;
-(void)logPeopleHomeFavoritePersonCount:(unsigned long long)arg1 totalPersonCount:(unsigned long long)arg2 ;
-(void)livePhotoEffectSuggested:(long long)arg1 ;
-(void)logInterestingMemoryNotificationSeenCount;
-(void)logForYouInboxViewedCount;
-(void)logSearchTapSearch;
-(void)logPeopleDetailKeyPhotoChanged;
-(void)logSearchWordEmbeddingSelected;
-(void)livePhotoEffectRenderingFailed;
-(void)logSearchZeroKeywordSearch;
-(void)_logAggdDurationCounterForLogSubSubState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)logConfirmAdditionalVisionFaceCountConfirmed:(unsigned long long)arg1 rejected:(unsigned long long)arg2 ;
-(void)logPeopleDetailNotThisPerson;
-(void)logSearchWordEmbeddingsPresented;
-(void)logCounterValuesForLogState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)logForYouSharedAlbumInvitationReportedAsJunkCount;
-(CFStringRef)_aggdKeyForFirstTimeExperienceIsReady:(BOOL)arg1 librarySize:(long long)arg2 ;
-(void)willViewDetailsWithCurrentContext:(id)arg1 ;
-(void)didCreateMemoryViaAddToMemories;
-(void)logPeopleDetailCount;
-(void)livePhotoEffectShared;
-(void)logBootstrapMergeCandidateFaceCountVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4 ;
-(void)logSearchNextTokenSuggestionTapped;
-(void)logSearchPerSessionNextTokenSuggestionTapped:(BOOL)arg1 wordCompletionTapped:(BOOL)arg2 ;
-(void)_logAggdDurationCounterForLogSubState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)logForYouSharedAlbumInvitationDeclinedCount;
-(void)logPeopleDetailShowFaces;
-(void)logSearchSuccessfulResult:(BOOL)arg1 ;
-(void)logForYouSuggestionViewedCount;
-(void)livePhotoEffectReverted;
-(NSHashTable *)_relatedLookupTable;
-(void)logForYouContextualMemoriesDetailsCount;
-(void)logForYouSharedAlbumInvitationAcceptedCount;
-(void)_logAggdRelatedJumpStatistics:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2 ;
-(void)logFirstTimeExpericeReadiness:(BOOL)arg1 forLibrarySize:(long long)arg2 ;
-(void)didFinishViewingMemoriesFeedView;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)logViewCountForLogState:(unsigned long long)arg1 ;
-(void)logPeopleHomeCount;
-(void)_aggdDurationLoggingDryrunForSubState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)logConfirmAdditionalMergeCandidateFaceCountVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4 ;
-(void)livePhotoEffectSavingFinished:(double)arg1 ;
-(void)logViewCountForLogSubSubState:(unsigned long long)arg1 ;
-(void)_setRelatedLookupTable:(id)arg1 ;
-(BOOL)isEventSourceSenderAppearingForTheFirstTime:(id)arg1 ;
-(void)logSearchWordCompletionTapped;
-(void)logPeopleRemoveFromPeopleHome;
-(void)logNavigationListViewTapWithKey:(CFStringRef)arg1 ;
@end

