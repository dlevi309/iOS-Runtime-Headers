/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>

@class ARImageData, NSString;

@interface ARSegmentationData : NSObject <ARResultData> {

	double _timestamp;
	CVBufferRef _segmentationBuffer;
	CVBufferRef _confidenceBuffer;
	long long _source;
	CVBufferRef _normalsBuffer;
	CVBufferRef _semanticsSampledForDepth;
	CVBufferRef _confidenceSampledForDepth;
	ARImageData* _sourceImageData;

}

@property (nonatomic,readonly) double timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) CVBufferRef segmentationBuffer;                   //@synthesize segmentationBuffer=_segmentationBuffer - In the implementation block
@property (nonatomic,readonly) CVBufferRef confidenceBuffer;                     //@synthesize confidenceBuffer=_confidenceBuffer - In the implementation block
@property (nonatomic,readonly) long long source;                                 //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) CVBufferRef normalsBuffer;                          //@synthesize normalsBuffer=_normalsBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef semanticsSampledForDepth;               //@synthesize semanticsSampledForDepth=_semanticsSampledForDepth - In the implementation block
@property (assign,nonatomic) CVBufferRef confidenceSampledForDepth;              //@synthesize confidenceSampledForDepth=_confidenceSampledForDepth - In the implementation block
@property (nonatomic,retain) ARImageData * sourceImageData;                      //@synthesize sourceImageData=_sourceImageData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(long long)source;
-(double)timestamp;
-(CVBufferRef)segmentationBuffer;
-(CVBufferRef)confidenceBuffer;
-(id)initWithTimestamp:(double)arg1 segmentationBuffer:(CVBufferRef)arg2 ;
-(ARImageData *)sourceImageData;
-(void)setSemanticsSampledForDepth:(CVBufferRef)arg1 ;
-(void)setConfidenceSampledForDepth:(CVBufferRef)arg1 ;
-(CVBufferRef)normalsBuffer;
-(CVBufferRef)semanticsSampledForDepth;
-(CVBufferRef)confidenceSampledForDepth;
-(void)setNormalsBuffer:(CVBufferRef)arg1 ;
-(void)setSourceImageData:(ARImageData *)arg1 ;
-(id)initWithTimestamp:(double)arg1 segmentationBuffer:(CVBufferRef)arg2 confidenceBuffer:(CVBufferRef)arg3 source:(long long)arg4 ;
@end

