/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	unsigned _destinationPixelFormat;

}
-(id)initWithOptions:(id)arg1 ;
-(SCD_Struct_PV22)frameDuration;
-(void)dealloc;
-(void)startRenderRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cleanupMemoryCaches;
-(void)renderJobFinished:(HGRef<PVRenderJob>*)arg1 ;
-(void)updateDestinationFormatForOutputColorSpace;
-(unsigned)outputCVPixelBufferFormat;
-(void)_configureDefaultPoolPolicy;
-(void)_statsLogCheck;
-(HGRef<HGCVPixelBuffer>*)hgCVPixelBufferFromCVPoolForSize:(CGSize)arg1 withFormat:(unsigned)arg2 ;
-(void)loadInstructionGraphEffects:(id)arg1 ;
-(HGRef<HGBitmap>*)getDestinationBuffer:(CGSize)arg1 cvPixelBufferFormat:(unsigned)arg2 ;
@end

