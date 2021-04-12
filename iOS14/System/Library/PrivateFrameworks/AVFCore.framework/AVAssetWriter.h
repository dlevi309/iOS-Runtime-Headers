/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVWeakObservable.h>
#import <AVFCore/AVKeyPathDependencyHost.h>

@class AVAssetWriterInternal, AVAssetWriterHelper, NSURL, NSString, NSArray, NSError;

@interface AVAssetWriter : NSObject <AVWeakObservable, AVKeyPathDependencyHost> {

	AVAssetWriterInternal* _internal;

}

@property (getter=_helper,retain,readonly) AVAssetWriterHelper * helper; 
@property (nonatomic,copy,readonly) NSURL * outputURL; 
@property (nonatomic,copy,readonly) NSString * outputFileType; 
@property (nonatomic,readonly) NSArray * availableMediaTypes; 
@property (readonly) long long status; 
@property (readonly) NSError * error; 
@property (nonatomic,copy) NSArray * metadata; 
@property (assign,nonatomic) BOOL shouldOptimizeForNetworkUse; 
@property (nonatomic,copy) NSURL * directoryForTemporaryFiles; 
@property (nonatomic,readonly) NSArray * inputs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_errorForOSStatus:(int)arg1 ;
+(id)assetWriterWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(SCD_Struct_AV6)overallDurationHint;
-(void)flush;
-(NSString *)outputFileType;
-(id)finishWritingDelegate;
-(id)initWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3 ;
-(BOOL)_initInternalObject;
-(BOOL)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(NSArray *)availableMediaTypes;
-(BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 ;
-(id)initWithContentType:(id)arg1 ;
-(id)initWithFileType:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 ;
-(BOOL)_supportsSampleReferencesReturningError:(id*)arg1 ;
-(id)init;
-(void)setWritesSinglePassUsingPredeterminedFileSize:(long long)arg1 mediaDataSize:(long long)arg2 ;
-(void)setFinishWritingDelegate:(id)arg1 ;
-(void)_transitionToFailedStatusWithError:(id)arg1 ;
-(float)preferredVolume;
-(id)delegate;
-(BOOL)shouldOptimizeForNetworkUse;
-(void)finishWritingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
-(int)movieTimeScale;
-(SCD_Struct_AV6)preferredOutputSegmentInterval;
-(CGAffineTransform)preferredTransform;
-(void)addInputGroup:(id)arg1 ;
-(float)preferredRate;
-(void)setOutputFileTypeProfile:(id)arg1 ;
-(void)cancelWriting;
-(void)setProducesCombinableFragments:(BOOL)arg1 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSError *)error;
-(NSURL *)outputURL;
-(BOOL)canAddInputGroup:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setDirectoryForTemporaryFiles:(NSURL *)arg1 ;
-(void)startSessionAtSourceTime:(SCD_Struct_AV6)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(BOOL)producesCombinableFragments;
-(void)endSessionAtSourceTime:(SCD_Struct_AV6)arg1 ;
-(void)setMovieTimeScale:(int)arg1 ;
-(NSString *)description;
-(BOOL)finishWriting;
-(SCD_Struct_AV6)initialSegmentStartTime;
-(BOOL)startWriting;
-(void)setOverallDurationHint:(SCD_Struct_AV6)arg1 ;
-(BOOL)canAddInput:(id)arg1 ;
-(void)setInitialMovieFragmentSequenceNumber:(long long)arg1 ;
-(void)flushSegment;
-(void)setInitialSegmentStartTime:(SCD_Struct_AV6)arg1 ;
-(id)inputGroups;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(void)addInput:(id)arg1 ;
-(void)setMovieFragmentInterval:(SCD_Struct_AV6)arg1 ;
-(id)outputFileTypeProfile;
-(NSURL *)directoryForTemporaryFiles;
-(void)setPreferredRate:(float)arg1 ;
-(void)setPreferredOutputSegmentInterval:(SCD_Struct_AV6)arg1 ;
-(NSArray *)inputs;
-(SCD_Struct_AV6)movieFragmentInterval;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(id)_helper;
-(NSArray *)metadata;
-(long long)initialMovieFragmentSequenceNumber;
-(long long)status;
-(void)dealloc;
@end

