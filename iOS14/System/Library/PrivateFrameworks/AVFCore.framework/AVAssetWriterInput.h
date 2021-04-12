/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVWeakObservable.h>
#import <AVFCore/AVKeyPathDependencyHost.h>

@class AVAssetWriterInputInternal, AVAssetWriterInputHelper, NSDictionary, AVOutputSettings, AVWeakReference, NSString, NSArray;

@interface AVAssetWriterInput : NSObject <AVWeakObservable, AVKeyPathDependencyHost> {

	AVAssetWriterInputInternal* _internal;

}

@property (readonly) long long numberOfAppendFailures; 
@property (getter=_markAsFinishedCalled,readonly) BOOL markAsFinishedCalled; 
@property (setter=_setHelper:,getter=_helper,nonatomic,retain) AVAssetWriterInputHelper * helper; 
@property (setter=_setSourcePixelBufferAttributes:,getter=_sourcePixelBufferAttributes,nonatomic,copy) NSDictionary * sourcePixelBufferAttributes; 
@property (getter=_pixelBufferPool,nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
@property (getter=_outputSettingsObject,nonatomic,readonly) AVOutputSettings * outputSettingsObject; 
@property (getter=_status,nonatomic,readonly) long long status; 
@property (getter=_isAttachedToAdaptor,nonatomic,readonly) BOOL attachedToAdaptor; 
@property (setter=_setWeakReferenceToAssetWriter:,getter=_weakReferenceToAssetWriter,nonatomic,retain) AVWeakReference * weakReferenceToAssetWriter; 
@property (assign,setter=_setAlternateGroupID:,getter=_alternateGroupID,nonatomic) short alternateGroupID; 
@property (assign,setter=_setProvisionalAlternateGroupID:,getter=_provisionalAlternateGroupID,nonatomic) short provisionalAlternateGroupID; 
@property (getter=_trackReferences,nonatomic,readonly) NSDictionary * trackReferences; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSDictionary * outputSettings; 
@property (nonatomic,readonly) const opaqueCMFormatDescriptionRef sourceFormatHint; 
@property (nonatomic,copy) NSArray * metadata; 
@property (getter=isReadyForMoreMediaData,nonatomic,readonly) BOOL readyForMoreMediaData; 
@property (assign,nonatomic) BOOL expectsMediaDataInRealTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 ;
+(id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(opaqueCMFormatDescriptionRef)arg3 ;
-(void)markCurrentPassAsFinished;
-(void)markAsFinished;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(id)currentPassDescription;
-(void)stopRequestingMediaData;
-(BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(void)setMaximizePowerEfficiency:(BOOL)arg1 ;
-(const opaqueCMFormatDescriptionRef)sourceFormatHint;
-(void)_setHelper:(id)arg1 ;
-(void)setLanguageCode:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_sourcePixelBufferAttributes;
-(long long)layer;
-(void)setMediaDataLocation:(id)arg1 ;
-(void)setPreferredMediaChunkSize:(long long)arg1 ;
-(id)_weakReferenceToAssetWriter;
-(CGSize)naturalSize;
-(void)setSampleReferenceBaseURL:(id)arg1 ;
-(void)_setAttachedAdaptor:(id)arg1 ;
-(NSString *)mediaType;
-(id)init;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(opaqueCMFormatDescriptionRef)arg3 ;
-(float)preferredVolume;
-(long long)preferredMediaChunkAlignment;
-(long long)numberOfAppendFailures;
-(void)_setProvisionalAlternateGroupID:(short)arg1 ;
-(void)setPreferredMediaChunkAlignment:(long long)arg1 ;
-(id)mediaDataLocation;
-(id)_trackReferences;
-(void)_transitionToTerminalStatus:(long long)arg1 ;
-(void)setMarksOutputTrackAsEnabled:(BOOL)arg1 ;
-(void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1 ;
-(int)mediaTimeScale;
-(BOOL)marksOutputTrackAsEnabled;
-(void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(id)languageCode;
-(void)_prepareToEndSession;
-(BOOL)_prepareForWritingWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 mediaFileType:(id)arg2 error:(id*)arg3 ;
-(void)setExpectsMediaDataInRealTime:(BOOL)arg1 ;
-(CVPixelBufferPoolRef)_pixelBufferPool;
-(BOOL)isReadyForMoreMediaData;
-(SCD_Struct_AV6)preferredMediaChunkDuration;
-(void)setNaturalSize:(CGSize)arg1 ;
-(BOOL)performsMultiPassEncodingIfSupported;
-(void)setMetadata:(NSArray *)arg1 ;
-(void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)_setWeakReferenceToAssetWriter:(id)arg1 ;
-(id)sampleReferenceBaseURL;
-(void)setWritesMediaDataToBeginningOfFile:(BOOL)arg1 ;
-(CGAffineTransform)transform;
-(id)associatedInputsWithTrackAssociationType:(id)arg1 ;
-(BOOL)expectsMediaDataInRealTime;
-(long long)preferredMediaChunkSize;
-(NSDictionary *)outputSettings;
-(void)setLayer:(long long)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(NSString *)description;
-(id)extendedLanguageTag;
-(BOOL)_appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_AV6)arg2 ;
-(void)_didStartInitialSession;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_AV6)arg1 ;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)maximizePowerEfficiency;
-(short)_alternateGroupID;
-(void)setMediaTimeScale:(int)arg1 ;
-(short)_provisionalAlternateGroupID;
-(BOOL)_markAsFinishedCalled;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(void)_setAlternateGroupID:(short)arg1 ;
-(void)respondToEachPassDescriptionOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)_status;
-(BOOL)_prepareToFinishWritingReturningError:(id*)arg1 ;
-(id)_outputSettingsObject;
-(BOOL)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_setSourcePixelBufferAttributes:(id)arg1 ;
-(BOOL)canPerformMultiplePasses;
-(id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 ;
-(id)_helper;
-(BOOL)writesMediaDataToBeginningOfFile;
-(NSArray *)metadata;
-(int)outputTrackID;
-(long long)_appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)_isAttachedToAdaptor;
-(id)_attachedAdaptor;
-(void)dealloc;
-(id)availableTrackAssociationTypes;
@end

