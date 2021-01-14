/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PICurvesFilterHDR : CIFilter {

	CIImage* _inputImage;
	CIImage* _inputTableImage;

}

@property (retain) CIImage * inputImage;                   //@synthesize inputImage=_inputImage - In the implementation block
@property (retain) CIImage * inputTableImage;              //@synthesize inputTableImage=_inputTableImage - In the implementation block
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(id)curvesKernel;
-(CIImage *)inputTableImage;
-(void)setInputTableImage:(CIImage *)arg1 ;
@end

