/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PIForwardFakeBoost : CIFilter {

	double _inputBoost;
	CIImage* _inputImage;

}

@property (assign) double inputBoost;                 //@synthesize inputBoost=_inputBoost - In the implementation block
@property (retain) CIImage * inputImage;              //@synthesize inputImage=_inputImage - In the implementation block
+(id)kernel;
-(double)inputBoost;
-(void)setInputBoost:(double)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

