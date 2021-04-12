/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetInspector.h>

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
-(OpaqueFigFormatReaderRef)_formatReader;
-(SCD_Struct_AV6)overallDurationHint;
-(BOOL)isPlayable;
-(id)lyrics;
-(id)trackReferences;
-(BOOL)hasProtectedContent;
-(long long)trackCount;
-(BOOL)isReadable;
-(long long)firstFragmentSequenceNumber;
-(float)preferredSoundCheckVolumeNormalization;
-(id)commonMetadata;
-(CGSize)naturalSize;
-(BOOL)canContainFragments;
-(id)identifyingTag;
-(float)preferredVolume;
-(BOOL)isComposable;
-(id)metadataForFormat:(id)arg1 ;
-(CGSize)maximumVideoResolution;
-(id)_nameForProxy;
-(id)availableMetadataFormats;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(CGAffineTransform)preferredTransform;
-(int)naturalTimeScale;
-(float)preferredRate;
-(BOOL)_hasQTSaveRestriction;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(id)_instanceIdentifier;
-(BOOL)containsFragments;
-(id)propertyListForProxy;
-(NSURL *)originalNetworkContentURL;
-(id)alternateTrackGroups;
-(long long)fragmentCount;
-(BOOL)providesPreciseDurationAndTiming;
-(id)creationDate;
-(BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1 ;
-(BOOL)isCompatibleWithAirPlayVideo;
-(BOOL)_isStreaming;
-(NSArray *)figChapterGroupInfo;
-(SCD_Struct_AV6)minimumTimeOffsetFromLive;
-(NSArray *)figChapters;
-(NSURL *)URL;
-(unsigned long long)hash;
-(id)identifyingTagClass;
-(BOOL)supportsAnalysisReporting;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(id)_mediaSelectionGroupDictionaries;
-(id)_assetAnalysisMessages;
-(id)availableVideoDynamicRanges;
-(id)makePropertyListForProxyWithOptions:(id)arg1 ;
-(OpaqueFigAssetRef)_figAsset;
-(SCD_Struct_AV6)duration;
-(unsigned long long)downloadToken;
-(id)preferredDisplayCriteria;
-(NSURL *)resolvedURL;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)SHA1Digest;
-(BOOL)isExportable;
@end

