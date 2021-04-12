/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>

@interface ARImageCroppingTechnique : ARTechnique {

	OpaqueVTPixelTransferSessionRef _vtPixelTransferSession;
	CVPixelBufferPoolRef _croppedPixelBufferPool;
	CGRect _cropRect;
	CGSize _croppedImageSize;

}

@property (nonatomic,readonly) CGSize croppedImageSize;              //@synthesize croppedImageSize=_croppedImageSize - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)processData:(id)arg1 ;
-(unsigned long long)requiredSensorDataTypes;
-(CGSize)croppedImageSize;
-(id)initWithCroppedImageSize:(CGSize)arg1 ;
@end

