/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARImageBasedTechnique.h>

@protocol OS_dispatch_queue;
@class ARImageScalingTechnique, NSObject;

@interface ARMLImageMattingMetadataTechnique : ARImageBasedTechnique {

	BOOL _enableDoubleMLResolutionForIPad;
	ARImageScalingTechnique* _mattingImageScalingTechnique;
	CVPixelBufferPoolRef _bgraMattingPixelBufferPool;
	vImageCVImageFormatRef _cvImageFormatRef;
	NSObject*<OS_dispatch_queue> _processingQueue;
	BOOL _deterministic;

}
-(id)processData:(id)arg1 ;
-(id)init;
-(void)prepare:(BOOL)arg1 ;
-(void)dealloc;
-(id)_generateMattingMetadata:(id)arg1 ;
-(id)_convertImageColorSpace:(id)arg1 pPoolToUse:(_CVPixelBufferPool*)arg2 ;
-(double)requiredTimeInterval;
-(id)resultDataClasses;
@end

