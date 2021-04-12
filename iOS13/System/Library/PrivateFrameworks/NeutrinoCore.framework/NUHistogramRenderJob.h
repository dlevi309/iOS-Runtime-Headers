/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderJob.h>

@protocol NUPurgeableStorage, NUScalePolicy;
@class NUPurgeableStoragePool, NUImageHistogram, CIRenderTask;

@interface NUHistogramRenderJob : NURenderJob {

	NUPurgeableStoragePool* _storagePool;
	id<NUPurgeableStorage> _renderDestination;
	NUImageHistogram* _histogram;
	CIRenderTask* _renderTask;
	id<NUScalePolicy> _scalePolicy;

}
-(id)result;
-(id)cacheKey;
-(BOOL)render:(out id*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)cleanUp;
-(BOOL)complete:(out id*)arg1 ;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithHistogramRequest:(id)arg1 ;
-(id)histogramRequest;
@end

