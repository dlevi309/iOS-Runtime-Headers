/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetExportSessionInternal, NSString, AVAsset, NSURL, NSError;

@interface AVAssetExportSession : NSObject {

	AVAssetExportSessionInternal* _exportSession;

}

@property (nonatomic,readonly) NSString * presetName; 
@property (nonatomic,retain,readonly) AVAsset * asset; 
@property (nonatomic,copy) NSString * outputFileType; 
@property (nonatomic,copy) NSURL * outputURL; 
@property (assign,nonatomic) BOOL shouldOptimizeForNetworkUse; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) float progress; 
+(SCD_Struct_AV7)maximumDurationForPreset:(id)arg1 properties:(id)arg2 ;
+(id)allExportPresets;
+(id)exportPresetsCompatibleWithAsset:(id)arg1 ;
+(void)determineCompatibilityOfExportPreset:(id)arg1 withAsset:(id)arg2 outputFileType:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)exportSessionWithAsset:(id)arg1 presetName:(id)arg2 ;
+(long long)estimatedOutputFileLengthForPreset:(id)arg1 duration:(SCD_Struct_AV7)arg2 properties:(id)arg3 ;
+(id)keyPathsForValuesAffectingEstimatedOutputFileLength;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSError *)error;
-(float)progress;
-(long long)status;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(AVAsset *)asset;
-(NSURL *)outputURL;
-(void)setOutputURL:(NSURL *)arg1 ;
-(void)setTimeRange:(SCD_Struct_AV8)arg1 ;
-(SCD_Struct_AV8)timeRange;
-(void)setAudioMix:(id)arg1 ;
-(void)setAudioTimePitchAlgorithm:(id)arg1 ;
-(id)videoComposition;
-(void)setVideoComposition:(id)arg1 ;
-(id)customVideoCompositor;
-(id)audioMix;
-(id)audioTimePitchAlgorithm;
-(BOOL)maximizePowerEfficiency;
-(void)setMaximizePowerEfficiency:(BOOL)arg1 ;
-(BOOL)shouldOptimizeForNetworkUse;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
-(id)directoryForTemporaryFiles;
-(void)setDirectoryForTemporaryFiles:(id)arg1 ;
-(NSString *)outputFileType;
-(id)metadataItemFilter;
-(id)initWithAsset:(id)arg1 presetName:(id)arg2 ;
-(NSString *)presetName;
-(void)estimateMaximumDurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)estimateOutputFileLengthWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)supportedFileTypes;
-(void)determineCompatibleFileTypesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setOutputFileType:(NSString *)arg1 ;
-(void)AVExportSessionExportAsynchronouslyCompletionHandler;
-(void)exportAsynchronouslyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelExport;
-(SCD_Struct_AV7)maxDuration;
-(void)setMinVideoFrameDuration:(SCD_Struct_AV7)arg1 ;
-(SCD_Struct_AV7)minVideoFrameDuration;
-(void)setVideoFrameRateConversionAlgorithm:(id)arg1 ;
-(id)videoFrameRateConversionAlgorithm;
-(void)setPreserveSyncFrames:(BOOL)arg1 ;
-(BOOL)preserveSyncFrames;
-(long long)estimatedOutputFileLength;
-(void)setMetadataItemFilter:(id)arg1 ;
-(long long)fileLengthLimit;
-(void)setFileLengthLimit:(long long)arg1 ;
-(BOOL)canPerformMultiplePassesOverSourceMediaData;
-(void)setCanPerformMultiplePassesOverSourceMediaData:(BOOL)arg1 ;
@end

