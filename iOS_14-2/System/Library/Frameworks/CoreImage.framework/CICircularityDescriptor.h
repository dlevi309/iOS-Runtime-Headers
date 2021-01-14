/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(CIImage *)inputCentroid;
-(void)setInputCentroid:(CIImage *)arg1 ;
-(id)outputImage;
@end

