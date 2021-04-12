/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVTrackReaderInspector : AVAssetTrackInspector {

	OpaqueFigFormatReaderRef _formatReader;
	OpaqueFigTrackReaderRef _trackReader;
	int _trackID;
	unsigned _mediaType;
	AVWeakReference* _weakReferenceToAsset;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)languageCode;
-(BOOL)isEnabled;
-(int)trackID;
-(id)mediaType;
-(id)asset;
-(long long)layer;
-(id)segments;
-(CGSize)dimensions;
-(SCD_Struct_AV8)timeRange;
-(CGSize)naturalSize;
-(CGAffineTransform)preferredTransform;
-(id)metadataForFormat:(id)arg1 ;
-(id)formatDescriptions;
-(id)commonMetadata;
-(id)extendedLanguageTag;
-(long long)totalSampleDataLength;
-(float)preferredVolume;
-(int)naturalTimeScale;
-(id)availableMetadataFormats;
-(BOOL)isPlayable;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(BOOL)isDecodable;
-(int)playabilityValidationResult;
-(BOOL)isSelfContained;
-(id)mediaCharacteristics;
-(SCD_Struct_AV7)latentBaseDecodeTimeStampOfFirstTrackFragment;
-(BOOL)requiresFrameReordering;
-(BOOL)hasAudioSampleDependencies;
-(float)estimatedDataRate;
-(float)peakDataRate;
-(id)loudnessInfo;
-(float)nominalFrameRate;
-(SCD_Struct_AV7)minSampleDuration;
-(id)segmentForTrackTime:(SCD_Struct_AV7)arg1 ;
-(long long)alternateGroupID;
-(long long)defaultAlternateGroupID;
-(long long)provisionalAlternateGroupID;
-(BOOL)isExcludedFromAutoselectionInTrackGroup;
-(id)_trackReferences;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(unsigned)_figMediaType;
-(int)decodabilityValidationResult;
@end

