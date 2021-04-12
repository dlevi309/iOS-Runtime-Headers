/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CITemperatureAndTint : CIFilter {

	CIImage* inputImage;
	CIVector* inputNeutral;
	CIVector* inputTargetNeutral;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputNeutral; 
@property (nonatomic,retain) CIVector * inputTargetNeutral; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputNeutral;
-(void)setInputNeutral:(CIVector *)arg1 ;
-(CIVector *)inputTargetNeutral;
-(void)setInputTargetNeutral:(CIVector *)arg1 ;
@end

