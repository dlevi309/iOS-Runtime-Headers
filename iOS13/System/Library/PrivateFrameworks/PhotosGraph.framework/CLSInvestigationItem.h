/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

@class CLLocation, NSArray, NSString, NSSet, NSData, VNSceneprint, NSDateComponents, NSDate;


@protocol CLSInvestigationItem <NSObject,PLRegionsClusteringItem,CLSSimilarlyStackableItem>
@property (nonatomic,readonly) CLLocation * clsLocation; 
@property (nonatomic,readonly) NSArray * clsPeopleNames; 
@property (nonatomic,readonly) NSArray * clsUnprefetchedPeopleNames; 
@property (nonatomic,readonly) unsigned long long clsPeopleCount; 
@property (nonatomic,readonly) NSString * clsIdentifier; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) NSArray * peopleNames; 
@property (nonatomic,readonly) long long clsViewCount; 
@property (nonatomic,readonly) long long clsPlayCount; 
@property (nonatomic,readonly) long long clsShareCount; 
@property (nonatomic,readonly) double clsContentScore; 
@property (nonatomic,readonly) double clsExposureScore; 
@property (nonatomic,readonly) double clsSharpnessScore; 
@property (nonatomic,readonly) double clsAestheticScore; 
@property (nonatomic,readonly) double clsHighlightVisibilityScore; 
@property (nonatomic,readonly) double clsAutoplaySuggestionScore; 
@property (nonatomic,readonly) double clsFaceScore; 
@property (nonatomic,readonly) BOOL isUtility; 
@property (nonatomic,readonly) BOOL isScreenshotOrScreenRecording; 
@property (nonatomic,readonly) BOOL isFavorite; 
@property (nonatomic,readonly) BOOL isVideo; 
@property (nonatomic,readonly) BOOL clsIsAestheticallyPrettyGood; 
@property (nonatomic,readonly) BOOL isBlurry; 
@property (nonatomic,readonly) BOOL clsIsLoopOrBounce; 
@property (nonatomic,readonly) BOOL clsIsLongExposure; 
@property (nonatomic,readonly) BOOL clsIsInterestingVideo; 
@property (nonatomic,readonly) BOOL clsIsInterestingLivePhoto; 
@property (nonatomic,readonly) BOOL clsIsInterestingPanorama; 
@property (nonatomic,readonly) BOOL clsIsInterestingSDOF; 
@property (nonatomic,readonly) BOOL clsIsInterestingHDR; 
@property (nonatomic,readonly) BOOL clsHasInterestingAudioClassification; 
@property (nonatomic,readonly) BOOL clsHasCustomPlaybackVariation; 
@property (nonatomic,readonly) BOOL clsIsNonMemorable; 
@property (nonatomic,readonly) double clsDuration; 
@property (nonatomic,readonly) BOOL clsIsInterestingReframe; 
@property (nonatomic,copy,readonly) NSSet * clsSceneClassifications; 
@property (nonatomic,readonly) NSData * clsDistanceIdentity; 
@property (nonatomic,readonly) VNSceneprint * clsSceneprint; 
@property (nonatomic,readonly) NSDateComponents * cls_localDateComponents; 
@property (nonatomic,readonly) NSDate * cls_universalDate; 
@property (nonatomic,readonly) NSDate * cls_localDate; 
@property (readonly) BOOL clsIsInhabited; 
@property (readonly) BOOL clsAvoidIfPossibleForKeyItem; 
@property (readonly) BOOL clsHasPoorResolution; 
@property (readonly) BOOL clsHasInterestingScenes; 
@required
+(id)contextForItems:(id)arg1;
-(CLLocation *)location;
-(BOOL)isVideo;
-(BOOL)isFavorite;
-(NSArray *)peopleNames;
-(BOOL)isUtility;
-(BOOL)isBlurry;
-(NSData *)clsDistanceIdentity;
-(CLLocation *)clsLocation;
-(NSDateComponents *)cls_localDateComponents;
-(NSDate *)cls_universalDate;
-(CGImageRef)createThumbnailWithResolution:(unsigned long long)arg1 fillMode:(BOOL)arg2 networkAllowed:(BOOL)arg3;
-(double)scoreWithContext:(id)arg1;
-(NSArray *)clsPeopleNames;
-(NSArray *)clsUnprefetchedPeopleNames;
-(unsigned long long)clsPeopleCount;
-(NSString *)clsIdentifier;
-(long long)clsViewCount;
-(long long)clsPlayCount;
-(long long)clsShareCount;
-(double)clsContentScore;
-(double)clsExposureScore;
-(double)clsSharpnessScore;
-(double)clsAestheticScore;
-(double)clsHighlightVisibilityScore;
-(double)clsAutoplaySuggestionScore;
-(double)clsFaceScore;
-(BOOL)isScreenshotOrScreenRecording;
-(BOOL)clsIsAestheticallyPrettyGood;
-(BOOL)clsIsLoopOrBounce;
-(BOOL)clsIsLongExposure;
-(BOOL)clsIsInterestingVideo;
-(BOOL)clsIsInterestingLivePhoto;
-(BOOL)clsIsInterestingPanorama;
-(BOOL)clsIsInterestingSDOF;
-(BOOL)clsIsInterestingHDR;
-(BOOL)clsHasInterestingAudioClassification;
-(BOOL)clsHasCustomPlaybackVariation;
-(BOOL)clsIsNonMemorable;
-(double)clsDuration;
-(BOOL)clsIsInterestingReframe;
-(NSSet *)clsSceneClassifications;
-(VNSceneprint *)clsSceneprint;
-(NSDate *)cls_localDate;
-(BOOL)clsIsInhabited;
-(BOOL)clsAvoidIfPossibleForKeyItem;
-(BOOL)clsHasPoorResolution;
-(BOOL)clsHasInterestingScenes;

@end

