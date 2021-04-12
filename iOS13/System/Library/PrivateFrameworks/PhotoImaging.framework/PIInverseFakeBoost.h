/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PIInverseFakeBoost : CIFilter {

	double _inputBoost;
	CIImage* _inputImage;

}

@property (assign) double inputBoost;                 //@synthesize inputBoost=_inputBoost - In the implementation block
@property (retain) CIImage * inputImage;              //@synthesize inputImage=_inputImage - In the implementation block
+(id)kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputBoost:(double)arg1 ;
-(double)inputBoost;
@end

