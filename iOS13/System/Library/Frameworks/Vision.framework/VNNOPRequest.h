/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@class VNSupportedImageSize;

@interface VNNOPRequest : VNImageBasedRequest

@property (nonatomic,copy) VNSupportedImageSize * detectorPreferredImageSize; 
@property (assign,nonatomic) BOOL detectorWantsAnisotropicScaling; 
@property (assign,nonatomic) double detectorExecutionTimeInterval; 
+(Class)configurationClass;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)supportedImageSizeSet;
-(BOOL)hasCancellationHook;
-(VNSupportedImageSize *)detectorPreferredImageSize;
-(void)setDetectorPreferredImageSize:(VNSupportedImageSize *)arg1 ;
-(BOOL)detectorWantsAnisotropicScaling;
-(void)setDetectorWantsAnisotropicScaling:(BOOL)arg1 ;
-(double)detectorExecutionTimeInterval;
-(void)setDetectorExecutionTimeInterval:(double)arg1 ;
-(CGSize)_actualSizeForDesiredSize:(id)arg1 ofSourceImageWidth:(unsigned long long)arg2 height:(unsigned long long)arg3 ;
-(CVBufferRef)_createScaledImagePixelBufferFromCropRect:(CGRect)arg1 ofImageBuffer:(id)arg2 inPixelFormat:(unsigned)arg3 forDetectorInputImageSize:(CGSize)arg4 usingAnisotropicScaling:(BOOL)arg5 options:(id)arg6 error:(id*)arg7 ;
-(CVBufferRef)_createScaledImagePixelBufferFromImageBuffer:(id)arg1 inPixelFormat:(unsigned)arg2 forDetectorInputImageSize:(CGSize)arg3 usingAnisotropicScaling:(BOOL)arg4 options:(id)arg5 error:(id*)arg6 ;
-(BOOL)_performNOPForRevision:(unsigned long long)arg1 inContext:(id)arg2 detectorCompletionSemaphore:(id)arg3 error:(id*)arg4 ;
@end

