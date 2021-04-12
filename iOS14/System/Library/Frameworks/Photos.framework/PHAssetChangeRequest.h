/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHAsset, NSURL, CLLocation, NSString, NSData, NSSet, NSDate, NSMutableDictionary, PHRelationshipChangeRequestHelper, PHContentEditingOutput, NSIndexSet, NSArray, PHObjectPlaceholder, NSManagedObjectID;

@interface PHAssetChangeRequest : PHChangeRequest <PHUpdateChangeRequest> {

	int _clientProcessIdentifier;
	BOOL _clientEntitled;
	PHAsset* _originalAsset;
	NSURL* _editorBundleURL;
	CLLocation* _updatedLocation;
	NSString* _assetDescription;
	NSString* _accessibilityDescription;
	NSString* _title;
	SCD_Struct_PH9 _bestKeyFrameTime;
	NSData* _bestKeyFrameJPEGData;
	BOOL _didSetTitle;
	BOOL _didSetVisibilityState;
	BOOL _didSetSceneClassifications;
	NSSet* _sceneClassifications;
	short _sceneAnalysisVersion;
	NSDate* _sceneAnalysisTimestamp;
	NSData* _distanceIdentity;
	BOOL _allowUnsafeSetProcessed;
	BOOL _incrementPlayCount;
	BOOL _incrementShareCount;
	NSDate* _lastSharedDate;
	BOOL _incrementViewCount;
	BOOL _toRetryUpload;
	BOOL _didSetVariationSuggestionStates;
	unsigned long long _variationSuggestionStates;
	unsigned long long _variationSuggestionStatesMask;
	BOOL _revealNonPrimaryAssetsInAssetGroup;
	BOOL _hideNonPrimaryAssetsInAssetGroup;
	BOOL _didModifyComputedAttributes;
	NSMutableDictionary* _computedAttributeMutations;
	BOOL _didSetPackedPreferredCropRect;
	BOOL _didSetPackedAcceptableCropRect;
	BOOL _didSetPackedBestPlaybackRect;
	long long _packedPreferredCropRect;
	long long _packedAcceptableCropRect;
	long long _packedBestPlaybackRect;
	BOOL _didUnsetBestKeyFrameTime;
	BOOL _didSetMediaAnalysisTimeStamp;
	BOOL _didSetMediaAnalysisVersion;
	BOOL _didSetBlurrinessScore;
	BOOL _didSetExposureScore;
	BOOL _didSetAutoplaySuggestionScore;
	BOOL _didSetVideoScore;
	BOOL _didSetActivityScore;
	BOOL _didSetFaceCount;
	BOOL _didSetAudioClassification;
	BOOL _didSetSceneprintData;
	BOOL _didSetReverseLocationData;
	BOOL _didSetReverseLocationDataIsValid;
	BOOL _didSetShiftedLocation;
	BOOL _didSetOriginalResourceChoice;
	BOOL _didRevertLocationToOriginal;
	BOOL _didRemoveFromPhotoStream;
	BOOL _didExpungeAllSpatialOverCaptureResources;
	BOOL _didTrashAllSpatialOverCaptureResources;
	BOOL _didUntrashAllSpatialOverCaptureResources;
	BOOL _didExpungeTrashedSpatialOverCaptureResources;
	BOOL _didSetReframeVariation;
	BOOL _performCameraProcessingAdjustment;
	NSData* _objectSaliencyRectsData;
	BOOL _didSetObjectSaliencyRectsData;
	BOOL _didSetTimeZone;
	NSString* _timeZoneName;
	long long _timeZoneOffsetValue;
	NSSet* _keywordTitles;
	BOOL _didSetKeywordTitles;
	PHRelationshipChangeRequestHelper* _keywordsHelper;
	BOOL _didSetGpsHorizontalAccuracy;
	BOOL _didChangeAdjustments;
	BOOL _duplicateAllowsPrivateMetadata;
	BOOL _reverseLocationDataIsValid;
	unsigned short _photoIrisVisibilityState;
	short _audioClassification;
	float _testScore;
	float _blurrinessScore;
	float _exposureScore;
	float _autoplaySuggestionScore;
	float _videoScore;
	float _activityScore;
	unsigned long long _originalResourceChoice;
	PHContentEditingOutput* _contentEditingOutput;
	NSString* _editorBundleID;
	NSIndexSet* _supportedEditOperations;
	NSURL* _videoURLForUpdate;
	NSString* _pairingIdentifier;
	PHRelationshipChangeRequestHelper* _facesHelper;
	NSDate* _alternateImportImageDate;
	unsigned long long _reframeVariation;
	double _gpsHorizontalAccuracy;
	NSArray* _objectSaliencyRects;
	NSDate* _mediaAnalysisTimeStamp;
	unsigned long long _mediaAnalysisVersion;
	unsigned long long _faceCount;
	NSData* _sceneprintData;
	NSData* _reverseLocationData;
	CLLocation* _shiftedLocation;
	SCD_Struct_PH9 _videoDuration;
	SCD_Struct_PH9 _imageDisplayTime;
	SCD_Struct_PH12 _bestVideoTimeRange;

}

@property (nonatomic,readonly) BOOL didChangeAdjustments;                                     //@synthesize didChangeAdjustments=_didChangeAdjustments - In the implementation block
@property (nonatomic,copy,readonly) NSString * editorBundleID;                                //@synthesize editorBundleID=_editorBundleID - In the implementation block
@property (nonatomic,retain) NSIndexSet * supportedEditOperations;                            //@synthesize supportedEditOperations=_supportedEditOperations - In the implementation block
@property (nonatomic,retain) NSURL * videoURLForUpdate;                                       //@synthesize videoURLForUpdate=_videoURLForUpdate - In the implementation block
@property (nonatomic,retain) NSString * pairingIdentifier;                                    //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH9 videoDuration;                                    //@synthesize videoDuration=_videoDuration - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * facesHelper;               //@synthesize facesHelper=_facesHelper - In the implementation block
@property (nonatomic,readonly) BOOL duplicateAllowsPrivateMetadata;                           //@synthesize duplicateAllowsPrivateMetadata=_duplicateAllowsPrivateMetadata - In the implementation block
@property (nonatomic,retain) NSDate * alternateImportImageDate;                               //@synthesize alternateImportImageDate=_alternateImportImageDate - In the implementation block
@property (assign,nonatomic) unsigned short photoIrisVisibilityState;                         //@synthesize photoIrisVisibilityState=_photoIrisVisibilityState - In the implementation block
@property (assign,nonatomic) unsigned long long reframeVariation;                             //@synthesize reframeVariation=_reframeVariation - In the implementation block
@property (nonatomic,retain) NSString * assetDescription; 
@property (nonatomic,retain) NSString * accessibilityDescription; 
@property (nonatomic,retain) NSDate * addedDate; 
@property (assign,nonatomic) unsigned long long originalResourceChoice;                       //@synthesize originalResourceChoice=_originalResourceChoice - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate; 
@property (nonatomic,retain) id faceAdjustmentVersion; 
@property (assign,nonatomic) SCD_Struct_PH9 imageDisplayTime;                                 //@synthesize imageDisplayTime=_imageDisplayTime - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) double curationScore; 
@property (assign,nonatomic) float overallAestheticScore; 
@property (assign,nonatomic) float wellFramedSubjectScore; 
@property (assign,nonatomic) float wellChosenSubjectScore; 
@property (assign,nonatomic) float tastefullyBlurredScore; 
@property (assign,nonatomic) float sharplyFocusedSubjectScore; 
@property (assign,nonatomic) float wellTimedShotScore; 
@property (assign,nonatomic) float pleasantLightingScore; 
@property (assign,nonatomic) float pleasantReflectionsScore; 
@property (assign,nonatomic) float harmoniousColorScore; 
@property (assign,nonatomic) float livelyColorScore; 
@property (assign,nonatomic) float pleasantSymmetryScore; 
@property (assign,nonatomic) float pleasantPatternScore; 
@property (assign,nonatomic) float immersivenessScore; 
@property (assign,nonatomic) float pleasantPerspectiveScore; 
@property (assign,nonatomic) float pleasantPostProcessingScore; 
@property (assign,nonatomic) float noiseScore; 
@property (assign,nonatomic) float failureScore; 
@property (assign,nonatomic) float pleasantCompositionScore; 
@property (assign,nonatomic) float interestingSubjectScore; 
@property (assign,nonatomic) float intrusiveObjectPresenceScore; 
@property (assign,nonatomic) float pleasantCameraTiltScore; 
@property (assign,nonatomic) float lowLight; 
@property (assign,nonatomic) float testScore;                                                 //@synthesize testScore=_testScore - In the implementation block
@property (assign,nonatomic) float behavioralScore; 
@property (assign,nonatomic) float interactionScore; 
@property (assign,nonatomic) double highlightPromotionScore; 
@property (assign,nonatomic) double highlightVisibilityScore; 
@property (assign,nonatomic) double gpsHorizontalAccuracy;                                    //@synthesize gpsHorizontalAccuracy=_gpsHorizontalAccuracy - In the implementation block
@property (nonatomic,retain) NSArray * objectSaliencyRects;                                   //@synthesize objectSaliencyRects=_objectSaliencyRects - In the implementation block
@property (nonatomic,retain) NSDate * mediaAnalysisTimeStamp;                                 //@synthesize mediaAnalysisTimeStamp=_mediaAnalysisTimeStamp - In the implementation block
@property (assign,nonatomic) unsigned long long mediaAnalysisVersion;                         //@synthesize mediaAnalysisVersion=_mediaAnalysisVersion - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH12 bestVideoTimeRange;                              //@synthesize bestVideoTimeRange=_bestVideoTimeRange - In the implementation block
@property (assign,nonatomic) float blurrinessScore;                                           //@synthesize blurrinessScore=_blurrinessScore - In the implementation block
@property (assign,nonatomic) float exposureScore;                                             //@synthesize exposureScore=_exposureScore - In the implementation block
@property (assign,nonatomic) float autoplaySuggestionScore;                                   //@synthesize autoplaySuggestionScore=_autoplaySuggestionScore - In the implementation block
@property (assign,nonatomic) float videoScore;                                                //@synthesize videoScore=_videoScore - In the implementation block
@property (assign,nonatomic) float activityScore;                                             //@synthesize activityScore=_activityScore - In the implementation block
@property (assign,nonatomic) unsigned long long faceCount;                                    //@synthesize faceCount=_faceCount - In the implementation block
@property (assign,nonatomic) short audioClassification;                                       //@synthesize audioClassification=_audioClassification - In the implementation block
@property (nonatomic,retain) NSData * sceneprintData;                                         //@synthesize sceneprintData=_sceneprintData - In the implementation block
@property (nonatomic,retain) NSData * reverseLocationData;                                    //@synthesize reverseLocationData=_reverseLocationData - In the implementation block
@property (assign,nonatomic) BOOL reverseLocationDataIsValid;                                 //@synthesize reverseLocationDataIsValid=_reverseLocationDataIsValid - In the implementation block
@property (nonatomic,retain) CLLocation * shiftedLocation;                                    //@synthesize shiftedLocation=_shiftedLocation - In the implementation block
@property (nonatomic,copy) NSSet * keywordTitles;                                             //@synthesize keywordTitles=_keywordTitles - In the implementation block
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedAsset; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) CLLocation * location; 
@property (assign,getter=isFavorite,nonatomic) BOOL favorite; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (nonatomic,retain) PHContentEditingOutput * contentEditingOutput;                   //@synthesize contentEditingOutput=_contentEditingOutput - In the implementation block
@property (getter=isMutated,readonly) BOOL mutated; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled; 
@property (nonatomic,readonly) NSString * clientName; 
@property (nonatomic,readonly) long long accessScopeOptionsRequirement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)creationRequestForAssetFromVideoComplementBundle:(id)arg1 ;
+(id)creationRequestForAssetFromImage:(id)arg1 ;
+(id)creationRequestForAssetFromImageAtFileURL:(id)arg1 ;
+(id)creationRequestForAssetFromVideoAtFileURL:(id)arg1 ;
+(void)expungeAssets:(id)arg1 ;
+(void)deleteAssets:(id)arg1 ;
+(void)undeleteAssets:(id)arg1 ;
+(id)_allAssetEditOperations;
+(id)changeRequestForAssetFromVideoFileURL:(id)arg1 imageAsset:(id)arg2 displayTime:(double)arg3 ;
+(id)changeRequestForAsset:(id)arg1 ;
+(void)_deleteAssets:(id)arg1 withOperation:(long long)arg2 topLevelSelector:(SEL)arg3 ;
-(float)noiseScore;
-(float)blurrinessScore;
-(id)initWithHelper:(id)arg1 ;
-(NSDate *)modificationDate;
-(void)setNoiseScore:(float)arg1 ;
-(void)setTestScore:(float)arg1 ;
-(void)setActivityScore:(float)arg1 ;
-(NSURL *)videoURLForUpdate;
-(float)pleasantCompositionScore;
-(void)retryUpload;
-(NSData *)reverseLocationData;
-(float)autoplaySuggestionScore;
-(float)videoScore;
-(void)setLivelyColorScore:(float)arg1 ;
-(float)pleasantSymmetryScore;
-(void)setFavorite:(BOOL)arg1 ;
-(float)pleasantCameraTiltScore;
-(float)immersivenessScore;
-(BOOL)isFavorite;
-(NSString *)pairingIdentifier;
-(float)wellTimedShotScore;
-(float)activityScore;
-(float)tastefullyBlurredScore;
-(float)lowLight;
-(unsigned long long)faceCount;
-(float)wellFramedSubjectScore;
-(float)wellChosenSubjectScore;
-(float)pleasantReflectionsScore;
-(short)audioClassification;
-(float)pleasantPatternScore;
-(void)setPairingIdentifier:(NSString *)arg1 ;
-(float)harmoniousColorScore;
-(SCD_Struct_PH12)bestVideoTimeRange;
-(float)pleasantLightingScore;
-(void)setAutoplaySuggestionScore:(float)arg1 ;
-(float)sharplyFocusedSubjectScore;
-(float)exposureScore;
-(float)failureScore;
-(float)intrusiveObjectPresenceScore;
-(NSArray *)objectSaliencyRects;
-(float)interestingSubjectScore;
-(void)setAdjustmentData:(id)arg1 withRenderedJPEGData:(id)arg2 orRenderedContentURL:(id)arg3 penultimateRenderedJPEGData:(id)arg4 isSubstandardRender:(BOOL)arg5 fullSizeRenderSize:(CGSize)arg6 renderedVideoComplementURL:(id)arg7 penultimateRenderedVideoComplementURL:(id)arg8 ;
-(unsigned long long)mediaAnalysisVersion;
-(NSDate *)mediaAnalysisTimeStamp;
-(float)pleasantPerspectiveScore;
-(float)pleasantPostProcessingScore;
-(float)livelyColorScore;
-(void)setInterestingSubjectScore:(float)arg1 ;
-(void)setImageDisplayTime:(SCD_Struct_PH9)arg1 ;
-(NSDate *)alternateImportImageDate;
-(BOOL)validateWriteAccessForContentURL:(id)arg1 error:(id*)arg2 ;
-(void)setPhotoIrisVisibilityState:(unsigned short)arg1 ;
-(BOOL)isHidden;
-(void)expungeAllSpatialOverCaptureResources;
-(NSString *)editorBundleID;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(unsigned long long)reframeVariation;
-(id)_mutableFaceObjectIDsAndUUIDs;
-(id)init;
-(unsigned long long)originalResourceChoice;
-(CLLocation *)shiftedLocation;
-(void)setTimeZone:(id)arg1 withDate:(id)arg2 ;
-(void)_validateObjectSaliencyRects:(id)arg1 ;
-(float)overallAestheticScore;
-(float)interactionScore;
-(void)setSceneprintData:(NSData *)arg1 ;
-(PHObjectPlaceholder *)placeholderForCreatedAsset;
-(void)incrementViewCount;
-(void)setHidden:(BOOL)arg1 ;
-(void)markDidChangeAdjustments;
-(CLLocation *)location;
-(NSString *)assetDescription;
-(BOOL)validateAdjustmentDataForAssetMutation:(id)arg1 error:(id*)arg2 ;
-(PHContentEditingOutput *)contentEditingOutput;
-(BOOL)reverseLocationDataIsValid;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setShiftedLocation:(CLLocation *)arg1 ;
-(void)setAdjustmentData:(id)arg1 withRenderedJPEGData:(id)arg2 orRenderedContentURL:(id)arg3 penultimateRenderedJPEGData:(id)arg4 isSubstandardRender:(BOOL)arg5 fullSizeRenderSize:(CGSize)arg6 renderedVideoComplementURL:(id)arg7 penultimateRenderedVideoComplementURL:(id)arg8 optionalOriginalResourceChoice:(id)arg9 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setVariationSuggestionStates:(unsigned long long)arg1 forVariationType:(unsigned long long)arg2 ;
-(BOOL)_validateAsyncContentEditingOutputPreviewRenderURLs:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(void)setVideoDuration:(SCD_Struct_PH9)arg1 ;
-(SCD_Struct_PH9)videoDuration;
-(void)setReverseLocationDataIsValid:(BOOL)arg1 ;
-(void)setPleasantLightingScore:(float)arg1 ;
-(void)setVideoURLForUpdate:(NSURL *)arg1 ;
-(BOOL)isHiding;
-(void)setCurationScore:(double)arg1 ;
-(BOOL)validateReadAccessForContentURL:(id)arg1 assetResource:(id)arg2 error:(id*)arg3 ;
-(void)setPleasantSymmetryScore:(float)arg1 ;
-(void)setAudioClassification:(short)arg1 ;
-(void)setSupportedEditOperations:(NSIndexSet *)arg1 ;
-(void)setSharplyFocusedSubjectScore:(float)arg1 ;
-(void)setSceneClassifications:(id)arg1 algorithmVersion:(long long)arg2 distanceIdentity:(id)arg3 adjustmentVersion:(id)arg4 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)_mutableKeywordObjectIDsAndUUIDs;
-(void)setOriginalResourceChoice:(unsigned long long)arg1 ;
-(void)setAddedDate:(NSDate *)arg1 ;
-(void)setPleasantPatternScore:(float)arg1 ;
-(void)setIntrusiveObjectPresenceScore:(float)arg1 ;
-(void)_prepareFaceIDsIfNeeded;
-(BOOL)_validateAndGenerateStillImageForLoopingLivePhotoWithContentEditingOutput:(id)arg1 error:(id*)arg2 ;
-(void)setPreferredCropRectWithNormalizedRect:(CGRect)arg1 ;
-(void)setBestVideoTimeRange:(SCD_Struct_PH12)arg1 ;
-(double)curationScore;
-(void)setGpsHorizontalAccuracy:(double)arg1 ;
-(BOOL)duplicateAllowsPrivateMetadata;
-(BOOL)_validateImageURLForAssetMutation:(id)arg1 error:(id*)arg2 ;
-(id)getMediaAnalysisAttributesForAsset:(id)arg1 ;
-(void)setBlurrinessScore:(float)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(void)setPleasantPerspectiveScore:(float)arg1 ;
-(NSDate *)creationDate;
-(void)setSceneClassifications:(id)arg1 algorithmVersion:(long long)arg2 adjustmentVersion:(id)arg3 ;
-(void)setHighlightVisibilityScore:(double)arg1 ;
-(void)setContentEditingOutput:(PHContentEditingOutput *)arg1 ;
-(void)setHarmoniousColorScore:(float)arg1 ;
-(NSIndexSet *)supportedEditOperations;
-(void)setBestKeyFrame:(CGImageRef)arg1 time:(SCD_Struct_PH9)arg2 ;
-(void)_setOriginalAsset:(id)arg1 ;
-(BOOL)didChangeAdjustments;
-(void)trashAllSpatialOverCaptureResources;
-(void)incrementShareCount;
-(void)expungeTrashedSpatialOverCaptureResources;
-(void)hideNonPrimaryAssetsInAssetGroup;
-(PHRelationshipChangeRequestHelper *)facesHelper;
-(void)addKeywords:(id)arg1 ;
-(void)setInteractionScore:(float)arg1 ;
-(NSData *)sceneprintData;
-(void)setAlternateImportImageDate:(NSDate *)arg1 ;
-(BOOL)validateAccessibilityDescription:(id)arg1 error:(id*)arg2 ;
-(NSString *)accessibilityDescription;
-(void)setBehavioralScore:(float)arg1 ;
-(void)setPleasantPostProcessingScore:(float)arg1 ;
-(void)setExposureScore:(float)arg1 ;
-(void)revertLocationToOriginal;
-(void)setFaceAdjustmentVersion:(id)arg1 ;
-(void)removeFromMyPhotoStream;
-(void)setReverseLocationData:(NSData *)arg1 ;
-(BOOL)validateAssetDescription:(id)arg1 error:(id*)arg2 ;
-(NSDate *)addedDate;
-(void)encodeToXPCDict:(id)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setPleasantCameraTiltScore:(float)arg1 ;
-(void)setPleasantCompositionScore:(float)arg1 ;
-(NSSet *)keywordTitles;
-(BOOL)validateContentEditingOutput:(id)arg1 error:(id*)arg2 ;
-(id)faceAdjustmentVersion;
-(double)highlightVisibilityScore;
-(void)setLowLight:(float)arg1 ;
-(void)setWellTimedShotScore:(float)arg1 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(void)setFaceCount:(unsigned long long)arg1 ;
-(void)setKeywordTitles:(NSSet *)arg1 ;
-(BOOL)isRevertingContentToOriginal;
-(void)setWellChosenSubjectScore:(float)arg1 ;
-(id)_existentKeywordObjectIDs;
-(double)gpsHorizontalAccuracy;
-(BOOL)validateVideoURLForAssetMutation:(id)arg1 error:(id*)arg2 ;
-(SCD_Struct_PH9)imageDisplayTime;
-(void)setHighlightPromotionScore:(double)arg1 ;
-(void)setOverallAestheticScore:(float)arg1 ;
-(void)addFaces:(id)arg1 ;
-(void)setImmersivenessScore:(float)arg1 ;
-(double)highlightPromotionScore;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)removeKeywords:(id)arg1 ;
-(void)setReframeVariation:(unsigned long long)arg1 ;
-(void)revealNonPrimaryAssetsInAssetGroup;
-(void)revertAssetContentToOriginal;
-(void)setWellFramedSubjectScore:(float)arg1 ;
-(void)performCameraProcessingAdjustment;
-(void)setObjectSaliencyRects:(NSArray *)arg1 ;
-(void)incrementPlayCount;
-(float)behavioralScore;
-(void)setPleasantReflectionsScore:(float)arg1 ;
-(float)testScore;
-(void)setAcceptableCropRectWithNormalizedRect:(CGRect)arg1 ;
-(void)removeFaces:(id)arg1 ;
-(NSString *)managedEntityName;
-(void)setAssetDescription:(NSString *)arg1 ;
-(unsigned short)photoIrisVisibilityState;
-(void)setTastefullyBlurredScore:(float)arg1 ;
-(void)setMediaAnalysisVersion:(unsigned long long)arg1 ;
-(void)setBestPlaybackRectWithNormalizedRect:(CGRect)arg1 ;
-(void)setRectWithNormalizedRect:(CGRect)arg1 forPackedRect:(long long*)arg2 forSetFlag:(BOOL*)arg3 ;
-(NSString *)title;
-(void)setMediaAnalysisTimeStamp:(NSDate *)arg1 ;
-(void)_prepareFacesHelperWithFetchResult:(id)arg1 ;
-(void)setVideoScore:(float)arg1 ;
-(void)untrashAllSpatialOverCaptureResources;
-(void)setFailureScore:(float)arg1 ;
@end

