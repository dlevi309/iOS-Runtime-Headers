/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVTrackReaderInspector : AVAssetTrackInspector {

	OpaqueFigFormatReaderRef _formatReader;
	OpaqueFigTrackReaderRef _trackReader;
	int _trackID;
	unsigned _mediaType;
	AVWeakReference* _weakReferenceToAsset;

}
-(float)estimatedDataRate;
-(BOOL)isPlayable;
-(SCD_Struct_AV6)minSampleDuration;
-(long long)layer;
-(id)commonMetadata;
-(float)nominalFrameRate;
-(CGSize)naturalSize;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(id)mediaType;
-(BOOL)isExcludedFromAutoselectionInTrackGroup;
-(float)preferredVolume;
-(BOOL)isSelfContained;
-(id)asset;
-(id)_trackReferences;
-(CGSize)dimensions;
-(SCD_Struct_AV7)timeRange;
-(id)metadataForFormat:(id)arg1 ;
-(id)availableMetadataFormats;
-(CGAffineTransform)preferredTransform;
-(int)naturalTimeScale;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(id)loudnessInfo;
-(id)languageCode;
-(int)trackID;
-(long long)alternateGroupID;
-(BOOL)isDecodable;
-(id)extendedLanguageTag;
-(SCD_Struct_AV6)latentBaseDecodeTimeStampOfFirstTrackFragment;
-(id)segments;
-(BOOL)requiresFrameReordering;
-(unsigned long long)hash;
-(BOOL)hasAudioSampleDependencies;
-(long long)defaultAlternateGroupID;
-(int)playabilityValidationResult;
-(BOOL)isEnabled;
-(int)decodabilityValidationResult;
-(long long)totalSampleDataLength;
-(float)peakDataRate;
-(id)segmentForTrackTime:(SCD_Struct_AV6)arg1 ;
-(id)formatDescriptions;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(unsigned)_figMediaType;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(long long)provisionalAlternateGroupID;
-(id)mediaCharacteristics;
@end

