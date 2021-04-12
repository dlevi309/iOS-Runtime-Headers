/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARResultData.h>

@class ARCamera, NSString;

@interface ARRawSceneUnderstandingData : NSObject <ARResultData> {

	void* _resultsRef;
	ARCamera* wideCamera;
	ARCamera* ultraWideCamera;
	double _timestamp;
	CVBufferRef _semanticSegmentationBuffer;
	CVBufferRef _semanticSegmentationBufferSampledForDepth;
	CVBufferRef _semanticSegmentationConfidenceBuffer;
	CVBufferRef _semanticSegmentationConfidenceBufferSampledForDepth;
	CVBufferRef _semanticSegmentationUncertaintyBuffer;
	CVBufferRef _normalsBuffer;
	CVBufferRef _depthBuffer;
	CVBufferRef _depthConfidenceBuffer;
	CVBufferRef _capturedImage;

}

@property (assign,nonatomic) double timestamp;                                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) void* sceneUnderstandingResultRef; 
@property (assign,nonatomic) CVBufferRef semanticSegmentationBuffer;                                       //@synthesize semanticSegmentationBuffer=_semanticSegmentationBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef semanticSegmentationBufferSampledForDepth;                        //@synthesize semanticSegmentationBufferSampledForDepth=_semanticSegmentationBufferSampledForDepth - In the implementation block
@property (assign,nonatomic) CVBufferRef semanticSegmentationConfidenceBuffer;                             //@synthesize semanticSegmentationConfidenceBuffer=_semanticSegmentationConfidenceBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef semanticSegmentationConfidenceBufferSampledForDepth;              //@synthesize semanticSegmentationConfidenceBufferSampledForDepth=_semanticSegmentationConfidenceBufferSampledForDepth - In the implementation block
@property (assign,nonatomic) CVBufferRef semanticSegmentationUncertaintyBuffer;                            //@synthesize semanticSegmentationUncertaintyBuffer=_semanticSegmentationUncertaintyBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef normalsBuffer;                                                    //@synthesize normalsBuffer=_normalsBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef depthBuffer;                                                      //@synthesize depthBuffer=_depthBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef depthConfidenceBuffer;                                            //@synthesize depthConfidenceBuffer=_depthConfidenceBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef capturedImage;                                                    //@synthesize capturedImage=_capturedImage - In the implementation block
@property (nonatomic,retain) ARCamera * wideCamera; 
@property (nonatomic,retain) ARCamera * ultraWideCamera; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(CVBufferRef)capturedImage;
-(void)setCapturedImage:(CVBufferRef)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)dealloc;
-(CVBufferRef)normalsBuffer;
-(CVBufferRef)depthBuffer;
-(void)setSemanticSegmentationBuffer:(CVBufferRef)arg1 ;
-(CVBufferRef)semanticSegmentationBuffer;
-(void)setSemanticSegmentationBufferSampledForDepth:(CVBufferRef)arg1 ;
-(void)setSemanticSegmentationConfidenceBuffer:(CVBufferRef)arg1 ;
-(void)setSemanticSegmentationConfidenceBufferSampledForDepth:(CVBufferRef)arg1 ;
-(void)setSemanticSegmentationUncertaintyBuffer:(CVBufferRef)arg1 ;
-(void)setDepthBuffer:(CVBufferRef)arg1 ;
-(void)setDepthConfidenceBuffer:(CVBufferRef)arg1 ;
-(void)setNormalsBuffer:(CVBufferRef)arg1 ;
-(void)setWideCamera:(ARCamera *)arg1 ;
-(void)setUltraWideCamera:(ARCamera *)arg1 ;
-(void*)sceneUnderstandingResultRef;
-(ARCamera *)wideCamera;
-(ARCamera *)ultraWideCamera;
-(CVBufferRef)semanticSegmentationBufferSampledForDepth;
-(CVBufferRef)semanticSegmentationConfidenceBuffer;
-(CVBufferRef)semanticSegmentationConfidenceBufferSampledForDepth;
-(CVBufferRef)semanticSegmentationUncertaintyBuffer;
-(CVBufferRef)depthConfidenceBuffer;
@end

