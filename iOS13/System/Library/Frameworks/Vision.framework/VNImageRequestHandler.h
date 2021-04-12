/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@class NSDictionary, VNImageSpecifier, VNRequestPerformer, VNObservationsCache;

@interface VNImageRequestHandler : NSObject {

	NSDictionary* _options;
	VNImageSpecifier* _imageSpecifier;
	VNRequestPerformer* _requestPerformer;
	VNObservationsCache* _observationsCache;

}
+(void)requestForcedCleanup;
+(void)forcedCleanup;
+(void)requestForcedCleanupWithOptions:(id)arg1 ;
+(void)requestForcedCleanupWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)forcedCleanupWithOptions:(id)arg1 ;
+(id)asyncProcessingDispatchQueue;
-(id)initWithCIImage:(id)arg1 options:(id)arg2 ;
-(BOOL)performRequests:(id)arg1 error:(id*)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(void)cancelAllRequests;
-(BOOL)prepareForPerformingRequestsOfClass:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareForPerformingRequests:(id)arg1 error:(id*)arg2 ;
-(id)imageBufferAndReturnError:(id*)arg1 ;
-(id)initWithImageSpecifier:(id)arg1 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithCIImage:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithURL:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithData:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(BOOL)performRequests:(id)arg1 gatheredForensics:(id*)arg2 error:(id*)arg3 ;
@end

