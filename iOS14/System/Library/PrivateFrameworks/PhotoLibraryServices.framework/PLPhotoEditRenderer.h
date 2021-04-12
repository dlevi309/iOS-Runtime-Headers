/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSDictionary, PICompositionController, NUPriority, NUBufferRenderClient, NURenderContext, PLEditSource, NUComposition;

@interface PLPhotoEditRenderer : NSObject {

	NSDictionary* __smartToneAdjustments;
	double _smartToneLevelInCachedAdjustments;
	NSDictionary* _smartToneStatisticsInCachedAdjustments;
	NSDictionary* __smartColorAdjustments;
	double _smartColorLevelInCachedAdjustments;
	NSDictionary* _smartColorStatisticsInCachedAdjustments;
	NSDictionary* __smartBWAdjustments;
	double _smartBWLevelInCachedAdjustments;
	PICompositionController* _compositionController;
	NUPriority* _priority;
	NUBufferRenderClient* _renderClient;
	NURenderContext* _videoRenderContext;
	NURenderContext* _geometryContext;
	NURenderContext* _smartToneAutoCalculatorContext;
	PLEditSource* _editSource;
	PLEditSource* _overcaptureEditSource;
	long long _smartFiltersCubeSize;

}

@property (nonatomic,retain,readonly) NUComposition * composition; 
@property (nonatomic,retain,readonly) PLEditSource * editSource;                           //@synthesize editSource=_editSource - In the implementation block
@property (nonatomic,retain) PLEditSource * overcaptureEditSource;                         //@synthesize overcaptureEditSource=_overcaptureEditSource - In the implementation block
@property (nonatomic,retain) PICompositionController * compositionController;              //@synthesize compositionController=_compositionController - In the implementation block
@property (assign,nonatomic) long long smartFiltersCubeSize;                               //@synthesize smartFiltersCubeSize=_smartFiltersCubeSize - In the implementation block
@property (nonatomic,readonly) double smartToneBaseBrightness; 
@property (nonatomic,readonly) double smartToneBaseContrast; 
@property (nonatomic,readonly) double smartToneBaseExposure; 
@property (nonatomic,readonly) double smartToneBaseHighlights; 
@property (nonatomic,readonly) double smartToneBaseShadows; 
@property (nonatomic,readonly) double smartToneBaseBlackPoint; 
@property (nonatomic,readonly) double smartToneBaseLocalLight; 
@property (nonatomic,readonly) double smartColorBaseContrast; 
@property (nonatomic,readonly) double smartColorBaseSaturation; 
@property (nonatomic,readonly) double smartColorBaseCast; 
@property (nonatomic,readonly) double smartBWBaseStrength; 
@property (nonatomic,readonly) double smartBWBaseNeutralGamma; 
@property (nonatomic,readonly) double smartBWBaseTone; 
@property (nonatomic,readonly) double smartBWBaseHue; 
@property (nonatomic,readonly) double smartBWBaseGrain; 
+(id)rendererForVideoURL:(id)arg1 overcaptureVideoURL:(id)arg2 livePhotoStillURL:(id)arg3 adjustmentData:(id)arg4 formatIdentifier:(id)arg5 formatVersion:(id)arg6 ;
+(void)updateCompositionController:(id)arg1 fromPortraitMetadata:(id)arg2 ;
+(id)compositionWithController:(id)arg1 source:(id)arg2 ;
+(id)compositionWithController:(id)arg1 source:(id)arg2 overcaptureSource:(id)arg3 ;
+(void)configureNeutrinoCacheDirectoryIfNeeded;
+(BOOL)currentDeviceShouldAllowLocalLight;
+(void)updateComposition:(id)arg1 fromPortraitMetadata:(id)arg2 ;
+(id)newImageDataFromCGImage:(CGImageRef)arg1 withCompressionQuality:(double)arg2 metadataSourceImageURL:(id)arg3 preserveRegionsInMetadata:(BOOL)arg4 ;
-(NUComposition *)composition;
-(void)cancelAllRenders;
-(void)renderVideoWithTargetSize:(CGSize)arg1 name:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithEditSource:(id)arg1 overcaptureEditSource:(id)arg2 renderPriority:(long long)arg3 ;
-(id)newExporter;
-(id)newImageExporterOptions;
-(id)newVideoExporterOptions;
-(id)exportVideoToURL:(id)arg1 preset:(id)arg2 livePhotoPairingIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(PICompositionController *)compositionController;
-(void)renderImageWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 name:(id)arg3 completion:(/*^block*/id)arg4 ;
-(double)_smartToneLevelWithAttributeKey:(id)arg1 settingKey:(id)arg2 ;
-(void)renderImageWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 renderMode:(long long)arg3 name:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)renderImageWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 renderMode:(long long)arg3 renderTime:(SCD_Struct_PL14)arg4 name:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)setSmartFiltersCubeSize:(long long)arg1 ;
-(double)smartToneBaseBrightness;
-(void)renderVideoWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 name:(id)arg3 completion:(/*^block*/id)arg4 ;
-(double)smartToneBaseContrast;
-(double)smartToneBaseExposure;
-(double)smartToneBaseHighlights;
-(double)smartToneBaseShadows;
-(double)smartToneBaseBlackPoint;
-(double)smartToneBaseLocalLight;
-(double)_smartColorLevelWithAttributeKey:(id)arg1 settingKey:(id)arg2 ;
-(double)smartColorBaseContrast;
-(double)smartColorBaseSaturation;
-(double)smartColorBaseCast;
-(double)_smartBWLevelWithAttributeKey:(id)arg1 settingKey:(id)arg2 ;
-(double)smartBWBaseStrength;
-(double)smartBWBaseTone;
-(double)smartBWBaseNeutralGamma;
-(double)smartBWBaseHue;
-(double)smartBWBaseGrain;
-(id)_smartToneAdjustments;
-(id)_smartColorAdjustments;
-(id)_smartBWAdjustments;
-(void)calculateLongExposureFusionParametersWithCompletionHandler:(/*^block*/id)arg1 ;
-(PLEditSource *)editSource;
-(id)getGeometryForComposition:(id)arg1 ;
-(id)getGeometryForComposition:(id)arg1 pipelineFilters:(id)arg2 ;
-(void)applySourceChangesToCompositionSynchronously:(id)arg1 source:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)setOvercaptureEditSource:(PLEditSource *)arg1 ;
-(long long)smartFiltersCubeSize;
-(void)applySourceChangesToCompositionAsynchronously:(id)arg1 source:(id)arg2 withBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)applySourceChangesToComposition:(id)arg1 source:(id)arg2 withBlock:(/*^block*/id)arg3 executeSynchronously:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(PLEditSource *)overcaptureEditSource;
-(void)setCompositionController:(PICompositionController *)arg1 ;
-(void)generateJPEGImageDataWithCompressionQuality:(double)arg1 livePhotoPairingIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithEditSource:(id)arg1 overcaptureEditSource:(id)arg2 ;
@end

