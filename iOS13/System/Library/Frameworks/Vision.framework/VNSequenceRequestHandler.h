/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/VNRequestWarming.h>
#import <libobjc.A.dylib/VNRequestCancelling.h>

@class VNRequestPerformer;

@interface VNSequenceRequestHandler : NSObject <VNRequestWarming, VNRequestCancelling> {

	VNRequestPerformer* _requestPerformer;

}
+(void)requestForcedCleanup;
+(void)forcedCleanup;
+(void)requestForcedCleanupWithOptions:(id)arg1 ;
+(void)requestForcedCleanupWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)forcedCleanupWithOptions:(id)arg1 ;
+(id)asyncProcessingDispatchQueue;
-(id)init;
-(void)cancelAllRequests;
-(BOOL)prepareForPerformingRequestsOfClass:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareForPerformingRequests:(id)arg1 error:(id*)arg2 ;
-(BOOL)_performRequests:(id)arg1 onUnvettedImageBuffer:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCVPixelBuffer:(CVBufferRef)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onCVPixelBuffer:(CVBufferRef)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCVPixelBuffer:(CVBufferRef)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCVPixelBuffer:(CVBufferRef)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onCGImage:(CGImageRef)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onCGImage:(CGImageRef)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCGImage:(CGImageRef)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCGImage:(CGImageRef)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onImageData:(id)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onImageData:(id)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onImageData:(id)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onImageSpecifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onImageSpecifier:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
@end

