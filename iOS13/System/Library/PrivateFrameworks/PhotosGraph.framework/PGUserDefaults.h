/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@interface PGUserDefaults : NSObject
+(void)initialize;
+(unsigned long long)maximumNumberOfVisibleItems;
+(unsigned long long)minimumNumberOfCuratedAssetsForInterestingMoments;
+(unsigned long long)minimumNumberOfCuratedAssetsForMemories;
+(BOOL)isMemoriesNotificationDisabled;
+(BOOL)isMemoriesLivingOnFeedbackEnabled;
+(BOOL)suppressGraphLiveUpdate;
+(id)extendedCurationOptions;
+(void)setExtendedCurationOptions:(id)arg1 ;
+(unsigned long long)maximumNumberOfFacesPerAssetForSingleFocusedPersonFacedAssets;
+(double)minimumRatioOfFocusedPersonFacesPerAssetForMultipleFocusedPersonsFacedAssets;
+(unsigned long long)maximumNumberOfTextFeaturesPerEvent;
+(BOOL)boundTextFeaturesPerEvent;
+(void)_registerDefaults;
+(BOOL)isShowingHolidayCalendarEvents;
+(BOOL)isAlwaysShowingHolidayCalendarEvents;
+(BOOL)isAutonamingDisabled;
+(BOOL)isAutonamingSignalPropertiesIngestAllowed;
+(BOOL)isAutonamingFilteredOutInferencesIngestAllowed;
+(BOOL)isRelationshipInferenceDisabled;
+(BOOL)isRelationshipSignalPropertiesIngestAllowed;
+(BOOL)isRelationshipFilteredOutInferencesIngestAllowed;
+(BOOL)isPublicEventsEnabled;
+(BOOL)incrementalHighlightEnrichmentIsEnabled;
+(BOOL)peopleSuggestionLearningIsEnabled;
+(BOOL)onThisDayHighlightKeyAssetRotationIsEnabled;
+(BOOL)isBehavioralCurationEnabled;
+(unsigned long long)maximumNumberOfVisibleRegularItems;
+(unsigned long long)minimumNumberOfVisibleItems;
@end

