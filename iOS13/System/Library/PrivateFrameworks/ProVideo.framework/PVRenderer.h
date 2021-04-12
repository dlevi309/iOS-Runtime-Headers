/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVRendererBase.h>

@class PVRenderEffectLoader, NSDate;

@interface PVRenderer : PVRendererBase {

	HGSynchronizable* _cvPoolsLock;
	vector<HGRef<PVCVPixelBufferPool>, std::__1::allocator<HGRef<PVCVPixelBufferPool> > >* _cvPools;
	BOOL _enableDestinationPool;
	HGRef<HGCVPixelBufferPool>* _destinationBufferPool;
	HGRef<PVRenderManager>* _renderManager;
	PVRenderEffectLoader* _effectLoader;
	unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock> >* _dateLock;
	NSDate* _lastStatsLogDateTime;
	NSDate* _lastTextureCacheFlushDate;

}
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(SCD_Struct_PV20)frameDuration;
-(void)startRenderRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)renderJobFinished:(HGRef<PVRenderJob>*)arg1 ;
-(void)cleanupMemoryCaches;
-(void)_configureDefaultPoolPolicy;
-(void)_configureWorkingColorSpace;
-(void)_statsLogCheck;
-(HGRef<HGCVPixelBuffer>*)hgCVPixelBufferFromCVPoolForSize:(CGSize)arg1 withFormat:(unsigned)arg2 ;
-(void)loadInstructionGraphEffects:(id)arg1 ;
-(unsigned)outputCVPixelBufferFormat;
-(HGRef<HGBitmap>*)getDestinationBuffer:(CGSize)arg1 cvPixelBufferFormat:(unsigned)arg2 ;
@end

