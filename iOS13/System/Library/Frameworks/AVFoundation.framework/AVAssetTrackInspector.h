/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVFigObjectInspector.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

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
@property (nonatomic,readonly) SCD_Struct_AV8 timeRange; 
@property (nonatomic,readonly) SCD_Struct_AV8 mediaPresentationTimeRange; 
@property (nonatomic,readonly) SCD_Struct_AV8 mediaDecodeTimeRange; 
@property (nonatomic,readonly) SCD_Struct_AV7 latentBaseDecodeTimeStampOfFirstTrackFragment; 
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
@property (nonatomic,readonly) SCD_Struct_AV7 minSampleDuration; 
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
+(id)assetTrackInspectorWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSLocale *)locale;
-(NSString *)languageCode;
-(BOOL)isEnabled;
-(int)trackID;
-(NSString *)mediaType;
-(long long)layer;
-(NSArray *)segments;
-(CGSize)dimensions;
-(BOOL)hasProtectedContent;
-(SCD_Struct_AV8)timeRange;
-(CGSize)naturalSize;
-(CGAffineTransform)preferredTransform;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)metadataForFormat:(id)arg1 ;
-(NSArray *)formatDescriptions;
-(NSArray *)commonMetadata;
-(NSString *)extendedLanguageTag;
-(long long)totalSampleDataLength;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)_weakReference;
-(float)preferredVolume;
-(int)naturalTimeScale;
-(NSArray *)availableMetadataFormats;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 ;
-(id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2 ;
-(BOOL)isPlayable;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(BOOL)isDecodable;
-(int)playabilityValidationResult;
-(BOOL)isSelfContained;
-(NSArray *)mediaCharacteristics;
-(SCD_Struct_AV8)mediaPresentationTimeRange;
-(SCD_Struct_AV8)mediaDecodeTimeRange;
-(SCD_Struct_AV7)latentBaseDecodeTimeStampOfFirstTrackFragment;
-(BOOL)requiresFrameReordering;
-(BOOL)hasAudioSampleDependencies;
-(float)estimatedDataRate;
-(float)peakDataRate;
-(NSDictionary *)loudnessInfo;
-(float)nominalFrameRate;
-(SCD_Struct_AV7)minSampleDuration;
-(id)segmentForTrackTime:(SCD_Struct_AV7)arg1 ;
-(SCD_Struct_AV7)samplePresentationTimeForTrackTime:(SCD_Struct_AV7)arg1 ;
-(long long)alternateGroupID;
-(long long)defaultAlternateGroupID;
-(long long)provisionalAlternateGroupID;
-(BOOL)isExcludedFromAutoselectionInTrackGroup;
-(id)_trackReferences;
-(BOOL)hasAudibleBooksContent;
-(BOOL)isAudibleBooksContentAuthorized;
-(unsigned)_figMediaType;
@end

