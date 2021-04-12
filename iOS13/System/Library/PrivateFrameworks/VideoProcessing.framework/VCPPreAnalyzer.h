/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol OS_dispatch_group, OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPSceneProcessingImageManager, PVSceneTaxonomy, NSObject;

@interface VCPPreAnalyzer : NSObject {

	VCPSceneProcessingImageManager* _imageManager;
	PVSceneTaxonomy* _sceneTaxonomy;
	NSObject*<OS_dispatch_group> _processingGroup;
	NSObject*<OS_dispatch_queue> _processingQueue;
	CF<__CVPixelBufferPool *>* _pool8Y;
	CF<OpaqueVTPixelTransferSession *>* _transferSession;

}
+(BOOL)_allowANE;
+(BOOL)_enableSceneAssetConcurrency;
-(id)init;
-(void)dealloc;
-(int)_createPixelBufferPool:(_CVPixelBufferPool*)arg1 withPixelFormat:(unsigned)arg2 ;
-(int)_convertFromBuffer:(CVBufferRef)arg1 toLumaPixelBuffer:(_CVBuffer*)arg2 ;
-(void)_configureRequest:(id)arg1 withRevision:(unsigned long long)arg2 ;
-(void)_generateSceneClassifications:(id)arg1 withClassificationResults:(id)arg2 andJunkImageResults:(id)arg3 ;
-(int)_createAestheticsRequest:(id*)arg1 andClassificationRequest:(id*)arg2 andSceneprintRequest:(id*)arg3 andJunkImageRequest:(id*)arg4 andSaliencyImageRequest:(id*)arg5 ;
-(int)_collectSceneAnalysisResults:(id*)arg1 withClassificationResults:(id)arg2 andJunkImageResults:(id)arg3 andAestheticsResults:(id)arg4 andSaliencyResults:(id)arg5 andSceneprintResults:(id)arg6 ;
-(int)_performSceneAnalysis:(id*)arg1 withRequestHandler:(id)arg2 ;
-(int)_performBlurAnalysis:(id*)arg1 withBuffer:(CVBufferRef)arg2 andIsSDOF:(BOOL)arg3 ;
-(int)_performExposureAnalysis:(id*)arg1 withBuffer:(CVBufferRef)arg2 ;
-(int)_loadImageURL:(id)arg1 isPano:(BOOL)arg2 withRequestHandler:(id*)arg3 andLumaPixelBuffer:(_CVBuffer*)arg4 ;
-(int)_performAnalysis:(id*)arg1 isSDOF:(BOOL)arg2 withRequestHandler:(id)arg3 andLumaPixelBuffer:(CVBufferRef)arg4 ;
-(void)analyzeWithImageURL:(id)arg1 isPano:(BOOL)arg2 isSDOF:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

