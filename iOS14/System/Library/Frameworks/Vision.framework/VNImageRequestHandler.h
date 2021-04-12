/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@class VNSession, VNImageBuffer, VNRequestPerformer, VNObservationsCache;

@interface VNImageRequestHandler : NSObject {

	VNSession* _session;
	VNImageBuffer* _imageBuffer;
	VNRequestPerformer* _requestPerformer;
	VNObservationsCache* _observationsCache;

}
+(void)forcedCleanup;
+(void)requestForcedCleanup;
+(void)requestForcedCleanupWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)requestForcedCleanupWithOptions:(id)arg1 ;
+(void)forcedCleanupWithOptions:(id)arg1 ;
-(id)initWithCIImage:(id)arg1 options:(id)arg2 session:(id)arg3 ;
-(id)initWithURL:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithURL:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 session:(id)arg4 ;
-(BOOL)prepareForPerformingRequests:(id)arg1 error:(id*)arg2 ;
-(id)initWithCMSampleBuffer:(opaqueCMSampleBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithData:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(void)cancelAllRequests;
-(id)initWithCGImage:(CGImageRef)arg1 options:(id)arg2 session:(id)arg3 ;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(BOOL)performRequests:(id)arg1 gatheredForensics:(id*)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 session:(id)arg4 ;
-(id)initWithCMSampleBuffer:(opaqueCMSampleBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 session:(id)arg4 ;
-(id)initWithCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 session:(id)arg4 ;
-(BOOL)performRequests:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareForPerformingRequestsOfClass:(id)arg1 error:(id*)arg2 ;
-(id)initWithCMSampleBuffer:(opaqueCMSampleBufferRef)arg1 options:(id)arg2 session:(id)arg3 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 session:(id)arg4 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)initWithData:(id)arg1 options:(id)arg2 session:(id)arg3 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 session:(id)arg3 ;
-(id)initWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(id)initWithCMSampleBuffer:(opaqueCMSampleBufferRef)arg1 options:(id)arg2 ;
-(id)initWithCIImage:(id)arg1 options:(id)arg2 ;
-(id)initWithCIImage:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 session:(id)arg4 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 session:(id)arg3 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(id)initWithSession:(id)arg1 imageBuffer:(id)arg2 ;
-(id)initWithCIImage:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
@end

