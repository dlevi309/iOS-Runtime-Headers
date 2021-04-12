/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVWeakObservable.h>
#import <AVFoundation/AVKeyPathDependencyHost.h>

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
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)languageCode;
-(CGAffineTransform)transform;
-(long long)_status;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_helper;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSArray *)metadata;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(NSString *)mediaType;
-(long long)layer;
-(NSDictionary *)outputSettings;
-(void)setLayer:(long long)arg1 ;
-(void)setLanguageCode:(id)arg1 ;
-(CGSize)naturalSize;
-(id)extendedLanguageTag;
-(BOOL)isReadyForMoreMediaData;
-(void)stopRequestingMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(opaqueCMFormatDescriptionRef)arg3 ;
-(void)setExpectsMediaDataInRealTime:(BOOL)arg1 ;
-(BOOL)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)markAsFinished;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(float)preferredVolume;
-(BOOL)_isAttachedToAdaptor;
-(void)_setAttachedAdaptor:(id)arg1 ;
-(id)_trackReferences;
-(id)availableTrackAssociationTypes;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(BOOL)maximizePowerEfficiency;
-(void)setMaximizePowerEfficiency:(BOOL)arg1 ;
-(id)_attachedAdaptor;
-(id)_outputSettingsObject;
-(const opaqueCMFormatDescriptionRef)sourceFormatHint;
-(void)_setWeakReferenceToAssetWriter:(id)arg1 ;
-(void)setMarksOutputTrackAsEnabled:(BOOL)arg1 ;
-(void)_setAlternateGroupID:(short)arg1 ;
-(void)_setProvisionalAlternateGroupID:(short)arg1 ;
-(short)_alternateGroupID;
-(BOOL)expectsMediaDataInRealTime;
-(BOOL)_prepareForWritingWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 mediaFileType:(id)arg2 error:(id*)arg3 ;
-(int)outputTrackID;
-(void)_didStartInitialSession;
-(void)_prepareToEndSession;
-(BOOL)_prepareToFinishWritingReturningError:(id*)arg1 ;
-(void)_transitionToTerminalStatus:(long long)arg1 ;
-(id)_weakReferenceToAssetWriter;
-(BOOL)marksOutputTrackAsEnabled;
-(int)mediaTimeScale;
-(void)setMediaTimeScale:(int)arg1 ;
-(BOOL)performsMultiPassEncodingIfSupported;
-(void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg1 ;
-(SCD_Struct_AV7)preferredMediaChunkDuration;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_AV7)arg1 ;
-(long long)preferredMediaChunkAlignment;
-(void)setPreferredMediaChunkAlignment:(long long)arg1 ;
-(long long)preferredMediaChunkSize;
-(void)setPreferredMediaChunkSize:(long long)arg1 ;
-(id)mediaDataLocation;
-(void)setMediaDataLocation:(id)arg1 ;
-(id)sampleReferenceBaseURL;
-(void)setSampleReferenceBaseURL:(id)arg1 ;
-(id)_sourcePixelBufferAttributes;
-(short)_provisionalAlternateGroupID;
-(long long)numberOfAppendFailures;
-(id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 ;
-(void)_setHelper:(id)arg1 ;
-(BOOL)canPerformMultiplePasses;
-(id)currentPassDescription;
-(long long)_appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1 ;
-(void)markCurrentPassAsFinished;
-(BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(id)associatedInputsWithTrackAssociationType:(id)arg1 ;
-(BOOL)writesMediaDataToBeginningOfFile;
-(void)setWritesMediaDataToBeginningOfFile:(BOOL)arg1 ;
-(CVPixelBufferPoolRef)_pixelBufferPool;
-(void)_setSourcePixelBufferAttributes:(id)arg1 ;
-(void)respondToEachPassDescriptionOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_AV7)arg2 ;
-(BOOL)_markAsFinishedCalled;
@end

