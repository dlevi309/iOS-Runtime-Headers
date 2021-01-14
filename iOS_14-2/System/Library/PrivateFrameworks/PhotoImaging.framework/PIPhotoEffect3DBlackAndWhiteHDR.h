/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PIPhotoEffect3DBlackAndWhiteHDR : CIFilter {

	float _inputThreshold;
	CIImage* _inputImage;
	CIImage* _inputDepthMap;

}

@property (retain) CIImage * inputImage;                 //@synthesize inputImage=_inputImage - In the implementation block
@property (retain) CIImage * inputDepthMap;              //@synthesize inputDepthMap=_inputDepthMap - In the implementation block
@property (assign) float inputThreshold;                 //@synthesize inputThreshold=_inputThreshold - In the implementation block
+(id)kernelBlackAndWhite;
-(CIImage *)inputDepthMap;
-(void)setInputDepthMap:(CIImage *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(float)inputThreshold;
-(void)setInputThreshold:(float)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(id)photoEffectName;
@end

