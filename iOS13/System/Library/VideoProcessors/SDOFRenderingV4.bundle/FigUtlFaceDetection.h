/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV4.bundle/SDOFRenderingV4
*/


#import <SDOFRenderingV4/SDOFRenderingV4-Structs.h>
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
+(BOOL)prewarmBoxAlignmentAndLandmarksDetectorUsingFractionOfLandmarksModelFile:(float)arg1 ;
+(void)deallocateResources;
-(BOOL)start;
-(void)end;
-(BOOL)isBlinking;
-(id)initWithMaxImageWidth:(int)arg1 height:(int)arg2 pixelFormat:(unsigned)arg3 landmarksModelFraction:(float)arg4 ;
-(BOOL)computeQuality:(CVBufferRef)arg1 orientation:(int)arg2 rectangle:(CGRect)arg3 quality:(float*)arg4 alignedRectangle:(CGRect*)arg5 ;
-(BOOL)computeLandmarks;
-(float)blink;
-(int)landmarkCount;
-(CGPoint)landmark:(int)arg1 ;
-(FigUtlROIProcessor *)roi;
@end

