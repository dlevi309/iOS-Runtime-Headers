/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
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
@property (assign,nonatomic) SCD_Struct_AV7 preferredMediaChunkDuration; 
@property (assign,nonatomic) long long preferredMediaChunkAlignment; 
@property (assign,nonatomic) long long preferredMediaChunkSize; 
@property (nonatomic,copy) NSString * mediaDataLocation; 
@property (nonatomic,copy) NSURL * sampleReferenceBaseURL; 
@property (assign,nonatomic) BOOL maximizePowerEfficiency; 
@property (nonatomic,copy) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
-(void)dealloc;
-(id)description;
-(NSString *)languageCode;
-(CGAffineTransform)transform;
-(long long)status;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSArray *)metadata;
-(int)trackID;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(NSString *)mediaType;
-(long long)layer;
-(AVOutputSettings *)outputSettings;
-(void)setLayer:(long long)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(CGSize)naturalSize;
-(NSString *)extendedLanguageTag;
-(BOOL)isReadyForMoreMediaData;
-(void)stopRequestingMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setExpectsMediaDataInRealTime:(BOOL)arg1 ;
-(void)markAsFinished;
-(void)setExtendedLanguageTag:(NSString *)arg1 ;
-(float)preferredVolume;
-(NSDictionary *)trackReferences;
-(short)alternateGroupID;
-(short)provisionalAlternateGroupID;
-(id)availableTrackAssociationTypes;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setAlternateGroupID:(short)arg1 ;
-(BOOL)maximizePowerEfficiency;
-(void)setMaximizePowerEfficiency:(BOOL)arg1 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(AVAssetWriterInputConfigurationState *)configurationState;
-(opaqueCMFormatDescriptionRef)sourceFormatHint;
-(void)setMarksOutputTrackAsEnabled:(BOOL)arg1 ;
-(BOOL)expectsMediaDataInRealTime;
-(BOOL)marksOutputTrackAsEnabled;
-(NSDictionary *)sourcePixelBufferAttributes;
-(void)setSourcePixelBufferAttributes:(NSDictionary *)arg1 ;
-(int)mediaTimeScale;
-(void)setMediaTimeScale:(int)arg1 ;
-(void)setProvisionalAlternateGroupID:(short)arg1 ;
-(BOOL)performsMultiPassEncodingIfSupported;
-(void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg1 ;
-(SCD_Struct_AV7)preferredMediaChunkDuration;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_AV7)arg1 ;
-(long long)preferredMediaChunkAlignment;
-(void)setPreferredMediaChunkAlignment:(long long)arg1 ;
-(long long)preferredMediaChunkSize;
-(void)setPreferredMediaChunkSize:(long long)arg1 ;
-(NSString *)mediaDataLocation;
-(void)setMediaDataLocation:(NSString *)arg1 ;
-(NSURL *)sampleReferenceBaseURL;
-(void)setSampleReferenceBaseURL:(NSURL *)arg1 ;
-(void)setWeakReferenceToAssetWriterInput:(AVWeakReference *)arg1 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(void)didStartInitialSession;
-(void)prepareToEndSession;
-(BOOL)prepareToFinishWritingReturningError:(id*)arg1 ;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1 ;
-(BOOL)canPerformMultiplePasses;
-(AVAssetWriterInputPassDescription *)currentPassDescription;
-(BOOL)canStartRespondingToEachPassDescriptionReturningReason:(id*)arg1 ;
-(BOOL)shouldRespondToInitialPassDescription;
-(long long)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_AV7)arg2 ;
-(void)markCurrentPassAsFinished;
-(BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(id)associatedInputsWithTrackAssociationType:(id)arg1 ;
-(AVWeakReference *)weakReferenceToAssetWriterInput;
-(void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)arg1 ;
@end

