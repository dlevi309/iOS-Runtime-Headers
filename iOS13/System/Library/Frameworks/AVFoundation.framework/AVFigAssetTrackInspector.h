/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrackInspector.h>

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
-(BOOL)hasProtectedContent;
-(SCD_Struct_AV8)timeRange;
-(CGSize)naturalSize;
-(CGAffineTransform)preferredTransform;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)metadataForFormat:(id)arg1 ;
-(id)formatDescriptions;
-(id)commonMetadata;
-(id)extendedLanguageTag;
-(long long)totalSampleDataLength;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(float)preferredVolume;
-(void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1 ;
-(int)naturalTimeScale;
-(id)availableMetadataFormats;
-(BOOL)isPlayable;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(BOOL)isDecodable;
-(int)playabilityValidationResult;
-(BOOL)isSelfContained;
-(SCD_Struct_AV8)mediaPresentationTimeRange;
-(SCD_Struct_AV8)mediaDecodeTimeRange;
-(SCD_Struct_AV7)latentBaseDecodeTimeStampOfFirstTrackFragment;
-(BOOL)requiresFrameReordering;
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
-(BOOL)hasAudibleBooksContent;
-(BOOL)isAudibleBooksContentAuthorized;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(OpaqueFigSimpleMutexRef)_loadingMutex;
-(id)_loadingBatches;
-(void)_invokeCompletionHandlerForLoadingBatches:(id)arg1 ;
-(unsigned)_figMediaType;
-(int)decodabilityValidationResult;
-(void)_addFigNotifications;
-(void)_removeFigNotifications;
-(long long)_loadStatusForFigAssetTrackProperty:(id)arg1 error:(id*)arg2 ;
-(OpaqueFigFormatReaderRef)_figFormatReader;
@end

