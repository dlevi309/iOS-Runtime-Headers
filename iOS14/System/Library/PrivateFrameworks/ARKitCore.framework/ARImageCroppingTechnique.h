/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARTechnique.h>

@interface ARImageCroppingTechnique : ARTechnique {

	OpaqueVTPixelTransferSessionRef _vtPixelTransferSession;
	CVPixelBufferPoolRef _croppedPixelBufferPool;
	CGRect _cropRect;
	CGSize _croppedImageSize;

}

@property (nonatomic,readonly) CGSize croppedImageSize;              //@synthesize croppedImageSize=_croppedImageSize - In the implementation block
-(id)processData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)requiredSensorDataTypes;
-(CGSize)croppedImageSize;
-(id)initWithCroppedImageSize:(CGSize)arg1 ;
@end

