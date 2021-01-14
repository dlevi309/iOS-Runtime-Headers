/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetTrackInspector.h>

@protocol OS_dispatch_queue;
@class AVDispatchOnce, NSObject, NSMutableArray, AVWeakReference;

@interface AVFigAssetTrackInspector : AVAssetTrackInspector {

	OpaqueFigAssetRef _figAsset;
	OpaqueFigAssetTrackRef _figAssetTrack;
	AVDispatchOnce* _copyFigFormatReaderOnce;
	OpaqueFigFormatReaderRef _figFormatReader;
	AVDispatchOnce* _copyFigTrackReaderOnce;
	OpaqueFigTrackReaderRef _figTrackReader;
	OpaqueFigSimpleMutexRef _loadingMutex;
	NSObject*<OS_dispatch_queue> _completionHandlerQueue;
	NSMutableArray* _loadingBatches;
	unsigned _mediaType;
	AVWeakReference* _weakReferenceToAsset;

}
-(float)estimatedDataRate;
-(BOOL)isPlayable;
-(BOOL)hasProtectedContent;
-(OpaqueFigSimpleMutexRef)_loadingMutex;
-(void)_invokeCompletionHandlerForLoadingBatches:(id)arg1 ;
-(SCD_Struct_AV6)minSampleDuration;
-(long long)layer;
-(id)commonMetadata;
-(float)nominalFrameRate;
-(CGSize)naturalSize;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(id)mediaType;
-(BOOL)isExcludedFromAutoselectionInTrackGroup;
-(float)preferredVolume;
-(BOOL)isAudibleBooksContentAuthorized;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(BOOL)isSelfContained;
-(id)_loadingBatches;
-(id)asset;
-(id)_trackReferences;
-(CGSize)dimensions;
-(SCD_Struct_AV7)timeRange;
-(id)segmentsAsPresented;
-(id)metadataForFormat:(id)arg1 ;
-(void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1 ;
-(id)availableMetadataFormats;
-(CGAffineTransform)preferredTransform;
-(int)naturalTimeScale;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(id)loudnessInfo;
-(id)languageCode;
-(BOOL)segmentsExcludeAudioPrimingAndRemainderDurations;
-(int)trackID;
-(long long)alternateGroupID;
-(SCD_Struct_AV7)gaplessSourceTimeRange;
-(SCD_Struct_AV7)mediaDecodeTimeRange;
-(BOOL)isDecodable;
-(OpaqueFigFormatReaderRef)_figFormatReader;
-(long long)_loadStatusForFigAssetTrackProperty:(id)arg1 error:(id*)arg2 ;
-(void)_addFigNotifications;
-(id)extendedLanguageTag;
-(SCD_Struct_AV6)latentBaseDecodeTimeStampOfFirstTrackFragment;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)segments;
-(BOOL)requiresFrameReordering;
-(SCD_Struct_AV7)mediaPresentationTimeRange;
-(BOOL)hasAudibleBooksContent;
-(unsigned long long)hash;
-(void)_removeFigNotifications;
-(long long)defaultAlternateGroupID;
-(int)playabilityValidationResult;
-(BOOL)isEnabled;
-(int)decodabilityValidationResult;
-(long long)totalSampleDataLength;
-(float)peakDataRate;
-(id)segmentForTrackTime:(SCD_Struct_AV6)arg1 ;
-(id)formatDescriptions;
-(id)_segmentsForProperty:(CFStringRef)arg1 ;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(unsigned)_figMediaType;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(long long)provisionalAlternateGroupID;
@end

