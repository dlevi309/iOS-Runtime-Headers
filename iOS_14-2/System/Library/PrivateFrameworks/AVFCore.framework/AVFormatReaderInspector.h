/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetInspector.h>

@interface AVFormatReaderInspector : AVAssetInspector {

	OpaqueFigFormatReaderRef _formatReader;
	BOOL didCheckForSaveRestriction;
	BOOL hasSaveRestriction;

}

@property (setter=_setFormatReader:,getter=_formatReader,nonatomic,retain) OpaqueFigFormatReaderRef formatReader; 
-(OpaqueFigFormatReaderRef)_formatReader;
-(SCD_Struct_AV6)overallDurationHint;
-(id)lyrics;
-(id)trackReferences;
-(long long)trackCount;
-(BOOL)isReadable;
-(long long)firstFragmentSequenceNumber;
-(float)preferredSoundCheckVolumeNormalization;
-(id)commonMetadata;
-(CGSize)naturalSize;
-(BOOL)canContainFragments;
-(float)preferredVolume;
-(BOOL)isComposable;
-(id)metadataForFormat:(id)arg1 ;
-(id)availableMetadataFormats;
-(CGAffineTransform)preferredTransform;
-(int)naturalTimeScale;
-(float)preferredRate;
-(BOOL)_hasQTSaveRestriction;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(void)_setFormatReader:(OpaqueFigFormatReaderRef)arg1 ;
-(BOOL)containsFragments;
-(id)alternateTrackGroups;
-(long long)fragmentCount;
-(BOOL)providesPreciseDurationAndTiming;
-(SCD_Struct_AV6)minimumTimeOffsetFromLive;
-(unsigned long long)hash;
-(SCD_Struct_AV6)duration;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithFormatReader:(OpaqueFigFormatReaderRef)arg1 ;
-(BOOL)isExportable;
@end

