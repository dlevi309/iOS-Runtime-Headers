/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNTargetedImageRequest.h>

@class NSString, NSDictionary;

@interface VNAppendBurstSequenceFrameRequest : VNTargetedImageRequest {

	NSString* _burstFrameIdentifier;
	NSDictionary* _imageProperties;

}

@property (nonatomic,copy) NSString * burstFrameIdentifier;              //@synthesize burstFrameIdentifier=_burstFrameIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * imageProperties;               //@synthesize imageProperties=_imageProperties - In the implementation block
+(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)initWithTargetedCIImage:(id)arg1 options:(id)arg2 ;
-(id)initWithTargetedImageURL:(id)arg1 options:(id)arg2 ;
-(void)setImageProperties:(NSDictionary *)arg1 ;
-(id)initWithTargetedCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)initWithTargetedCGImage:(CGImageRef)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(id)initWithTargetedCIImage:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedImageURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedImageData:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedImageData:(id)arg1 options:(id)arg2 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)internalPerformInContext:(id)arg1 error:(id*)arg2 ;
-(NSString *)burstFrameIdentifier;
-(void)setBurstFrameIdentifier:(NSString *)arg1 ;
-(id)sequencedRequestPreviousObservationsKey;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(NSDictionary *)imageProperties;
@end

