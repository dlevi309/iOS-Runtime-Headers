/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class PVVideoCompositingContext;

@interface PVCameraPreviewRenderer : NSObject {

	HGRef<PVRenderManager>* _renderManager;
	HGRef<HGRenderJob>* _currentRenderJob;
	PVVideoCompositingContext* _compositingContext;

}
-(id)init;
-(void)dealloc;
-(HGRef<HGGLContext>*)rootContext;
-(HGRef<PVRenderManager>*)renderManager;
-(void)enqueueRenderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)getSharedEAGLContext;
@end

