/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray, NSNumber;

@interface CIConvolution : CIFilter {

	CIImage* inputImage;
	NSArray* inputPoints;
	NSArray* inputWeights;
	NSNumber* inputLinearFilterModeEnabled;

}
-(id)outputImage;
-(id)_CIConvolutionAdd_1;
-(id)_CIConvolutionAdd_2;
-(id)_CIConvolutionAdd_3;
-(id)_CIConvolutionAdd_4;
-(id)_CIConvolutionAdd_5;
-(id)_CIConvolutionAdd_6;
-(id)_CIConvolutionAdd_7;
-(id)_CIConvolutionAdd_8;
-(id)doConvolutionPass:(id)arg1 weights:(id)arg2 sums:(id)arg3 ;
-(int)samplesPerPass;
@end

