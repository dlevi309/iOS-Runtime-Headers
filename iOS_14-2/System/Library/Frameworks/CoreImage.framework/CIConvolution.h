/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_CIConvolutionAdd_2;
-(id)_CIConvolutionAdd_3;
-(id)_CIConvolutionAdd_4;
-(int)samplesPerPass;
-(id)_CIConvolutionAdd_1;
-(id)_CIConvolutionAdd_5;
-(id)_CIConvolutionAdd_6;
-(id)_CIConvolutionAdd_7;
-(id)_CIConvolutionAdd_8;
-(id)doConvolutionPass:(id)arg1 weights:(id)arg2 sums:(id)arg3 ;
-(id)outputImage;
@end

