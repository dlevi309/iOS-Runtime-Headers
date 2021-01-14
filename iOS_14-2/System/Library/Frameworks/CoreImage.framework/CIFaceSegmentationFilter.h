/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)inputRegion;
-(NSNumber *)inputOrientation;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(void)setInputRegion:(NSNumber *)arg1 ;
-(void)setInputOrientation:(NSNumber *)arg1 ;
-(CIVector *)inputFaceRect;
-(void)setInputFaceRect:(CIVector *)arg1 ;
-(CIImage *)inputImage;
@end

