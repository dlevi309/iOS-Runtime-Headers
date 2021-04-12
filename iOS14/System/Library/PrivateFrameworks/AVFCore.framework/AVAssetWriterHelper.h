/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetWriterConfigurationState, AVWeakReference, NSURL, AVMediaFileType, NSArray, NSError, NSString;

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
@property (assign,nonatomic) SCD_Struct_AV6 movieFragmentInterval; 
@property (assign,nonatomic) SCD_Struct_AV6 overallDurationHint; 
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
@property (assign,nonatomic) SCD_Struct_AV6 preferredOutputSegmentInterval; 
@property (assign,nonatomic) SCD_Struct_AV6 initialSegmentStartTime; 
@property (nonatomic,copy) NSString * outputFileTypeProfile; 
@property (assign,nonatomic) long long initialMovieFragmentSequenceNumber; 
@property (assign,nonatomic) BOOL producesCombinableFragments; 
-(SCD_Struct_AV6)overallDurationHint;
-(void)flush;
-(void)setWeakReferenceToAssetWriter:(AVWeakReference *)arg1 ;
-(NSArray *)availableMediaTypes;
-(BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 ;
-(long long)singlePassMediaDataSize;
-(void)transitionToFailedStatusWithError:(id)arg1 ;
-(id)init;
-(BOOL)_canApplyTrackReferences:(id)arg1 exceptionReason:(id*)arg2 ;
-(BOOL)_canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 sourceFormat:(opaqueCMFormatDescriptionRef)arg3 exceptionReason:(id*)arg4 ;
-(AVWeakReference *)weakReferenceToAssetWriter;
-(BOOL)_transitionToClientInitiatedTerminalStatus:(long long)arg1 ;
-(float)preferredVolume;
-(id<AVAssetWriterDelegate>)delegate;
-(BOOL)shouldOptimizeForNetworkUse;
-(void)finishWritingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
-(int)movieTimeScale;
-(SCD_Struct_AV6)preferredOutputSegmentInterval;
-(CGAffineTransform)preferredTransform;
-(void)addInputGroup:(id)arg1 ;
-(float)preferredRate;
-(void)setOutputFileTypeProfile:(NSString *)arg1 ;
-(AVMediaFileType *)mediaFileType;
-(void)cancelWriting;
-(void)setProducesCombinableFragments:(BOOL)arg1 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSError *)error;
-(NSURL *)outputURL;
-(BOOL)canAddInputGroup:(id)arg1 ;
-(void)setDelegate:(id<AVAssetWriterDelegate>)arg1 ;
-(void)setDirectoryForTemporaryFiles:(NSURL *)arg1 ;
-(void)startSessionAtSourceTime:(SCD_Struct_AV6)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(BOOL)producesCombinableFragments;
-(void)endSessionAtSourceTime:(SCD_Struct_AV6)arg1 ;
-(void)setMovieTimeScale:(int)arg1 ;
-(void)finishWriting;
-(SCD_Struct_AV6)initialSegmentStartTime;
-(void)startWriting;
-(void)setOverallDurationHint:(SCD_Struct_AV6)arg1 ;
-(BOOL)canAddInput:(id)arg1 ;
-(void)setInitialMovieFragmentSequenceNumber:(long long)arg1 ;
-(void)flushSegment;
-(void)setInitialSegmentStartTime:(SCD_Struct_AV6)arg1 ;
-(NSArray *)inputGroups;
-(void)addInput:(id)arg1 ;
-(void)setSinglePassFileSize:(long long)arg1 ;
-(long long)singlePassFileSize;
-(void)setMovieFragmentInterval:(SCD_Struct_AV6)arg1 ;
-(AVAssetWriterConfigurationState *)configurationState;
-(NSString *)outputFileTypeProfile;
-(NSURL *)directoryForTemporaryFiles;
-(void)setPreferredRate:(float)arg1 ;
-(void)setPreferredOutputSegmentInterval:(SCD_Struct_AV6)arg1 ;
-(NSArray *)inputs;
-(SCD_Struct_AV6)movieFragmentInterval;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setSinglePassMediaDataSize:(long long)arg1 ;
-(NSArray *)metadata;
-(long long)initialMovieFragmentSequenceNumber;
-(long long)status;
-(void)dealloc;
-(id)initWithConfigurationState:(id)arg1 ;
@end

