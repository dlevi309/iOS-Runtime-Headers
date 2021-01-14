/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CINinePartStretched : CIFilter {

	CIImage* inputImage;
	CIVector* inputBreakpoint0;
	CIVector* inputBreakpoint1;
	CIVector* inputGrowAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputBreakpoint0; 
@property (nonatomic,retain) CIVector * inputBreakpoint1; 
@property (nonatomic,retain) CIVector * inputGrowAmount; 
+(id)customAttributes;
-(CIVector *)inputBreakpoint0;
-(void)setInputBreakpoint0:(CIVector *)arg1 ;
-(CIVector *)inputBreakpoint1;
-(void)setInputBreakpoint1:(CIVector *)arg1 ;
-(CIVector *)inputGrowAmount;
-(void)setInputGrowAmount:(CIVector *)arg1 ;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

