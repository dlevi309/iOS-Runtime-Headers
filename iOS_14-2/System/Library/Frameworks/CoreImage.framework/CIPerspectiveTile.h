/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIPerspectiveTile : CIFilter {

	CIImage* inputImage;
	CIVector* inputTopLeft;
	CIVector* inputTopRight;
	CIVector* inputBottomRight;
	CIVector* inputBottomLeft;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputTopLeft; 
@property (nonatomic,retain) CIVector * inputTopRight; 
@property (nonatomic,retain) CIVector * inputBottomRight; 
@property (nonatomic,retain) CIVector * inputBottomLeft; 
+(id)customAttributes;
-(CIVector *)inputTopLeft;
-(void)setInputTopLeft:(CIVector *)arg1 ;
-(CIVector *)inputTopRight;
-(void)setInputTopRight:(CIVector *)arg1 ;
-(CIVector *)inputBottomRight;
-(void)setInputBottomRight:(CIVector *)arg1 ;
-(CIVector *)inputBottomLeft;
-(void)setInputBottomLeft:(CIVector *)arg1 ;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

