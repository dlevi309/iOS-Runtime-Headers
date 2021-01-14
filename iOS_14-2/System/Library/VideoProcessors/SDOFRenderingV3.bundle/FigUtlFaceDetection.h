/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV3.bundle/SDOFRenderingV3
*/


#import <SDOFRenderingV3/SDOFRenderingV3-Structs.h>
@class VNImageRequestHandler, NSArray, FigUtlROIProcessor;

@interface FigUtlFaceDetection : NSObject {

	VNImageRequestHandler* _requestHandler;
	NSArray* _faces;
	unsigned _pixelFormat;
	float _landmarksModelFraction;
	FigUtlROIProcessor* _roi;

}

@property (nonatomic,readonly) FigUtlROIProcessor * roi;              //@synthesize roi=_roi - In the implementation block
@property (readonly) BOOL isBlinking; 
@property (readonly) float blink; 
@property (readonly) int landmarkCount; 
+(id)createFaceLandmarksRequest:(float)arg1 ;
+(void)deallocateResources;
+(BOOL)prewarmBoxAlignmentAndLandmarksDetectorUsingFractionOfLandmarksModelFile:(float)arg1 ;
-(FigUtlROIProcessor *)roi;
-(void)end;
-(float)blink;
-(BOOL)start;
-(BOOL)computeLandmarks;
-(int)landmarkCount;
-(CGPoint)landmark:(int)arg1 ;
-(id)initWithMaxImageWidth:(int)arg1 height:(int)arg2 pixelFormat:(unsigned)arg3 landmarksModelFraction:(float)arg4 ;
-(BOOL)computeQuality:(CVBufferRef)arg1 orientation:(int)arg2 rectangle:(CGRect)arg3 quality:(float*)arg4 alignedRectangle:(CGRect*)arg5 ;
-(BOOL)isBlinking;
@end

