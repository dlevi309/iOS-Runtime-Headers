/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspector.h>

@class AVDispatchOnce, AVDisplayCriteria, NSURL, NSArray;

@interface AVFigAssetInspector : AVAssetInspector {

	OpaqueFigAssetRef _figAsset;
	OpaqueFigFormatReaderRef _formatReader;
	AVDispatchOnce* _formatReaderOnce;
	AVDispatchOnce* _checkIsStreamingOnce;
	AVDispatchOnce* _makeDisplayCriteriaOnce;
	AVDisplayCriteria* _displayCriteria;
	BOOL _isStreaming;
	BOOL didCheckForSaveRestriction;
	BOOL hasSaveRestriction;

}

@property (getter=_figAsset,nonatomic,readonly) OpaqueFigAssetRef figAsset; 
@property (getter=_formatReader,nonatomic,readonly) OpaqueFigFormatReaderRef formatReader; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSArray * figChapterGroupInfo; 
@property (nonatomic,readonly) NSArray * figChapters; 
@property (nonatomic,readonly) NSURL * resolvedURL; 
@property (nonatomic,readonly) NSURL * originalNetworkContentURL; 
@property (nonatomic,readonly) BOOL hasProtectedContent; 
@property (getter=_isStreaming,nonatomic,readonly) BOOL streaming; 
@property (nonatomic,readonly) unsigned long long downloadToken; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSURL *)URL;
-(SCD_Struct_AV7)duration;
-(id)creationDate;
-(unsigned long long)downloadToken;
-(NSURL *)resolvedURL;
-(BOOL)hasProtectedContent;
-(id)_instanceIdentifier;
-(CGSize)naturalSize;
-(CGAffineTransform)preferredTransform;
-(id)metadataForFormat:(id)arg1 ;
-(id)commonMetadata;
-(SCD_Struct_AV7)overallDurationHint;
-(OpaqueFigAssetRef)_figAsset;
-(BOOL)_isStreaming;
-(float)preferredRate;
-(float)preferredVolume;
-(float)preferredSoundCheckVolumeNormalization;
-(CGSize)maximumVideoResolution;
-(id)availableVideoDynamicRanges;
-(id)preferredDisplayCriteria;
-(SCD_Struct_AV7)minimumTimeOffsetFromLive;
-(int)naturalTimeScale;
-(BOOL)providesPreciseDurationAndTiming;
-(id)alternateTrackGroups;
-(id)_mediaSelectionGroupDictionaries;
-(id)trackReferences;
-(id)lyrics;
-(id)availableMetadataFormats;
-(long long)trackCount;
-(BOOL)isPlayable;
-(BOOL)isExportable;
-(BOOL)isReadable;
-(BOOL)isComposable;
-(BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1 ;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(BOOL)isCompatibleWithAirPlayVideo;
-(BOOL)canContainFragments;
-(BOOL)containsFragments;
-(BOOL)supportsAnalysisReporting;
-(id)_assetAnalysisMessages;
-(OpaqueFigFormatReaderRef)_formatReader;
-(NSArray *)figChapterGroupInfo;
-(NSArray *)figChapters;
-(long long)firstFragmentSequenceNumber;
-(long long)fragmentCount;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(id)identifyingTagClass;
-(id)identifyingTag;
-(NSURL *)originalNetworkContentURL;
-(id)SHA1Digest;
-(id)propertyListForProxy;
-(id)makePropertyListForProxyWithOptions:(id)arg1 ;
-(BOOL)_hasQTSaveRestriction;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(id)_nameForProxy;
@end

