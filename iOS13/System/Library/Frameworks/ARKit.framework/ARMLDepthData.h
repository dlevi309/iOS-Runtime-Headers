/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>

@class ARImageData, NSString;

@interface ARMLDepthData : NSObject <ARResultData> {

	os_unfair_lock_s _singleFrameDepthBufferLock;
	CVBufferRef _singleFrameDepthBuffer;
	double _timestamp;
	CVBufferRef _depthBuffer;
	long long _source;
	CVBufferRef _confidenceBuffer;
	CVBufferRef _normalsBuffer;
	ARImageData* _sourceImageData;

}

@property (nonatomic,readonly) double timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) CVBufferRef depthBuffer;                       //@synthesize depthBuffer=_depthBuffer - In the implementation block
@property (nonatomic,readonly) CGSize depthBufferSize; 
@property (nonatomic,readonly) long long source;                              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) CVBufferRef confidenceBuffer;                  //@synthesize confidenceBuffer=_confidenceBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef singleFrameDepthBuffer; 
@property (assign,nonatomic) CVBufferRef normalsBuffer;                       //@synthesize normalsBuffer=_normalsBuffer - In the implementation block
@property (nonatomic,retain) ARImageData * sourceImageData;                   //@synthesize sourceImageData=_sourceImageData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(long long)source;
-(double)timestamp;
-(CVBufferRef)depthBuffer;
-(CVBufferRef)singleFrameDepthBuffer;
-(CVBufferRef)confidenceBuffer;
-(id)initWithTimestamp:(double)arg1 depthBuffer:(CVBufferRef)arg2 confidenceBuffer:(CVBufferRef)arg3 source:(long long)arg4 ;
-(id)initWithTimestamp:(double)arg1 depthBuffer:(CVBufferRef)arg2 source:(long long)arg3 ;
-(CGSize)depthBufferSize;
-(ARImageData *)sourceImageData;
-(CVBufferRef)normalsBuffer;
-(void)setNormalsBuffer:(CVBufferRef)arg1 ;
-(void)setSingleFrameDepthBuffer:(CVBufferRef)arg1 ;
-(void)setSourceImageData:(ARImageData *)arg1 ;
@end

