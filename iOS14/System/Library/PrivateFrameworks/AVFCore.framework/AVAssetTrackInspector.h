/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVFigObjectInspector.h>
#import <AVFCore/AVAsynchronousKeyValueLoading.h>

@class AVWeakReference, AVDispatchOnce, NSArray, NSString, NSLocale, NSDictionary;

@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading> {

	AVWeakReference* _weakReference;
	AVDispatchOnce* _synthesizeMediaCharacteristicsOnce;
	NSArray* _cachedMediaCharacteristics;

}

@property (nonatomic,readonly) int trackID; 
@property (getter=_figMediaType,nonatomic,readonly) unsigned figMediaType; 
@property (getter=_figTrackReader,nonatomic,readonly) OpaqueFigTrackReaderRef figTrackReader; 
@property (getter=_figAssetTrack,nonatomic,readonly) OpaqueFigAssetTrackRef figAssetTrack; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSArray * formatDescriptions; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (getter=isDecodable,nonatomic,readonly) BOOL decodable; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (getter=isSelfContained,nonatomic,readonly) BOOL selfContained; 
@property (nonatomic,readonly) long long totalSampleDataLength; 
@property (nonatomic,readonly) SCD_Struct_AV7 timeRange; 
@property (nonatomic,readonly) SCD_Struct_AV7 mediaPresentationTimeRange; 
@property (nonatomic,readonly) SCD_Struct_AV7 mediaDecodeTimeRange; 
@property (nonatomic,readonly) SCD_Struct_AV6 latentBaseDecodeTimeStampOfFirstTrackFragment; 
@property (nonatomic,readonly) BOOL requiresFrameReordering; 
@property (nonatomic,readonly) int naturalTimeScale; 
@property (nonatomic,readonly) float estimatedDataRate; 
@property (nonatomic,readonly) float peakDataRate; 
@property (nonatomic,readonly) NSString * languageCode; 
@property (nonatomic,readonly) NSArray * mediaCharacteristics; 
@property (nonatomic,readonly) NSString * extendedLanguageTag; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,readonly) long long layer; 
@property (nonatomic,readonly) float preferredVolume; 
@property (nonatomic,readonly) BOOL hasAudioSampleDependencies; 
@property (nonatomic,readonly) NSDictionary * loudnessInfo; 
@property (nonatomic,readonly) float nominalFrameRate; 
@property (nonatomic,readonly) SCD_Struct_AV6 minSampleDuration; 
@property (nonatomic,copy,readonly) NSArray * segments; 
@property (nonatomic,readonly) NSArray * commonMetadata; 
@property (nonatomic,readonly) NSArray * availableMetadataFormats; 
@property (nonatomic,readonly) long long alternateGroupID; 
@property (nonatomic,readonly) long long defaultAlternateGroupID; 
@property (nonatomic,readonly) long long provisionalAlternateGroupID; 
@property (getter=isExcludedFromAutoselectionInTrackGroup,nonatomic,readonly) BOOL excludedFromAutoselectionInTrackGroup; 
@property (nonatomic,readonly) CGSize dimensions; 
@property (getter=_trackReferences,nonatomic,readonly) NSDictionary * trackReferences; 
@property (nonatomic,readonly) BOOL hasProtectedContent; 
@property (nonatomic,readonly) BOOL hasAudibleBooksContent; 
@property (nonatomic,readonly) BOOL isAudibleBooksContentAuthorized; 
@property (nonatomic,readonly) int playabilityValidationResult; 
@property (nonatomic,readonly) BOOL segmentsExcludeAudioPrimingAndRemainderDurations; 
@property (nonatomic,readonly) SCD_Struct_AV7 gaplessSourceTimeRange; 
@property (nonatomic,copy,readonly) NSArray * segmentsAsPresented; 
+(id)assetTrackInspectorWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(float)estimatedDataRate;
-(BOOL)isPlayable;
-(BOOL)hasProtectedContent;
-(SCD_Struct_AV6)minSampleDuration;
-(long long)layer;
-(NSLocale *)locale;
-(NSArray *)commonMetadata;
-(float)nominalFrameRate;
-(CGSize)naturalSize;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(NSString *)mediaType;
-(id)init;
-(BOOL)isExcludedFromAutoselectionInTrackGroup;
-(float)preferredVolume;
-(BOOL)isAudibleBooksContentAuthorized;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(BOOL)isSelfContained;
-(id)_trackReferences;
-(CGSize)dimensions;
-(SCD_Struct_AV7)timeRange;
-(NSArray *)segmentsAsPresented;
-(id)metadataForFormat:(id)arg1 ;
-(NSArray *)availableMetadataFormats;
-(CGAffineTransform)preferredTransform;
-(int)naturalTimeScale;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)loudnessInfo;
-(NSString *)languageCode;
-(BOOL)segmentsExcludeAudioPrimingAndRemainderDurations;
-(int)trackID;
-(long long)alternateGroupID;
-(SCD_Struct_AV7)gaplessSourceTimeRange;
-(SCD_Struct_AV7)mediaDecodeTimeRange;
-(BOOL)isDecodable;
-(NSString *)extendedLanguageTag;
-(SCD_Struct_AV6)latentBaseDecodeTimeStampOfFirstTrackFragment;
-(id)_weakReference;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)segments;
-(BOOL)requiresFrameReordering;
-(SCD_Struct_AV7)mediaPresentationTimeRange;
-(BOOL)hasAudibleBooksContent;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 ;
-(id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2 ;
-(BOOL)hasAudioSampleDependencies;
-(SCD_Struct_AV6)samplePresentationTimeForTrackTime:(SCD_Struct_AV6)arg1 ;
-(long long)defaultAlternateGroupID;
-(int)playabilityValidationResult;
-(BOOL)isEnabled;
-(long long)totalSampleDataLength;
-(float)peakDataRate;
-(id)segmentForTrackTime:(SCD_Struct_AV6)arg1 ;
-(NSArray *)formatDescriptions;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)_figMediaType;
-(void)dealloc;
-(long long)provisionalAlternateGroupID;
-(NSArray *)mediaCharacteristics;
@end

