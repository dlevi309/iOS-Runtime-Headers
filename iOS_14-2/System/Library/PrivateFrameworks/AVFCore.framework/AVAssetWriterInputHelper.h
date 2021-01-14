/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetWriterInputConfigurationState, AVWeakReference, NSString, AVOutputSettings, NSArray, NSDictionary, AVAssetWriterInputPassDescription, NSURL;

@interface AVAssetWriterInputHelper : NSObject {

	AVAssetWriterInputConfigurationState* _configurationState;
	AVWeakReference* _weakReferenceToAssetWriterInput;

}

@property (nonatomic,readonly) AVAssetWriterInputConfigurationState * configurationState;               //@synthesize configurationState=_configurationState - In the implementation block
@property (retain) AVWeakReference * weakReferenceToAssetWriterInput;                                   //@synthesize weakReferenceToAssetWriterInput=_weakReferenceToAssetWriterInput - In the implementation block
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) int trackID; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) AVOutputSettings * outputSettings; 
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef sourceFormatHint; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (nonatomic,copy) NSArray * metadata; 
@property (assign,nonatomic) int mediaTimeScale; 
@property (getter=isReadyForMoreMediaData,nonatomic,readonly) BOOL readyForMoreMediaData; 
@property (assign,nonatomic) BOOL expectsMediaDataInRealTime; 
@property (assign,nonatomic) CGSize naturalSize; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSString * extendedLanguageTag; 
@property (assign,nonatomic) BOOL marksOutputTrackAsEnabled; 
@property (assign,nonatomic) float preferredVolume; 
@property (assign,nonatomic) long long layer; 
@property (assign,nonatomic) short alternateGroupID; 
@property (assign,nonatomic) short provisionalAlternateGroupID; 
@property (nonatomic,readonly) NSDictionary * trackReferences; 
@property (assign,nonatomic) BOOL performsMultiPassEncodingIfSupported; 
@property (nonatomic,readonly) BOOL canPerformMultiplePasses; 
@property (nonatomic,readonly) AVAssetWriterInputPassDescription * currentPassDescription; 
@property (nonatomic,readonly) BOOL shouldRespondToInitialPassDescription; 
@property (assign,nonatomic) SCD_Struct_AV6 preferredMediaChunkDuration; 
@property (assign,nonatomic) long long preferredMediaChunkAlignment; 
@property (assign,nonatomic) long long preferredMediaChunkSize; 
@property (nonatomic,copy) NSString * mediaDataLocation; 
@property (nonatomic,copy) NSURL * sampleReferenceBaseURL; 
@property (assign,nonatomic) BOOL maximizePowerEfficiency; 
@property (nonatomic,copy) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
-(void)markCurrentPassAsFinished;
-(void)markAsFinished;
-(AVAssetWriterInputPassDescription *)currentPassDescription;
-(void)stopRequestingMediaData;
-(BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(void)setMaximizePowerEfficiency:(BOOL)arg1 ;
-(opaqueCMFormatDescriptionRef)sourceFormatHint;
-(NSDictionary *)trackReferences;
-(void)setLanguageCode:(NSString *)arg1 ;
-(long long)layer;
-(void)setMediaDataLocation:(NSString *)arg1 ;
-(void)setPreferredMediaChunkSize:(long long)arg1 ;
-(CGSize)naturalSize;
-(void)setSampleReferenceBaseURL:(NSURL *)arg1 ;
-(NSString *)mediaType;
-(void)setAlternateGroupID:(short)arg1 ;
-(void)setExtendedLanguageTag:(NSString *)arg1 ;
-(float)preferredVolume;
-(void)setWeakReferenceToAssetWriterInput:(AVWeakReference *)arg1 ;
-(BOOL)shouldRespondToInitialPassDescription;
-(AVWeakReference *)weakReferenceToAssetWriterInput;
-(void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)arg1 ;
-(long long)preferredMediaChunkAlignment;
-(void)setPreferredMediaChunkAlignment:(long long)arg1 ;
-(NSString *)mediaDataLocation;
-(void)setMarksOutputTrackAsEnabled:(BOOL)arg1 ;
-(void)setProvisionalAlternateGroupID:(short)arg1 ;
-(int)mediaTimeScale;
-(BOOL)marksOutputTrackAsEnabled;
-(void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(void)setSourcePixelBufferAttributes:(NSDictionary *)arg1 ;
-(NSString *)languageCode;
-(int)trackID;
-(void)setExpectsMediaDataInRealTime:(BOOL)arg1 ;
-(short)alternateGroupID;
-(BOOL)isReadyForMoreMediaData;
-(long long)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(SCD_Struct_AV6)preferredMediaChunkDuration;
-(void)setNaturalSize:(CGSize)arg1 ;
-(BOOL)performsMultiPassEncodingIfSupported;
-(void)setMetadata:(NSArray *)arg1 ;
-(BOOL)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_AV6)arg2 ;
-(void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(NSURL *)sampleReferenceBaseURL;
-(CGAffineTransform)transform;
-(id)associatedInputsWithTrackAssociationType:(id)arg1 ;
-(BOOL)expectsMediaDataInRealTime;
-(long long)preferredMediaChunkSize;
-(AVOutputSettings *)outputSettings;
-(void)setLayer:(long long)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)didStartInitialSession;
-(id)description;
-(NSString *)extendedLanguageTag;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_AV6)arg1 ;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)maximizePowerEfficiency;
-(NSDictionary *)sourcePixelBufferAttributes;
-(BOOL)prepareToFinishWritingReturningError:(id*)arg1 ;
-(void)setMediaTimeScale:(int)arg1 ;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1 ;
-(BOOL)canStartRespondingToEachPassDescriptionReturningReason:(id*)arg1 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(AVAssetWriterInputConfigurationState *)configurationState;
-(BOOL)canPerformMultiplePasses;
-(void)prepareToEndSession;
-(NSArray *)metadata;
-(long long)status;
-(void)dealloc;
-(id)availableTrackAssociationTypes;
-(short)provisionalAlternateGroupID;
-(id)initWithConfigurationState:(id)arg1 ;
@end

