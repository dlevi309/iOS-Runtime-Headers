/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

@class AVAssetTrackInternal, AVAsset;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVAssetTrackInternal* _track;

}

@property (nonatomic,__weak,readonly) AVAsset * asset; 
@property (nonatomic,readonly) int trackID; 
+(BOOL)expectsPropertyRevisedNotifications;
+(id)mediaCharacteristicsForMediaTypes;
+(id)keyPathsForValuesAffectingTimeRange;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)locale;
-(id)languageCode;
-(BOOL)isEnabled;
-(id)metadata;
-(int)trackID;
-(id)mediaType;
-(AVAsset *)asset;
-(long long)layer;
-(id)segments;
-(CGSize)dimensions;
-(BOOL)hasProtectedContent;
-(SCD_Struct_AV8)timeRange;
-(CGSize)naturalSize;
-(CGAffineTransform)preferredTransform;
-(BOOL)hasMediaCharacteristic:(id)arg1 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)metadataForFormat:(id)arg1 ;
-(id)formatDescriptions;
-(id)commonMetadata;
-(id)extendedLanguageTag;
-(SCD_Struct_AV7)minFrameDuration;
-(long long)totalSampleDataLength;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)_weakReference;
-(float)preferredVolume;
-(int)naturalTimeScale;
-(id)availableMetadataFormats;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 ;
-(id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2 ;
-(BOOL)isPlayable;
-(long long)statusOfValueForKey:(id)arg1 ;
-(BOOL)hasMediaCharacteristics:(id)arg1 ;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(void)_startListeningToFigAssetTrackNotifications;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(void)_stopListeningToFigAssetTrackNotifications;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(BOOL)isDecodable;
-(int)playabilityValidationResult;
-(BOOL)isSelfContained;
-(id)mediaCharacteristics;
-(SCD_Struct_AV8)mediaPresentationTimeRange;
-(SCD_Struct_AV8)mediaDecodeTimeRange;
-(SCD_Struct_AV7)latentBaseDecodeTimeStampOfFirstTrackFragment;
-(BOOL)requiresFrameReordering;
-(BOOL)hasAudioSampleDependencies;
-(float)estimatedDataRate;
-(float)peakDataRate;
-(id)loudnessInfo;
-(float)nominalFrameRate;
-(id)segmentForTrackTime:(SCD_Struct_AV7)arg1 ;
-(SCD_Struct_AV7)samplePresentationTimeForTrackTime:(SCD_Struct_AV7)arg1 ;
-(long long)alternateGroupID;
-(long long)defaultAlternateGroupID;
-(long long)provisionalAlternateGroupID;
-(BOOL)isExcludedFromAutoselectionInTrackGroup;
-(id)associatedTracksOfType:(id)arg1 ;
-(id)_firstAssociatedTrackWithAssociationType:(id)arg1 ;
-(id)_trackReferences;
-(BOOL)hasAudibleBooksContent;
-(BOOL)isAudibleBooksContentAuthorized;
-(id)_assetTrackInspector;
-(BOOL)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)arg1 flagsMask:(unsigned)arg2 ;
-(id)_fallbackTrack;
-(id)_followingTrackAmongTracks:(id)arg1 ;
-(id)_pairedForcedOnlySubtitlesTrack;
-(id)availableTrackAssociationTypes;
-(BOOL)_hasMultipleEdits;
-(BOOL)_hasScaledEdits;
-(BOOL)_hasEmptyEdits;
-(BOOL)_hasMultipleDistinctFormatDescriptions;
-(BOOL)_firstFormatDescriptionIsLPCM;
@end

