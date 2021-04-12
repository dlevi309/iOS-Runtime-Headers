/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CICircularityDescriptor : CIFilter {

	CIImage* inputImage;
	CIImage* inputCentroid;
	CIVector* inputExtent;

}

@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) CIImage * inputCentroid; 
-(id)outputImage;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(CIImage *)inputCentroid;
-(void)setInputCentroid:(CIImage *)arg1 ;
@end

