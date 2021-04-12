/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderJob.h>

@protocol NUPurgeableStorage, NUMutablePurgeableImage, NUPurgeableImage;
@class NUPurgeableImageAccessGuard, NUPurgeableStoragePool, NURegion, CIRenderTask, NUImageAccumulationNode;

@interface NUImageRenderJob : NURenderJob {

	NUPurgeableImageAccessGuard* _accessRegionGuard;
	NUPurgeableStoragePool* _storagePool;
	id<NUPurgeableStorage> _renderDestination;
	NURegion* _regionToRender;
	id<NUMutablePurgeableImage> _targetImage;
	NURegion* _renderedRegion;
	id<NUPurgeableImage> _renderedImage;
	CIRenderTask* _renderTask;

}

@property (nonatomic,readonly) NURegion * regionToRender;                                    //@synthesize regionToRender=_regionToRender - In the implementation block
@property (nonatomic,readonly) id<NUMutablePurgeableImage> targetImage;                      //@synthesize targetImage=_targetImage - In the implementation block
@property (nonatomic,readonly) NURegion * renderedRegion;                                    //@synthesize renderedRegion=_renderedRegion - In the implementation block
@property (nonatomic,readonly) id<NUPurgeableImage> renderedImage;                           //@synthesize renderedImage=_renderedImage - In the implementation block
@property (nonatomic,readonly) NUImageAccumulationNode * imageAccumulationNode; 
@property (nonatomic,retain) CIRenderTask * renderTask;                                      //@synthesize renderTask=_renderTask - In the implementation block
-(id<NUPurgeableImage>)renderedImage;
-(id<NUMutablePurgeableImage>)targetImage;
-(BOOL)complete:(out id*)arg1 ;
-(id)imageRequest;
-(BOOL)render:(out id*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)cleanUp;
-(BOOL)prepare:(out id*)arg1 ;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithImageRequest:(id)arg1 ;
-(id)imageAccumulationNodeWithImageSize:(SCD_Struct_NU7)arg1 tileSize:(SCD_Struct_NU7)arg2 borderSize:(SCD_Struct_NU7)arg3 format:(id)arg4 colorSpace:(id)arg5 ;
-(id)extentPolicy;
-(NUImageAccumulationNode *)imageAccumulationNode;
-(BOOL)copyStorage:(id)arg1 fromRect:(SCD_Struct_NU8)arg2 toImage:(id)arg3 atPoint:(SCD_Struct_NU7)arg4 ;
-(NURegion *)regionToRender;
-(NURegion *)renderedRegion;
-(CIRenderTask *)renderTask;
-(void)setRenderTask:(CIRenderTask *)arg1 ;
@end

