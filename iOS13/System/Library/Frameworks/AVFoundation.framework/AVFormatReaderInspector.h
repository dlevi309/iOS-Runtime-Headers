/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspector.h>

@interface AVFormatReaderInspector : AVAssetInspector {

	OpaqueFigFormatReaderRef _formatReader;
	BOOL didCheckForSaveRestriction;
	BOOL hasSaveRestriction;

}

@property (setter=_setFormatReader:,getter=_formatReader,nonatomic,retain) OpaqueFigFormatReaderRef formatReader; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SCD_Struct_AV7)duration;
-(CGSize)naturalSize;
-(CGAffineTransform)preferredTransform;
-(id)metadataForFormat:(id)arg1 ;
-(id)commonMetadata;
-(SCD_Struct_AV7)overallDurationHint;
-(float)preferredRate;
-(float)preferredVolume;
-(float)preferredSoundCheckVolumeNormalization;
-(SCD_Struct_AV7)minimumTimeOffsetFromLive;
-(int)naturalTimeScale;
-(BOOL)providesPreciseDurationAndTiming;
-(id)alternateTrackGroups;
-(id)trackReferences;
-(id)lyrics;
-(id)availableMetadataFormats;
-(long long)trackCount;
-(BOOL)isExportable;
-(BOOL)isReadable;
-(BOOL)isComposable;
-(BOOL)canContainFragments;
-(BOOL)containsFragments;
-(OpaqueFigFormatReaderRef)_formatReader;
-(long long)firstFragmentSequenceNumber;
-(long long)fragmentCount;
-(id)initWithFormatReader:(OpaqueFigFormatReaderRef)arg1 ;
-(void)_setFormatReader:(OpaqueFigFormatReaderRef)arg1 ;
-(BOOL)_hasQTSaveRestriction;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
@end

