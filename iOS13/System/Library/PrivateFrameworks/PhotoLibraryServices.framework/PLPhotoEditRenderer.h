/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)updateCompositionController:(id)arg1 fromPortraitMetadata:(id)arg2 ;
+(id)compositionWithController:(id)arg1 source:(id)arg2 ;
+(id)compositionWithController:(id)arg1 source:(id)arg2 overcaptureSource:(id)arg3 ;
+(void)configureNeutrinoCacheDirectoryIfNeeded;
+(id)newImageDataFromCGImage:(CGImageRef)arg1 withCompressionQuality:(double)arg2 metadataSourceImageURL:(id)arg3 preserveRegionsInMetadata:(BOOL)arg4 ;
+(BOOL)currentDeviceShouldAllowLocalLight;
+(void)updateComposition:(id)arg1 fromPortraitMetadata:(id)arg2 ;
-(NUComposition *)composition;
-(void)generateJPEGImageDataWithCompressionQuality:(double)arg1 livePhotoPairingIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCompositionController:(PICompositionController *)arg1 ;
-(id)initWithEditSource:(id)arg1 overcaptureEditSource:(id)arg2 ;
-(id)initWithEditSource:(id)arg1 overcaptureEditSource:(id)arg2 renderPriority:(long long)arg3 ;
-(id)newExporter;
-(id)newImageExporterOptions;
-(id)newVideoExporterOptions;
-(id)exportVideoToURL:(id)arg1 preset:(id)arg2 livePhotoPairingIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(PICompositionController *)compositionController;
-(void)renderImageWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)renderImageWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 renderMode:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)renderImageWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 renderMode:(long long)arg3 renderTime:(SCD_Struct_PL14)arg4 completion:(/*^block*/id)arg5 ;
-(void)renderVideoWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSmartFiltersCubeSize:(long long)arg1 ;
-(double)_smartToneLevelWithAttributeKey:(id)arg1 settingKey:(id)arg2 ;
-(double)smartToneBaseBrightness;
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
-(double)smartBWBaseNeutralGamma;
-(double)smartBWBaseTone;
-(double)smartBWBaseHue;
-(double)smartBWBaseGrain;
-(id)_smartToneAdjustments;
-(id)_smartColorAdjustments;
-(id)_smartBWAdjustments;
-(void)calculateLongExposureFusionParametersWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)getGeometryForComposition:(id)arg1 ;
-(void)applySourceChangesToCompositionController:(id)arg1 source:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(PLEditSource *)editSource;
-(PLEditSource *)overcaptureEditSource;
-(void)setOvercaptureEditSource:(PLEditSource *)arg1 ;
-(long long)smartFiltersCubeSize;
@end

