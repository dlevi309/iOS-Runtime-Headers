/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetWriterConfigurationState, AVWeakReference, NSURL, AVMediaFileType, NSArray, NSError;

@interface AVAssetWriterHelper : NSObject {

	AVAssetWriterConfigurationState* _configurationState;
	AVWeakReference* _weakReferenceToAssetWriter;

}

@property (nonatomic,readonly) AVAssetWriterConfigurationState * configurationState;              //@synthesize configurationState=_configurationState - In the implementation block
@property (retain) AVWeakReference * weakReferenceToAssetWriter;                                  //@synthesize weakReferenceToAssetWriter=_weakReferenceToAssetWriter - In the implementation block
@property (nonatomic,readonly) NSURL * outputURL; 
@property (nonatomic,readonly) AVMediaFileType * mediaFileType; 
@property (nonatomic,readonly) NSArray * availableMediaTypes; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (__weak) id<AVAssetWriterDelegate> delegate; 
@property (assign,nonatomic) SCD_Struct_AV7 movieFragmentInterval; 
@property (assign,nonatomic) SCD_Struct_AV7 overallDurationHint; 
@property (assign,nonatomic) BOOL shouldOptimizeForNetworkUse; 
@property (nonatomic,copy) NSURL * directoryForTemporaryFiles; 
@property (assign,nonatomic) int movieTimeScale; 
@property (nonatomic,copy) NSArray * metadata; 
@property (assign,nonatomic) CGAffineTransform preferredTransform; 
@property (assign,nonatomic) float preferredVolume; 
@property (assign,nonatomic) float preferredRate; 
@property (assign,nonatomic) long long singlePassFileSize; 
@property (assign,nonatomic) long long singlePassMediaDataSize; 
@property (nonatomic,readonly) NSArray * inputs; 
@property (nonatomic,readonly) NSArray * inputGroups; 
-(id)init;
-(void)dealloc;
-(id<AVAssetWriterDelegate>)delegate;
-(void)setDelegate:(id<AVAssetWriterDelegate>)arg1 ;
-(NSError *)error;
-(long long)status;
-(void)finishWriting;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSArray *)metadata;
-(NSArray *)inputs;
-(void)flush;
-(NSURL *)outputURL;
-(CGAffineTransform)preferredTransform;
-(BOOL)canAddInput:(id)arg1 ;
-(void)addInput:(id)arg1 ;
-(SCD_Struct_AV7)overallDurationHint;
-(void)startWriting;
-(void)startSessionAtSourceTime:(SCD_Struct_AV7)arg1 ;
-(void)finishWritingWithCompletionHandler:(/*^block*/id)arg1 ;
-(float)preferredRate;
-(float)preferredVolume;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(AVMediaFileType *)mediaFileType;
-(SCD_Struct_AV7)movieFragmentInterval;
-(void)setMovieFragmentInterval:(SCD_Struct_AV7)arg1 ;
-(void)setOverallDurationHint:(SCD_Struct_AV7)arg1 ;
-(BOOL)shouldOptimizeForNetworkUse;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
-(NSURL *)directoryForTemporaryFiles;
-(void)setDirectoryForTemporaryFiles:(NSURL *)arg1 ;
-(int)movieTimeScale;
-(void)setMovieTimeScale:(int)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(long long)singlePassFileSize;
-(void)setSinglePassFileSize:(long long)arg1 ;
-(long long)singlePassMediaDataSize;
-(void)setSinglePassMediaDataSize:(long long)arg1 ;
-(NSArray *)inputGroups;
-(void)setWeakReferenceToAssetWriter:(AVWeakReference *)arg1 ;
-(NSArray *)availableMediaTypes;
-(BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 ;
-(BOOL)canAddInputGroup:(id)arg1 ;
-(void)addInputGroup:(id)arg1 ;
-(void)endSessionAtSourceTime:(SCD_Struct_AV7)arg1 ;
-(void)cancelWriting;
-(void)transitionToFailedStatusWithError:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(AVAssetWriterConfigurationState *)configurationState;
-(BOOL)_canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 sourceFormat:(opaqueCMFormatDescriptionRef)arg3 exceptionReason:(id*)arg4 ;
-(BOOL)_canApplyTrackReferences:(id)arg1 exceptionReason:(id*)arg2 ;
-(AVWeakReference *)weakReferenceToAssetWriter;
-(BOOL)_transitionToClientInitiatedTerminalStatus:(long long)arg1 ;
@end

