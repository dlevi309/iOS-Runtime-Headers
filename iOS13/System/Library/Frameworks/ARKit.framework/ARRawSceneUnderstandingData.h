/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>

@class NSString;

@interface ARRawSceneUnderstandingData : NSObject <ARResultData> {

	void* _resultsRef;
	double _timestamp;
	CVBufferRef _semanticSegmentationBuffer;
	CVBufferRef _semanticSegmentationConfidenceBuffer;
	CVBufferRef _normalsBuffer;
	CVBufferRef _depthBuffer;

}

@property (nonatomic,readonly) double timestamp;                                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) void* sceneUnderstandingResultRef; 
@property (assign,nonatomic) CVBufferRef semanticSegmentationBuffer;                        //@synthesize semanticSegmentationBuffer=_semanticSegmentationBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef semanticSegmentationConfidenceBuffer;              //@synthesize semanticSegmentationConfidenceBuffer=_semanticSegmentationConfidenceBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef normalsBuffer;                                     //@synthesize normalsBuffer=_normalsBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef depthBuffer;                                       //@synthesize depthBuffer=_depthBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)timestamp;
-(CVBufferRef)depthBuffer;
-(CVBufferRef)normalsBuffer;
-(void)setSemanticSegmentationBuffer:(CVBufferRef)arg1 ;
-(CVBufferRef)semanticSegmentationBuffer;
-(void)setSemanticSegmentationConfidenceBuffer:(CVBufferRef)arg1 ;
-(void)setDepthBuffer:(CVBufferRef)arg1 ;
-(void)setNormalsBuffer:(CVBufferRef)arg1 ;
-(void*)sceneUnderstandingResultRef;
-(CVBufferRef)semanticSegmentationConfidenceBuffer;
@end

