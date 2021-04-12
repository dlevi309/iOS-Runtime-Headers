/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PICurvesFilter : CIFilter {

	CIImage* _inputImage;
	CIImage* _inputTableImage;

}

@property (retain) CIImage * inputImage;                   //@synthesize inputImage=_inputImage - In the implementation block
@property (retain) CIImage * inputTableImage;              //@synthesize inputTableImage=_inputTableImage - In the implementation block
+(id)curvesKernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputTableImage;
-(void)setInputTableImage:(CIImage *)arg1 ;
@end

