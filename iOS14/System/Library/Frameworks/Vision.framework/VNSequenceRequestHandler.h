/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@class VNSession, VNRequestPerformer;

@interface VNSequenceRequestHandler : NSObject {

	VNSession* _session;
	VNRequestPerformer* _requestPerformer;

}
+(void)forcedCleanup;
+(void)requestForcedCleanup;
+(void)requestForcedCleanupWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)requestForcedCleanupWithOptions:(id)arg1 ;
+(void)forcedCleanupWithOptions:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(id)init;
-(BOOL)prepareForPerformingRequests:(id)arg1 error:(id*)arg2 ;
-(BOOL)_performRequests:(id)arg1 onImageBuffer:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCVPixelBuffer:(CVBufferRef)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onCVPixelBuffer:(CVBufferRef)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCVPixelBuffer:(CVBufferRef)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onCGImage:(CGImageRef)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onCGImage:(CGImageRef)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCGImage:(CGImageRef)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCGImage:(CGImageRef)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onImageData:(id)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onImageData:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onImageData:(id)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onImageData:(id)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onCMSampleBuffer:(opaqueCMSampleBufferRef)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onCMSampleBuffer:(opaqueCMSampleBufferRef)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCMSampleBuffer:(opaqueCMSampleBufferRef)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCMSampleBuffer:(opaqueCMSampleBufferRef)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onCVPixelBuffer:(CVBufferRef)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 error:(id*)arg3 ;
-(BOOL)prepareForPerformingRequestsOfClass:(id)arg1 error:(id*)arg2 ;
@end

