/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARResultData.h>

@class ARImageData, NSString;

@interface ARMLDepthData : NSObject <ARResultData> {

	os_unfair_lock_s _singleFrameDepthBufferLock;
	CVBufferRef _singleFrameDepthBuffer;
	CVBufferRef _singleFrameConfidenceBuffer;
	double _timestamp;
	CVBufferRef _depthBuffer;
	long long _source;
	CVBufferRef _confidenceBuffer;
	CVBufferRef _confidenceMap;
	CVBufferRef _normalsBuffer;
	ARImageData* _sourceImageData;

}

@property (nonatomic,readonly) double timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) CVBufferRef depthBuffer;                            //@synthesize depthBuffer=_depthBuffer - In the implementation block
@property (nonatomic,readonly) CGSize depthBufferSize; 
@property (nonatomic,readonly) long long source;                                   //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) CVBufferRef confidenceBuffer;                       //@synthesize confidenceBuffer=_confidenceBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef confidenceMap;                            //@synthesize confidenceMap=_confidenceMap - In the implementation block
@property (assign,nonatomic) CVBufferRef singleFrameDepthBuffer; 
@property (assign,nonatomic) CVBufferRef singleFrameConfidenceBuffer;              //@synthesize singleFrameConfidenceBuffer=_singleFrameConfidenceBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef normalsBuffer;                            //@synthesize normalsBuffer=_normalsBuffer - In the implementation block
@property (nonatomic,retain) ARImageData * sourceImageData;                        //@synthesize sourceImageData=_sourceImageData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(NSString *)description;
-(void)dealloc;
-(long long)source;
-(CVBufferRef)confidenceBuffer;
-(CVBufferRef)normalsBuffer;
-(CVBufferRef)singleFrameDepthBuffer;
-(CVBufferRef)singleFrameConfidenceBuffer;
-(CGSize)depthBufferSize;
-(CVBufferRef)depthBuffer;
-(id)initWithTimestamp:(double)arg1 depthBuffer:(CVBufferRef)arg2 confidenceBuffer:(CVBufferRef)arg3 source:(long long)arg4 ;
-(id)initWithTimestamp:(double)arg1 depthBuffer:(CVBufferRef)arg2 source:(long long)arg3 ;
-(ARImageData *)sourceImageData;
-(CVBufferRef)confidenceMap;
-(void)setNormalsBuffer:(CVBufferRef)arg1 ;
-(void)setSingleFrameDepthBuffer:(CVBufferRef)arg1 ;
-(void)setSingleFrameConfidenceBuffer:(CVBufferRef)arg1 ;
-(void)setConfidenceMap:(CVBufferRef)arg1 ;
-(void)setSourceImageData:(ARImageData *)arg1 ;
@end

