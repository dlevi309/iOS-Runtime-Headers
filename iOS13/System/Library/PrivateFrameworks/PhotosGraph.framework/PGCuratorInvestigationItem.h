/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <libobjc.A.dylib/CLSInvestigationItem.h>

@class CLLocation, NSArray, NSString, NSSet, NSData, VNSceneprint, NSDateComponents, NSDate, NSNumber;

@interface PGCuratorInvestigationItem : NSObject <CLSInvestigationItem> {

	NSNumber* _clsViewCount;
	NSNumber* _clsPlayCount;
	NSNumber* _clsShareCount;
	NSNumber* _isUtility;
	NSNumber* _isBlurry;
	NSNumber* _isScreenshotOrScreenRecording;
	NSNumber* _isFavorite;
	NSNumber* _isVideo;
	NSNumber* _clsContentScore;
	NSNumber* _clsIsInterestingVideo;
	NSNumber* _clsIsInterestingLivePhoto;
	NSNumber* _clsIsInterestingPanorama;
	NSNumber* _clsIsInterestingSDOF;
	NSNumber* _clsIsInterestingHDR;
	NSNumber* _clsIsInterestingReframe;
	NSNumber* _clsHasInterestingAudioClassification;
	NSNumber* _clsHasCustomPlaybackVariation;
	NSNumber* _clsSharpnessScore;
	NSNumber* _clsExposureScore;
	NSNumber* _clsAestheticScore;
	NSNumber* _clsIsAestheticallyPrettyGood;
	NSNumber* _clsFaceScore;
	NSNumber* _clsIsInhabited;
	NSNumber* _clsAvoidIfPossibleForKeyItem;
	NSNumber* _clsHasPoorResolution;
	NSNumber* _clsHasInterestingScenes;
	NSNumber* _clsLikabilityScore;
	NSNumber* _clsInteractionScore;
	NSNumber* _clsHighlightVisibilityScore;
	NSNumber* _clsAutoplaySuggestionScore;
	NSNumber* _isShinyGem;
	NSNumber* _isRegularGem;
	NSNumber* _clsDuration;
	NSNumber* _clsIsNonMemorable;
	NSNumber* _clsIsLoopOrBounce;
	NSNumber* _clsIsLongExposure;
	NSString* _clsIdentifier;
	NSDate* _cls_universalDate;
	NSDate* _cls_localDate;
	CLLocation* _clsLocation;
	NSArray* _clsPeopleNames;
	NSData* _clsDistanceIdentity;
	NSSet* _clsSceneClassifications;
	VNSceneprint* _clsSceneprint;
	NSArray* _clsUnprefetchedPeopleNames;
	NSArray* _faceInfos;

}

@property (readonly) NSArray * faceInfos;                                               //@synthesize faceInfos=_faceInfos - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D pl_coordinate; 
@property (nonatomic,readonly) NSDate * pl_date; 
@property (readonly) VNSceneprint * clsSceneprint; 
@property (readonly) NSString * clsIdentifier; 
@property (readonly) NSData * clsDistanceIdentity; 
@property (readonly) NSDate * cls_universalDate; 
@property (nonatomic,readonly) CLLocation * clsLocation;                                //@synthesize clsLocation=_clsLocation - In the implementation block
@property (nonatomic,readonly) NSArray * clsPeopleNames;                                //@synthesize clsPeopleNames=_clsPeopleNames - In the implementation block
@property (nonatomic,readonly) NSArray * clsUnprefetchedPeopleNames;                    //@synthesize clsUnprefetchedPeopleNames=_clsUnprefetchedPeopleNames - In the implementation block
@property (nonatomic,readonly) unsigned long long clsPeopleCount; 
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
@property (nonatomic,copy,readonly) NSSet * clsSceneClassifications;                    //@synthesize clsSceneClassifications=_clsSceneClassifications - In the implementation block
@property (nonatomic,readonly) NSDateComponents * cls_localDateComponents; 
@property (nonatomic,readonly) NSDate * cls_localDate;                                  //@synthesize cls_localDate=_cls_localDate - In the implementation block
@property (readonly) BOOL clsIsInhabited; 
@property (readonly) BOOL clsAvoidIfPossibleForKeyItem; 
@property (readonly) BOOL clsHasPoorResolution; 
@property (readonly) BOOL clsHasInterestingScenes; 
+(id)contextForItems:(id)arg1 ;
+(id)itemWithUUID:(id)arg1 itemInfo:(id)arg2 ;
-(id)init;
-(NSString *)description;
-(id)date;
-(CLLocation *)location;
-(BOOL)isVideo;
-(BOOL)isFavorite;
-(NSDate *)pl_date;
-(CLLocationCoordinate2D)pl_coordinate;
-(NSArray *)peopleNames;
-(BOOL)isUtility;
-(BOOL)isBlurry;
-(NSData *)clsDistanceIdentity;
-(CLLocation *)clsLocation;
-(NSDateComponents *)cls_localDateComponents;
-(NSDate *)cls_universalDate;
-(CGImageRef)createThumbnailWithResolution:(unsigned long long)arg1 fillMode:(BOOL)arg2 networkAllowed:(BOOL)arg3 ;
-(double)scoreWithContext:(id)arg1 ;
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
-(double)clsInteractionScore;
-(BOOL)isShinyGem;
-(BOOL)isRegularGem;
-(id)initWithUUID:(id)arg1 itemInfo:(id)arg2 ;
-(double)clsLikabilityScore;
-(NSArray *)faceInfos;
@end

