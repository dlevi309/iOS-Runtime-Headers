/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <AVFCore/AVAsynchronousKeyValueLoading.h>

@class AVAssetTrackInternal, AVAsset;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVAssetTrackInternal* _track;

}

@property (nonatomic,__weak,readonly) AVAsset * asset; 
@property (nonatomic,readonly) int trackID; 
+(BOOL)expectsPropertyRevisedNotifications;
+(id)mediaCharacteristicsForMediaTypes;
+(id)keyPathsForValuesAffectingTimeRange;
-(float)estimatedDataRate;
-(BOOL)isPlayable;
-(BOOL)hasProtectedContent;
-(long long)layer;
-(id)locale;
-(id)commonMetadata;
-(float)nominalFrameRate;
-(CGSize)naturalSize;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(id)mediaType;
-(id)init;
-(BOOL)isExcludedFromAutoselectionInTrackGroup;
-(float)preferredVolume;
-(BOOL)isAudibleBooksContentAuthorized;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(BOOL)isSelfContained;
-(AVAsset *)asset;
-(id)_trackReferences;
-(CGSize)dimensions;
-(SCD_Struct_AV7)timeRange;
-(id)segmentsAsPresented;
-(id)metadataForFormat:(id)arg1 ;
-(id)availableMetadataFormats;
-(CGAffineTransform)preferredTransform;
-(int)naturalTimeScale;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)loudnessInfo;
-(id)languageCode;
-(BOOL)segmentsExcludeAudioPrimingAndRemainderDurations;
-(int)trackID;
-(long long)alternateGroupID;
-(SCD_Struct_AV7)gaplessSourceTimeRange;
-(SCD_Struct_AV6)minFrameDuration;
-(SCD_Struct_AV7)mediaDecodeTimeRange;
-(BOOL)isDecodable;
-(BOOL)hasMediaCharacteristic:(id)arg1 ;
-(id)description;
-(id)extendedLanguageTag;
-(SCD_Struct_AV6)latentBaseDecodeTimeStampOfFirstTrackFragment;
-(id)_weakReference;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)segments;
-(BOOL)requiresFrameReordering;
-(SCD_Struct_AV7)mediaPresentationTimeRange;
-(BOOL)hasAudibleBooksContent;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 ;
-(id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2 ;
-(long long)statusOfValueForKey:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasMediaCharacteristics:(id)arg1 ;
-(id)_fallbackTrack;
-(void)_startListeningToFigAssetTrackNotifications;
-(void)_stopListeningToFigAssetTrackNotifications;
-(BOOL)hasAudioSampleDependencies;
-(id)associatedTracksOfType:(id)arg1 ;
-(SCD_Struct_AV6)samplePresentationTimeForTrackTime:(SCD_Struct_AV6)arg1 ;
-(id)_assetTrackInspector;
-(id)_firstAssociatedTrackWithAssociationType:(id)arg1 ;
-(BOOL)_hasMultipleEdits;
-(BOOL)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)arg1 flagsMask:(unsigned)arg2 ;
-(id)_followingTrackAmongTracks:(id)arg1 ;
-(id)_pairedForcedOnlySubtitlesTrack;
-(BOOL)_hasScaledEdits;
-(BOOL)_hasEmptyEdits;
-(BOOL)_firstFormatDescriptionIsLPCM;
-(BOOL)_hasMultipleDistinctFormatDescriptions;
-(long long)defaultAlternateGroupID;
-(int)playabilityValidationResult;
-(BOOL)isEnabled;
-(long long)totalSampleDataLength;
-(float)peakDataRate;
-(id)segmentForTrackTime:(SCD_Struct_AV6)arg1 ;
-(id)metadata;
-(id)formatDescriptions;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)availableTrackAssociationTypes;
-(long long)provisionalAlternateGroupID;
-(id)mediaCharacteristics;
@end

