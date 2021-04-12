/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHObject.h>
#import <libobjc.A.dylib/PHThumbnailAsset.h>
#import <libobjc.A.dylib/_PLImageLoadingAsset.h>
#import <libobjc.A.dylib/PHResourceChooserAsset.h>

@class NSManagedObjectID, NSData, NSManagedObjectContext, CLLocation, NSString, NSSet, NSDate, NSArray, PHPhotoLibrary, NSURL;

@interface PHAsset : PHObject <PHThumbnailAsset, _PLImageLoadingAsset, PHResourceChooserAsset> {

	CLLocation* _cachedLocation;
	NSString* _cloudAssetGUID;
	NSSet* _sceneClassifications;
	BOOL _hidden;
	BOOL _favorite;
	BOOL _syncFailureHidden;
	BOOL _cloudIsDeletable;
	BOOL _complete;
	BOOL _hasAdjustments;
	BOOL _hasKeywords;
	BOOL _assetDescriptionWasSet;
	BOOL _canUseLocationCoordinateForLocation;
	BOOL _isPhotoIris;
	short _savedAssetType;
	unsigned short _videoCpVisibilityState;
	unsigned short _playbackVariation;
	int _avalanchePickType;
	int _exifOrientation;
	float _overallAestheticScore;
	float _hdrGain;
	int _deferredProcessingNeeded;
	NSDate* _localCreationDate;
	long long _playbackStyle;
	long long _mediaType;
	unsigned long long _mediaSubtypes;
	unsigned long long _pixelWidth;
	unsigned long long _pixelHeight;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	double _duration;
	NSString* _burstIdentifier;
	unsigned long long _localResourcesState;
	unsigned long long _groupingState;
	NSString* _groupingUUID;
	NSData* _locationData;
	NSString* _uniformTypeIdentifier;
	unsigned long long _persistenceState;
	unsigned long long _thumbnailIndex;
	NSString* _directory;
	NSString* _filename;
	NSDate* _trashedDate;
	NSDate* _adjustmentTimestamp;
	NSString* _originalColorSpace;
	NSData* _imageRequestHints;
	double _curationScore;
	long long _cloudPlaceholderKind;
	long long _videoCpDurationValue;
	unsigned long long _reframeVariation;
	NSArray* _faceRegions;
	double _faceAreaMinX;
	double _faceAreaMaxX;
	double _faceAreaMinY;
	double _faceAreaMaxY;
	long long _RAWPlusJPEGBadgeAttributes;
	id _faceAdjustmentVersion;
	NSDate* _analysisStateModificationDate;
	double _highlightPromotionScore;
	double _highlightVisibilityScore;
	CLLocationCoordinate2D _locationCoordinate;
	CGRect _preferredCropRect;
	CGRect _acceptableCropRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) unsigned long long thumbnailIndex; 
@property (nonatomic,readonly) BOOL complete; 
@property (nonatomic,readonly) long long cloudPlaceholderKind; 
@property (nonatomic,readonly) unsigned long long localResourcesState;                                         //@synthesize localResourcesState=_localResourcesState - In the implementation block
@property (nonatomic,readonly) int avalanchePickType;                                                          //@synthesize avalanchePickType=_avalanchePickType - In the implementation block
@property (nonatomic,readonly) unsigned long long groupingState;                                               //@synthesize groupingState=_groupingState - In the implementation block
@property (nonatomic,readonly) NSString * groupingUUID;                                                        //@synthesize groupingUUID=_groupingUUID - In the implementation block
@property (nonatomic,readonly) NSData * locationData;                                                          //@synthesize locationData=_locationData - In the implementation block
@property (nonatomic,readonly) short savedAssetType;                                                           //@synthesize savedAssetType=_savedAssetType - In the implementation block
@property (nonatomic,readonly) unsigned short videoCpVisibilityState;                                          //@synthesize videoCpVisibilityState=_videoCpVisibilityState - In the implementation block
@property (nonatomic,readonly) BOOL cloudIsDeletable;                                                          //@synthesize cloudIsDeletable=_cloudIsDeletable - In the implementation block
@property (nonatomic,readonly) unsigned long long originalResourceChoice; 
@property (nonatomic,readonly) NSSet * sceneClassifications; 
@property (nonatomic,readonly) NSData * distanceIdentity; 
@property (nonatomic,readonly) long long imageOrientation; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) NSString * uniformTypeIdentifier;                                               //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long persistenceState;                                            //@synthesize persistenceState=_persistenceState - In the implementation block
@property (nonatomic,readonly) unsigned long long thumbnailIndex;                                              //@synthesize thumbnailIndex=_thumbnailIndex - In the implementation block
@property (nonatomic,readonly) NSString * directory;                                                           //@synthesize directory=_directory - In the implementation block
@property (nonatomic,readonly) NSString * filename;                                                            //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) NSDate * trashedDate;                                                           //@synthesize trashedDate=_trashedDate - In the implementation block
@property (nonatomic,readonly) NSDate * adjustmentTimestamp;                                                   //@synthesize adjustmentTimestamp=_adjustmentTimestamp - In the implementation block
@property (nonatomic,readonly) NSString * thumbnailIdentifier; 
@property (nonatomic,readonly) BOOL complete;                                                                  //@synthesize complete=_complete - In the implementation block
@property (nonatomic,readonly) NSURL * ALAssetURL; 
@property (nonatomic,readonly) int exifOrientation;                                                            //@synthesize exifOrientation=_exifOrientation - In the implementation block
@property (nonatomic,readonly) NSString * originalColorSpace;                                                  //@synthesize originalColorSpace=_originalColorSpace - In the implementation block
@property (nonatomic,readonly) NSData * imageRequestHints;                                                     //@synthesize imageRequestHints=_imageRequestHints - In the implementation block
@property (nonatomic,readonly) double curationScore;                                                           //@synthesize curationScore=_curationScore - In the implementation block
@property (nonatomic,readonly) float overallAestheticScore;                                                    //@synthesize overallAestheticScore=_overallAestheticScore - In the implementation block
@property (nonatomic,readonly) long long cloudPlaceholderKind;                                                 //@synthesize cloudPlaceholderKind=_cloudPlaceholderKind - In the implementation block
@property (nonatomic,readonly) BOOL hasAdjustments;                                                            //@synthesize hasAdjustments=_hasAdjustments - In the implementation block
@property (nonatomic,readonly) long long videoCpDurationValue;                                                 //@synthesize videoCpDurationValue=_videoCpDurationValue - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D locationCoordinate;                                      //@synthesize locationCoordinate=_locationCoordinate - In the implementation block
@property (nonatomic,readonly) unsigned short playbackVariation;                                               //@synthesize playbackVariation=_playbackVariation - In the implementation block
@property (nonatomic,readonly) float hdrGain;                                                                  //@synthesize hdrGain=_hdrGain - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * originalFilename; 
@property (nonatomic,readonly) unsigned long long reframeVariation;                                            //@synthesize reframeVariation=_reframeVariation - In the implementation block
@property (nonatomic,readonly) NSDate * localCreationDate;                                                     //@synthesize localCreationDate=_localCreationDate - In the implementation block
@property (nonatomic,readonly) CGRect preferredCropRect;                                                       //@synthesize preferredCropRect=_preferredCropRect - In the implementation block
@property (nonatomic,readonly) CGRect acceptableCropRect;                                                      //@synthesize acceptableCropRect=_acceptableCropRect - In the implementation block
@property (nonatomic,readonly) BOOL hasPhotoColorAdjustments; 
@property (nonatomic,readonly) NSArray * faceRegions;                                                          //@synthesize faceRegions=_faceRegions - In the implementation block
@property (nonatomic,readonly) double faceAreaMinX;                                                            //@synthesize faceAreaMinX=_faceAreaMinX - In the implementation block
@property (nonatomic,readonly) double faceAreaMaxX;                                                            //@synthesize faceAreaMaxX=_faceAreaMaxX - In the implementation block
@property (nonatomic,readonly) double faceAreaMinY;                                                            //@synthesize faceAreaMinY=_faceAreaMinY - In the implementation block
@property (nonatomic,readonly) double faceAreaMaxY;                                                            //@synthesize faceAreaMaxY=_faceAreaMaxY - In the implementation block
@property (nonatomic,readonly) long long RAWPlusJPEGBadgeAttributes;                                           //@synthesize RAWPlusJPEGBadgeAttributes=_RAWPlusJPEGBadgeAttributes - In the implementation block
@property (nonatomic,readonly) BOOL hasKeywords;                                                               //@synthesize hasKeywords=_hasKeywords - In the implementation block
@property (nonatomic,copy,readonly) NSString * cloudIdentifier; 
@property (nonatomic,readonly) id faceAdjustmentVersion;                                                       //@synthesize faceAdjustmentVersion=_faceAdjustmentVersion - In the implementation block
@property (assign,nonatomic) BOOL assetDescriptionWasSet;                                                      //@synthesize assetDescriptionWasSet=_assetDescriptionWasSet - In the implementation block
@property (assign,nonatomic) BOOL canUseLocationCoordinateForLocation;                                         //@synthesize canUseLocationCoordinateForLocation=_canUseLocationCoordinateForLocation - In the implementation block
@property (nonatomic,readonly) NSDate * analysisStateModificationDate;                                         //@synthesize analysisStateModificationDate=_analysisStateModificationDate - In the implementation block
@property (nonatomic,readonly) int deferredProcessingNeeded;                                                   //@synthesize deferredProcessingNeeded=_deferredProcessingNeeded - In the implementation block
@property (nonatomic,readonly) BOOL isVideo; 
@property (nonatomic,readonly) BOOL isLoopingVideo; 
@property (nonatomic,readonly) BOOL isPhoto; 
@property (nonatomic,readonly) BOOL isAudio; 
@property (nonatomic,readonly) BOOL isPhotoStreamPhoto; 
@property (nonatomic,readonly) BOOL hasPhotoStreamTagID; 
@property (nonatomic,readonly) BOOL isCloudSharedAsset; 
@property (nonatomic,readonly) BOOL isMomentSharedAsset; 
@property (nonatomic,readonly) BOOL isReferencedAsset; 
@property (nonatomic,readonly) BOOL isOffline; 
@property (nonatomic,readonly) BOOL isCloudPlaceholder; 
@property (nonatomic,readonly) BOOL isCloudPhotoLibraryAsset; 
@property (nonatomic,readonly) BOOL isStreamedVideo; 
@property (nonatomic,readonly) BOOL isHighFrameRateVideo; 
@property (nonatomic,readonly) BOOL isHDVideo; 
@property (nonatomic,readonly) BOOL isJPEG; 
@property (nonatomic,readonly) BOOL isJPEG2000; 
@property (nonatomic,readonly) BOOL isRAW; 
@property (nonatomic,readonly) BOOL isRAWPlusJPEG; 
@property (nonatomic,readonly) BOOL isHEIF; 
@property (nonatomic,readonly) BOOL isTIFF; 
@property (nonatomic,readonly) BOOL isPNG; 
@property (nonatomic,readonly) BOOL isPDF; 
@property (nonatomic,readonly) BOOL isPSD; 
@property (nonatomic,readonly) BOOL isAnimatedGIF; 
@property (nonatomic,readonly) BOOL isPartOfBurst; 
@property (nonatomic,readonly) BOOL isPartOfGroup; 
@property (nonatomic,readonly) BOOL isPrimaryInGroup; 
@property (nonatomic,readonly) BOOL isPhotoIris;                                                               //@synthesize isPhotoIris=_isPhotoIris - In the implementation block
@property (nonatomic,readonly) BOOL isPhotoIrisPlaceholder; 
@property (nonatomic,readonly) BOOL canPlayPhotoIris; 
@property (nonatomic,readonly) BOOL canPlayAutoloop; 
@property (nonatomic,readonly) BOOL canPlayMirror; 
@property (nonatomic,readonly) BOOL canPlayLongExposure; 
@property (nonatomic,readonly) BOOL canPlayLoopingVideo; 
@property (nonatomic,readonly) BOOL isTimelapsePlaceholder; 
@property (nonatomic,readonly) BOOL isIncludedInMoments; 
@property (nonatomic,readonly) BOOL isIncludedInCloudFeeds; 
@property (getter=isTrashed,nonatomic,readonly) BOOL trashed; 
@property (nonatomic,readonly) BOOL canPerformSharingAction; 
@property (nonatomic,readonly) double highlightPromotionScore;                                                 //@synthesize highlightPromotionScore=_highlightPromotionScore - In the implementation block
@property (nonatomic,readonly) double highlightVisibilityScore;                                                //@synthesize highlightVisibilityScore=_highlightVisibilityScore - In the implementation block
@property (nonatomic,readonly) NSString * resourcesDebugDescription; 
@property (nonatomic,readonly) NSString * metadataDebugDescription; 
@property (nonatomic,readonly) NSString * variationSuggestionStatesDetails; 
@property (nonatomic,readonly) long long playbackStyle;                                                        //@synthesize playbackStyle=_playbackStyle - In the implementation block
@property (nonatomic,readonly) long long mediaType;                                                            //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaSubtypes;                                               //@synthesize mediaSubtypes=_mediaSubtypes - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelWidth;                                                  //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelHeight;                                                 //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                                          //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;                                                      //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) double duration;                                                                //@synthesize duration=_duration - In the implementation block
@property (getter=isHidden,nonatomic,readonly) BOOL hidden;                                                    //@synthesize hidden=_hidden - In the implementation block
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite;                                                //@synthesize favorite=_favorite - In the implementation block
@property (getter=isSyncFailureHidden,nonatomic,readonly) BOOL syncFailureHidden;                              //@synthesize syncFailureHidden=_syncFailureHidden - In the implementation block
@property (nonatomic,readonly) NSString * burstIdentifier;                                                     //@synthesize burstIdentifier=_burstIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long burstSelectionTypes; 
@property (nonatomic,readonly) BOOL representsBurst; 
@property (nonatomic,readonly) unsigned long long sourceType; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContextForFetchingResources; 
+(id)fetchAssetsGroupedByFaceUUIDForFaces:(id)arg1 ;
+(id)managedEntityName;
+(id)fetchAssetsMatchingMasterFingerPrint:(id)arg1 photoLibrary:(id)arg2 ;
+(id)fetchAssetsMatchingAdjustedFingerPrint:(id)arg1 photoLibrary:(id)arg2 ;
+(void)_computeFingerPrintsOfAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_fetchAssetsMatchingMasterFingerPrint:(id)arg1 ;
+(id)_fetchAssetsMatchingAdjustedFingerPrint:(id)arg1 ;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(BOOL)managedObjectSupportsTrashedState;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(id)corePropertiesToFetch;
+(id)_composePropertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)pl_managedAssetsForAssets:(id)arg1 ;
+(id)fetchKeyCuratedAssetInAssetCollection:(id)arg1 referenceAsset:(id)arg2 options:(id)arg3 ;
+(id)_fetchCuratedAssetInAssetCollection:(id)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3 fetchOptions:(id)arg4 onlyKey:(BOOL)arg5 ;
+(id)fetchKeyCuratedAssetInAssetCollection:(id)arg1 referenceAsset:(id)arg2 ;
+(id)fetchCuratedAssetsInAssetCollection:(id)arg1 ;
+(id)_fetchRepresentativeAssetInAssetCollection:(id)arg1 ;
+(id)fetchKeyCuratedAssetInAssetCollection:(id)arg1 referencePersons:(id)arg2 ;
+(id)fetchExtendedCuratedAssetsInAssetCollection:(id)arg1 ;
+(id)fetchCuratedAssetsInAssetCollection:(id)arg1 referencePersons:(id)arg2 ;
+(id)fetchMovieCuratedAssetsInMemory:(id)arg1 ;
+(id)fetchRepresentativeAssetsInAssetCollection:(id)arg1 ;
+(id)fetchReducedCuratedAssetsInMemory:(id)arg1 options:(id)arg2 ;
+(id)fetchCuratedAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsForBehavioralCurationWithOptions:(id)arg1 ;
+(id)fetchKeyAssetByHighlightUUIDForHighlights:(id)arg1 options:(id)arg2 ;
+(id)_descriptionForVariationSuggestionStates:(unsigned long long)arg1 ;
+(id)_descriptionForVariationSuggestionType:(unsigned long long)arg1 ;
+(BOOL)isOriginalVideoComplementKnownUnsupportedFormatForAsset:(id)arg1 failureInfo:(id*)arg2 ;
+(BOOL)isOriginalKnownUnsupportedFormatForAsset:(id)arg1 failureInfo:(id*)arg2 ;
+(id)propertySetsForPropertyFetchHints:(unsigned long long)arg1 ;
+(BOOL)_isLivePhotoWithPhotoIris:(BOOL)arg1 hasAdjustments:(BOOL)arg2 videoCpDuration:(long long)arg3 videoCPVisibility:(unsigned short)arg4 sourceType:(unsigned long long)arg5 ;
+(unsigned long long)_extendedPropertyFetchHintsForPropertySets:(id)arg1 ;
+(unsigned long long)propertyFetchHintsForPropertySets:(id)arg1 ;
+(id)locationPropertiesToFetch;
+(id)faceWorkerPropertiesToFetch;
+(id)imageManagerPropertiesToFetch;
+(BOOL)managedObjectSupportsHiddenState;
+(BOOL)managedObjectSupportsVisibilityState;
+(BOOL)managedObjectSupportsBursts;
+(BOOL)managedObjectSupportsSavedAssetType;
+(BOOL)managedObjectSupportsMontage;
+(id)_transformMediaSubtypeReferences:(id)arg1 inComparisonPredicate:(id)arg2 options:(id)arg3 ;
+(Class)propertySetClassForPropertySet:(id)arg1 ;
+(id)propertySetAccessorsByPropertySet;
+(id)_unfetchedPropertySetsForAssets:(id)arg1 fromPropertySets:(id)arg2 ;
+(void)_batchFetchAdditionalPropertySetsIfNeeded:(id)arg1 forAssets:(id)arg2 ;
+(long long)countOfAssetsWithLocationFromUUIDs:(id)arg1 photoLibrary:(id)arg2 ;
+(id)fetchAssetsInBoundingBoxWithTopLeftLocation:(id)arg1 bottomRightLocation:(id)arg2 options:(id)arg3 ;
+(id)fetchAssetsInImportSessions:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsWithoutOriginalsInAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsWithMediaType:(long long)arg1 options:(id)arg2 ;
+(id)fetchAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsWithCloudIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsWithALAssetURLs:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsWithBurstIdentifier:(id)arg1 options:(id)arg2 ;
+(id)fetchKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsWithOptions:(id)arg1 ;
+(id)fetchAssetsForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsForPersons:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsForFaces:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsForFaceGroups:(id)arg1 options:(id)arg2 ;
+(id)fetchQuarantinedAsssetsWithOptions:(id)arg1 ;
+(id)fetchKeyAssetForSceneIdentifier:(unsigned)arg1 withConfidenceThreshold:(double)arg2 options:(id)arg3 ;
+(id)fetchAssetsNeedingSceneProcessingWithOptions:(id)arg1 ;
+(id)fetchAssetsAllowedForSceneProcessingWithOptions:(id)arg1 ;
+(id)fetchAssetsWithObjectIDs:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsInAssetCollections:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsForKeywords:(id)arg1 options:(id)arg2 ;
+(id)fetchReferencedAssetsWithOptions:(id)arg1 ;
+(id)fetchFirstAssetInEachMonthHighlightWithOptions:(id)arg1 ;
+(id)fetchAllAssetsInYearRepresentedByYearHighlight:(id)arg1 options:(id)arg2 ;
+(id)descriptionForPlaybackStyle:(long long)arg1 ;
+(id)descriptionForMediaType:(long long)arg1 ;
+(id)_descriptionForMediaSubtype:(unsigned long long)arg1 ;
+(id)descriptionForMediaSubtypes:(unsigned long long)arg1 ;
+(id)originalUniformTypeIdentifierForAsset:(id)arg1 ;
+(id)fetchAssetsForReferences:(id)arg1 photoLibrary:(id)arg2 ;
+(id)_currentTimestampString;
+(void)_inq_recordRequestID:(long long)arg1 ;
+(void)_inq_trimToMostRecentImageManagerMessages;
+(id)_inq_imageManagerRequestLogsByAssetUUID;
+(id)_inq_highestImageManagerRequestIDsObserved;
+(id)_imageManagerRequestLoggingQueue;
+(id)_inq_imageManagerRequestMessagesByRequestIDForAssetUUID:(id)arg1 requestID:(long long)arg2 ;
-(NSString *)description;
-(NSString *)directory;
-(NSString *)title;
-(int)orientation;
-(double)duration;
-(short)kind;
-(NSString *)filename;
-(NSDate *)modificationDate;
-(BOOL)isHidden;
-(CLLocation *)location;
-(NSDate *)creationDate;
-(CGSize)originalImageSize;
-(long long)imageOrientation;
-(double)aspectRatio;
-(long long)mediaType;
-(NSString *)cloudIdentifier;
-(NSDate *)localCreationDate;
-(BOOL)complete;
-(CGSize)imageSize;
-(unsigned long long)sourceType;
-(BOOL)isVideo;
-(int)exifOrientation;
-(BOOL)isTrashed;
-(id)debugFilename;
-(CLLocationCoordinate2D)locationCoordinate;
-(BOOL)isFavorite;
-(BOOL)isJPEG;
-(BOOL)isAudio;
-(NSString *)originalFilename;
-(BOOL)isOffline;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(double)curationScore;
-(BOOL)isPhoto;
-(id)cloudAssetGUID;
-(short)savedAssetType;
-(id)pathForOriginalFile;
-(BOOL)hasAdjustments;
-(BOOL)hasLegacyAdjustments;
-(BOOL)isCloudSharedAsset;
-(NSData *)locationData;
-(id)mainFileURL;
-(id)libraryID;
-(NSString *)uniformTypeIdentifier;
-(NSDate *)trashedDate;
-(id)pathForAdjustmentFile;
-(unsigned long long)effectiveThumbnailIndex;
-(int)deferredProcessingNeeded;
-(NSString *)originalColorSpace;
-(BOOL)isPhotoIris;
-(int)avalanchePickType;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(BOOL)isPhotoStreamPhoto;
-(NSSet *)sceneClassifications;
-(short)kindSubtype;
-(unsigned short)playbackVariation;
-(long long)playbackStyle;
-(NSDate *)adjustmentTimestamp;
-(unsigned short)videoCpVisibilityState;
-(void)generateLargeThumbnailFileIfNecessary;
-(BOOL)isInFlight;
-(NSString *)thumbnailIdentifier;
-(unsigned long long)thumbnailIndex;
-(id)pl_photoLibrary;
-(long long)cloudPlaceholderKind;
-(BOOL)isCloudPlaceholder;
-(id)assetsLibraryURL;
-(long long)originalImageOrientation;
-(BOOL)isLoopingVideo;
-(BOOL)isPrimaryImageFormat;
-(BOOL)isRAW;
-(BOOL)isPartOfBurst;
-(BOOL)isStreamedVideo;
-(id)pathForAdjustmentDataFile;
-(long long)cloudSharedAssetPlaceholderKind;
-(BOOL)isCloudPhotoLibraryAsset;
-(id)managedAssetForPhotoLibrary:(id)arg1 ;
-(BOOL)isTimelapsePlaceholder;
-(BOOL)isOriginalSRGB;
-(unsigned long long)localResourcesState;
-(BOOL)isScreenRecording;
-(BOOL)isLocatedAtCoordinates:(CLLocationCoordinate2D)arg1 ;
-(BOOL)isPhotoIrisPlaceholder;
-(BOOL)canPlayPhotoIris;
-(BOOL)isHDVideo;
-(BOOL)isIncludedInMoments;
-(BOOL)isIncludedInCloudFeeds;
-(id)fileURLForFullsizeRenderImage;
-(id)faceAdjustmentVersion;
-(long long)videoCpDurationValue;
-(unsigned long long)originalResourceChoice;
-(BOOL)isRAWPlusJPEG;
-(NSString *)groupingUUID;
-(float)hdrGain;
-(unsigned long long)groupingState;
-(NSArray *)faceRegions;
-(float)overallAestheticScore;
-(NSString *)burstIdentifier;
-(unsigned char)bundleScope;
-(BOOL)cloudIsDeletable;
-(BOOL)isHighFrameRateVideo;
-(id)adjustmentVersion;
-(NSData *)imageRequestHints;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(BOOL)isJPEG2000;
-(BOOL)isTIFF;
-(BOOL)isHEIF;
-(BOOL)isPDF;
-(BOOL)isPNG;
-(BOOL)isPSD;
-(id)pl_managedAsset;
-(id)pl_managedAssetFromPhotoLibrary:(id)arg1 ;
-(double)highlightVisibilityScore;
-(double)highlightPromotionScore;
-(unsigned long long)reframeVariation;
-(BOOL)shouldUseRAWResourceAsUnadjustedEditBase;
-(void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(BOOL)_canHandleAdjustmentData:(id)arg1 withOptions:(id)arg2 ;
-(long long)_baseVersionForAdjustmentData:(id)arg1 canHandleAdjustmentData:(BOOL)arg2 ;
-(id)_videoRequestOptionsForBaseVersion:(long long)arg1 options:(id)arg2 progressEstimateForVideoProgress:(/*^block*/id)arg3 ;
-(id)_imageRequestOptionsForBaseVersion:(long long)arg1 options:(id)arg2 progressEstimateForImageProgress:(/*^block*/id)arg3 ;
-(unsigned long long)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelContentEditingInputRequest:(unsigned long long)arg1 ;
-(void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(BOOL)arg3 resultHandler:(/*^block*/id)arg4 ;
-(id)originalUTI;
-(BOOL)shouldUseRAWResourceWithOriginalResourceChoice:(unsigned long long)arg1 ;
-(BOOL)isOriginalRaw;
-(unsigned long long)originalChoiceToFallbackForUnsupportRAW;
-(NSData *)distanceIdentity;
-(int)analysisStateForWorkerType:(short)arg1 outLastIgnoreDate:(id*)arg2 outIgnoreUntilDate:(id*)arg3 ;
-(NSManagedObjectContext *)managedObjectContextForFetchingResources;
-(short)assetSource;
-(BOOL)isMediaSubtype:(unsigned long long)arg1 ;
-(BOOL)needsDeferredProcessing;
-(void)_createExtendedPropertySetsIfNeededWithPropertyHint:(unsigned long long)arg1 fetchDictionary:(id)arg2 ;
-(void)fetchPropertySetsIfNeeded;
-(void)_addPropertyHint:(unsigned long long)arg1 ;
-(id)_createPropertyObjectOfClass:(Class)arg1 preFetchedProperties:(id)arg2 ;
-(id)_createPropertyObjectOfClass:(Class)arg1 ;
-(id)_createCommentPropertyObject;
-(id)_createAnalysisStatePropertyObject;
-(id)_createKeywordPropertyObject;
-(id)originalMetadataProperties;
-(id)photosOneUpProperties;
-(id)localDateProperties;
-(id)photosInfoPanelExtendedProperties;
-(id)photosInfoPanelLocationProperties;
-(id)photoIrisProperties;
-(id)descriptionProperties;
-(id)commentProperties;
-(id)sceneAnalysisProperties;
-(id)assetAnalysisStateProperties;
-(id)assetUserActivityProperties;
-(id)adjustmentProperties;
-(id)curationProperties;
-(id)aestheticProperties;
-(id)mediaAnalysisProperties;
-(id)importProperties;
-(id)sceneprintProperties;
-(id)destinationAssetCopyProperties;
-(id)keywordProperties;
-(id)gridMetadataProperties;
-(unsigned long long)variationSuggestionStatesForVariationType:(unsigned long long)arg1 ;
-(BOOL)isVariationSuggestionStatesUnknown;
-(id)_unfetchedPropertySetsFromPropertySets:(id)arg1 ;
-(BOOL)isAnimatedGIF;
-(id)originalImageProperties;
-(id)originalAVAssetOrProxy;
-(id)originalAVAssetCommonMetadata;
-(id)originalAVAssetCreationDate;
-(NSURL *)ALAssetURL;
-(unsigned long long)burstSelectionTypes;
-(BOOL)representsBurst;
-(BOOL)isPartOfGroup;
-(BOOL)isPrimaryInGroup;
-(BOOL)canPlayAutoloop;
-(BOOL)canPlayLongExposure;
-(BOOL)canPlayMirror;
-(BOOL)canPlayLoopingVideo;
-(BOOL)hasPhotoColorAdjustments;
-(BOOL)hasPhotoStreamTagID;
-(BOOL)isMomentSharedAsset;
-(BOOL)isReferencedAsset;
-(void)getMasterFingerPrintWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getFingerPrintForAssetType:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)hasContentEqualTo:(id)arg1 ;
-(BOOL)canPerformSharingAction;
-(id)fileURLsForDiagnosticFiles;
-(id)fileURLForVideoComplementFile;
-(id)__dictionaryWithContentsOfData:(id)arg1 ;
-(id)gatingDebugMetadata;
-(id)evaluationDebugMetadata;
-(id)adjustmentsDebugMetadata;
-(id)detailedDebugDescriptionInLibrary:(id)arg1 ;
-(id)descriptionForMediaAnalysisWithManagedAsset:(id)arg1 ;
-(id)descriptionForAestheticsWithManagedAsset:(id)arg1 ;
-(NSString *)resourcesDebugDescription;
-(NSString *)metadataDebugDescription;
-(NSString *)variationSuggestionStatesDetails;
-(void)_reportUsage;
-(unsigned long long)mediaSubtypes;
-(BOOL)isSyncFailureHidden;
-(unsigned long long)persistenceState;
-(CGRect)preferredCropRect;
-(CGRect)acceptableCropRect;
-(double)faceAreaMinX;
-(double)faceAreaMaxX;
-(double)faceAreaMinY;
-(double)faceAreaMaxY;
-(long long)RAWPlusJPEGBadgeAttributes;
-(BOOL)hasKeywords;
-(BOOL)assetDescriptionWasSet;
-(void)setAssetDescriptionWasSet:(BOOL)arg1 ;
-(BOOL)canUseLocationCoordinateForLocation;
-(void)setCanUseLocationCoordinateForLocation:(BOOL)arg1 ;
-(NSDate *)analysisStateModificationDate;
-(id)objectReference;
-(void)recordImageManagerMessageForRequestID:(int)arg1 message:(id)arg2 ;
-(id)messagesForRecentImageManagerRequests;
@end

