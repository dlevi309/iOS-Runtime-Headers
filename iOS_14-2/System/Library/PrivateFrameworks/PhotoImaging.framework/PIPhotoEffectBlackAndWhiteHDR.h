/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PIPhotoEffectBlackAndWhiteHDR : CIFilter {

	CIImage* _inputImage;

}

@property (retain) CIImage * inputImage;              //@synthesize inputImage=_inputImage - In the implementation block
+(id)kernelBlackAndWhite;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(id)photoEffectName;
@end

