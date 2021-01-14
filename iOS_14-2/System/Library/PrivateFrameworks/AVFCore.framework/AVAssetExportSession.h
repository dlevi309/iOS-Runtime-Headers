/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
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
+(id)allExportPresets;
+(id)exportPresetsCompatibleWithAsset:(id)arg1 ;
+(void)determineCompatibilityOfExportPreset:(id)arg1 withAsset:(id)arg2 outputFileType:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)exportSessionWithAsset:(id)arg1 presetName:(id)arg2 ;
+(long long)estimatedOutputFileLengthForPreset:(id)arg1 duration:(SCD_Struct_AV6)arg2 properties:(id)arg3 ;
+(id)keyPathsForValuesAffectingEstimatedOutputFileLength;
+(SCD_Struct_AV6)maximumDurationForPreset:(id)arg1 properties:(id)arg2 ;
-(void)setMaximizePowerEfficiency:(BOOL)arg1 ;
-(NSString *)presetName;
-(float)progress;
-(NSString *)outputFileType;
-(id)init;
-(SCD_Struct_AV6)maxDuration;
-(void)setTimeRange:(SCD_Struct_AV7)arg1 ;
-(BOOL)shouldOptimizeForNetworkUse;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
-(AVAsset *)asset;
-(void)cancelExport;
-(id)metadataItemFilter;
-(id)initWithAsset:(id)arg1 presetName:(id)arg2 ;
-(void)setOutputFileType:(NSString *)arg1 ;
-(void)estimateMaximumDurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)estimateOutputFileLengthWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)determineCompatibleFileTypesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)AVExportSessionExportAsynchronouslyCompletionHandler;
-(void)exportAsynchronouslyWithCompletionHandler:(/*^block*/id)arg1 ;
-(SCD_Struct_AV7)timeRange;
-(void)setMinVideoFrameDuration:(SCD_Struct_AV6)arg1 ;
-(SCD_Struct_AV6)minVideoFrameDuration;
-(void)setVideoFrameRateConversionAlgorithm:(id)arg1 ;
-(id)videoFrameRateConversionAlgorithm;
-(void)setPreserveSyncFrames:(BOOL)arg1 ;
-(BOOL)preserveSyncFrames;
-(void)setMetadataItemFilter:(id)arg1 ;
-(long long)estimatedOutputFileLength;
-(long long)fileLengthLimit;
-(void)setFileLengthLimit:(long long)arg1 ;
-(BOOL)canPerformMultiplePassesOverSourceMediaData;
-(void)setCanPerformMultiplePassesOverSourceMediaData:(BOOL)arg1 ;
-(id)supportedFileTypes;
-(void)setMetadata:(id)arg1 ;
-(NSError *)error;
-(NSURL *)outputURL;
-(id)audioMix;
-(void)setDirectoryForTemporaryFiles:(id)arg1 ;
-(id)description;
-(BOOL)maximizePowerEfficiency;
-(id)audioTimePitchAlgorithm;
-(void)setOutputURL:(NSURL *)arg1 ;
-(id)videoComposition;
-(void)setVideoComposition:(id)arg1 ;
-(id)customVideoCompositor;
-(id)directoryForTemporaryFiles;
-(void)setAudioTimePitchAlgorithm:(id)arg1 ;
-(void)setAudioMix:(id)arg1 ;
-(id)metadata;
-(long long)status;
-(void)dealloc;
@end

