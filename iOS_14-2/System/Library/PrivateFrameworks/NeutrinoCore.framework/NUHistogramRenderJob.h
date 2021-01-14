/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)cacheKey;
-(BOOL)complete:(out id*)arg1 ;
-(BOOL)render:(out id*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)result;
-(void)cleanUp;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithHistogramRequest:(id)arg1 ;
-(id)histogramRequest;
@end

