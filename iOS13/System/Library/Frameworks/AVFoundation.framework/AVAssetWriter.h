/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVWeakObservable.h>
#import <AVFoundation/AVKeyPathDependencyHost.h>

@class AVAssetWriterInternal, AVAssetWriterHelper, NSURL, NSString, NSArray, NSError;

@interface AVAssetWriter : NSObject <AVWeakObservable, AVKeyPathDependencyHost> {

	AVAssetWriterInternal* _internal;

}

@property (getter=_helper,retain,readonly) AVAssetWriterHelper * helper; 
@property (__weak) id<AVAssetWriterDelegate> delegate; 
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
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)_errorForOSStatus:(int)arg1 ;
+(id)assetWriterWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id<AVAssetWriterDelegate>)delegate;
-(void)setDelegate:(id<AVAssetWriterDelegate>)arg1 ;
-(NSError *)error;
-(id)_helper;
-(long long)status;
-(BOOL)finishWriting;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSArray *)metadata;
-(NSArray *)inputs;
-(void)flush;
-(NSURL *)outputURL;
-(CGAffineTransform)preferredTransform;
-(BOOL)canAddInput:(id)arg1 ;
-(void)addInput:(id)arg1 ;
-(SCD_Struct_AV7)overallDurationHint;
-(id)initWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3 ;
-(BOOL)startWriting;
-(void)startSessionAtSourceTime:(SCD_Struct_AV7)arg1 ;
-(void)finishWritingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(float)preferredRate;
-(float)preferredVolume;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
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
-(id)inputGroups;
-(id)finishWritingDelegate;
-(BOOL)_initInternalObject;
-(NSString *)outputFileType;
-(BOOL)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(NSArray *)availableMediaTypes;
-(BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 ;
-(BOOL)canAddInputGroup:(id)arg1 ;
-(void)addInputGroup:(id)arg1 ;
-(void)endSessionAtSourceTime:(SCD_Struct_AV7)arg1 ;
-(void)cancelWriting;
-(id)initWithFileType:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 ;
-(BOOL)_supportsSampleReferencesReturningError:(id*)arg1 ;
-(void)setWritesSinglePassUsingPredeterminedFileSize:(long long)arg1 mediaDataSize:(long long)arg2 ;
-(void)setFinishWritingDelegate:(id)arg1 ;
-(void)_transitionToFailedStatusWithError:(id)arg1 ;
@end

