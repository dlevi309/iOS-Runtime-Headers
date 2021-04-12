/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@protocol CLSCurationModel <NSObject>
@property (readonly) double minimumDurationForVideoToNotBeJunk; 
@property (readonly) double minimumDurationForTimelapseVideoToNotBeJunk; 
@property (readonly) double minimumDurationForHighFramerateVideoToNotBeJunk; 
@required
+(unsigned long long)minimumRequiredSceneAnalysisVersion;
+(BOOL)minimumRequiredAnalysisVersionsAreMatchedBySpecification:(id)arg1;
+(BOOL)maximumAllowedAnalysisVersionsAreMatchedBySpecification:(id)arg1;
+(unsigned long long)minimumRequiredMediaAnalysisVersion;
+(unsigned long long)minimumRequiredFaceAnalysisVersion;
+(unsigned long long)maximumAllowedSceneAnalysisVersion;
+(unsigned long long)maximumAllowedMediaAnalysisVersion;
+(unsigned long long)maximumAllowedFaceAnalysisVersion;
-(void)enumerateClassificationBasedSignalModelsUsingBlock:(/*^block*/id)arg1;
-(BOOL)isUtilityForMemoriesWithAsset:(id)arg1;
-(BOOL)avoidIfPossibleForKeyAssetWithAsset:(id)arg1;
-(BOOL)isShowcasingFoodWithSceneClassification:(id)arg1;
-(BOOL)hasPoorResolutionWithAsset:(id)arg1;
-(void)enumerateSignalModelsUsingBlock:(/*^block*/id)arg1;
-(BOOL)isTragicFailureWithImageAsset:(id)arg1;
-(float)interactionScoreWithAsset:(id)arg1;
-(id)faceModel;
-(double)faceSizeUpperLimit;
-(double)faceSizeLowerLimit;
-(BOOL)isAestheticallyPrettyGoodWithAsset:(id)arg1;
-(double)scoreWithAsset:(id)arg1 inContext:(id)arg2;
-(id)junkClassificationModel;
-(BOOL)hasInterestingScenesWithAsset:(id)arg1;
-(id)mediaPreAnalysisModel;
-(BOOL)isUtilityWithAsset:(id)arg1;
-(BOOL)isShinyGemWithAsset:(id)arg1;
-(BOOL)isRegularGemWithAsset:(id)arg1;
-(BOOL)isBlurryWithAsset:(id)arg1;
-(BOOL)isInhabitedWithAsset:(id)arg1;
-(BOOL)isInterestingVideoWithAsset:(id)arg1;
-(BOOL)isInterestingLivePhotoWithAsset:(id)arg1;
-(BOOL)isInterestingPanoramaWithAsset:(id)arg1;
-(BOOL)isInterestingSDOFWithAsset:(id)arg1;
-(BOOL)isInterestingHDRWithAsset:(id)arg1;
-(BOOL)isInterestingReframeWithAsset:(id)arg1;
-(BOOL)hasInterestingAudioClassificationWithAsset:(id)arg1;
-(short)interestingAudioClassificationsWithAsset:(id)arg1;
-(id)processedSignalsFromSignals:(id)arg1;
-(id)faceInformationSummaryWithFaces:(id)arg1 personUUIDs:(id)arg2 hiddenPersonLocalIdentifiers:(id)arg3;
-(BOOL)isNonMemorableWithAsset:(id)arg1;
-(BOOL)isGoldWithAsset:(id)arg1;
-(BOOL)assetIsJunkWithSceneClassifications:(id)arg1 confidenceThresholdBySceneIdentifierForScenesPreventingJunking:(id)arg2 confidenceThresholdBySceneIdentifierForJunkingScenes:(id)arg3 confidenceThresholdBySceneIdentifierForScenesPreventingSceneBasedJunking:(id)arg4;
-(id)mediaAnalysisModel;
-(id)aestheticsModel;
-(double)minimumDurationForVideoToNotBeJunk;
-(double)minimumDurationForTimelapseVideoToNotBeJunk;
-(double)minimumDurationForHighFramerateVideoToNotBeJunk;

@end

