/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIFaceSegmentationFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputRegion;
	NSNumber* inputOrientation;
	CIVector* inputFaceRect;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputRegion; 
@property (nonatomic,retain) NSNumber * inputOrientation; 
@property (nonatomic,retain) CIVector * inputFaceRect; 
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputRegion;
-(void)setInputRegion:(NSNumber *)arg1 ;
-(NSNumber *)inputOrientation;
-(void)setInputOrientation:(NSNumber *)arg1 ;
-(CIVector *)inputFaceRect;
-(void)setInputFaceRect:(CIVector *)arg1 ;
@end

