/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <AVFCore/AVAsynchronousKeyValueLoading.h>

@class AVAssetInternal, NSArray, AVDisplayCriteria;

@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVAssetInternal* _asset;

}

@property (readonly) NSArray * availableChapterLocales; 
@property (nonatomic,readonly) long long moovAtomSize; 
@property (nonatomic,readonly) NSArray * fragments; 
@property (nonatomic,retain,readonly) id<AVLoggingIdentifier> loggingIdentifier; 
@property (nonatomic,readonly) id propertyListForProxy; 
@property (nonatomic,readonly) BOOL isProxy; 
@property (nonatomic,readonly) SCD_Struct_AV6 duration; 
@property (nonatomic,readonly) float preferredRate; 
@property (nonatomic,readonly) float preferredVolume; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) AVDisplayCriteria * preferredDisplayCriteria; 
@property (nonatomic,readonly) SCD_Struct_AV6 minimumTimeOffsetFromLive; 
+(id)assetProxyWithPropertyList:(id)arg1 ;
+(id)assetWithURL:(id)arg1 ;
+(id)makeAssetLoggingIdentifier;
+(id)assetWithURL:(id)arg1 figPlaybackItem:(OpaqueFigPlaybackItemRef)arg2 trackIDs:(id)arg3 dynamicBehavior:(BOOL)arg4 ;
+(BOOL)supportsPlayerItems;
+(id)assetWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3 ;
+(BOOL)_assetCreationOptionsRequiresInProcessOperation:(id)arg1 ;
+(BOOL)expectsPropertyRevisedNotifications;
+(id)inspectionOnlyAssetWithFigAsset:(OpaqueFigAssetRef)arg1 ;
+(id)inspectionOnlyAssetWithStreamDataParser:(id)arg1 tracks:(id)arg2 ;
-(id)createLanguageOptionGroups;
-(void)mpLoadValuesAsynchronouslyForKeys:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(OpaqueFigFormatReaderRef)_formatReader;
-(SCD_Struct_AV6)overallDurationHint;
-(BOOL)isPlayable;
-(id)lyrics;
-(id)trackReferences;
-(void)cancelLoading;
-(BOOL)hasProtectedContent;
-(BOOL)isReadable;
-(float)preferredSoundCheckVolumeNormalization;
-(BOOL)isProxy;
-(id)commonMetadata;
-(CGSize)naturalSize;
-(id)init;
-(BOOL)canContainFragments;
-(float)preferredVolume;
-(int)unusedTrackID;
-(id)tracks;
-(BOOL)isComposable;
-(id)metadataForFormat:(id)arg1 ;
-(CGSize)maximumVideoResolution;
-(id)availableMetadataFormats;
-(CGAffineTransform)preferredTransform;
-(int)naturalTimeScale;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(float)preferredRate;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)_setFragmentMindingInterval:(double)arg1 ;
-(BOOL)containsFragments;
-(id)propertyListForProxy;
-(id)alternateTrackGroups;
-(BOOL)providesPreciseDurationAndTiming;
-(id)mediaSelectionGroupForMediaCharacteristic:(id)arg1 ;
-(double)_fragmentMindingInterval;
-(id)creationDate;
-(id)_weakReference;
-(BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)trackWithTrackID:(int)arg1 ;
-(id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(NSArray *)availableChapterLocales;
-(BOOL)isCompatibleWithAirPlayVideo;
-(BOOL)_isStreaming;
-(SCD_Struct_AV6)minimumTimeOffsetFromLive;
-(id)trackGroups;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)availableChapterLanguages;
-(BOOL)_mindsFragments;
-(NSArray *)fragments;
-(id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3 ;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(id)tracksWithMediaType:(id)arg1 ;
-(id)_firstTrackGroupWithMediaTypes:(id)arg1 ;
-(id)preferredMediaSelection;
-(id)_exportURL;
-(id)tracksWithMediaCharacteristics:(id)arg1 ;
-(void)_serverHasDied;
-(id)_nameForLogging;
-(void)_setLoggingIdentifier:(id)arg1 ;
-(id)_comparisonToken;
-(long long)statusOfValueForKey:(id)arg1 ;
-(void)_loadValuesSynchronouslyForKeys:(id)arg1 trackKeys:(id)arg2 ;
-(id)_absoluteURL;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(unsigned long long)referenceRestrictions;
-(BOOL)_needsLegacyChangeNotifications;
-(id)audioAlternatesTrackGroup;
-(id)subtitleAlternatesTrackGroup;
-(id)_ID3Metadata;
-(id)mediaSelectionGroupForPropertyList:(id)arg1 mediaSelectionOption:(id*)arg2 ;
-(id)allMediaSelections;
-(id)_tracksWithClass:(Class)arg1 ;
-(void)_tracksDidChange;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(id)compatibleTrackForCompositionTrack:(id)arg1 ;
-(id)_chapterTracks;
-(BOOL)_requiresInProcessOperation;
-(BOOL)_hasResourceLoaderDelegate;
-(void)_handleURLRequest:(id)arg1 ;
-(void)_loadChapterInfo;
-(id)_chapterDataTypeForMediaSubType:(int)arg1 ;
-(id)_availableCanonicalizedChapterLanguages;
-(unsigned long long)_addChapterMetadataItem:(id)arg1 timeRange:(SCD_Struct_AV7)arg2 toChapters:(id)arg3 fromIndex:(unsigned long long)arg4 ;
-(BOOL)_containsAtLeastOnePlayableAudioTrack;
-(id)_chapterMetadataGroupsWithFigChapterGroups:(id)arg1 titleLanguage:(id)arg2 containingItemsWithCommonKeys:(id)arg3 ;
-(id)_chapterMetadataGroupsWithTitleLanguage:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(id)_chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(long long)moovAtomSize;
-(id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 ;
-(BOOL)_containsAtLeastOnePlayableVideoTrack;
-(id<AVLoggingIdentifier>)loggingIdentifier;
-(unsigned long long)hash;
-(Class)_classForTrackInspectors;
-(BOOL)supportsAnalysisReporting;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(id)_mediaSelectionGroupDictionaries;
-(id)_assetAnalysisMessages;
-(id)availableVideoDynamicRanges;
-(id)makePropertyListForProxyWithOptions:(id)arg1 ;
-(OpaqueFigAssetRef)_figAsset;
-(id)metadata;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(SCD_Struct_AV6)duration;
-(AVDisplayCriteria *)preferredDisplayCriteria;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isExportable;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
-(id)availableMediaCharacteristicsWithMediaSelectionOptions;
@end

