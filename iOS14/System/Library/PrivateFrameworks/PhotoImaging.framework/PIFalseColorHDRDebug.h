/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PIFalseColorHDRDebug : CIFilter {

	double _inputCutoff;
	CIImage* _inputImage;

}

@property (assign) double inputCutoff;                //@synthesize inputCutoff=_inputCutoff - In the implementation block
@property (retain) CIImage * inputImage;              //@synthesize inputImage=_inputImage - In the implementation block
+(id)kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(double)inputCutoff;
-(void)setInputCutoff:(double)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

