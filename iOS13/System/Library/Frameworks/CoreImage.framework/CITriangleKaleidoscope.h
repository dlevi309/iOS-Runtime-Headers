/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CITriangleKaleidoscope : CIFilter {

	CIImage* inputImage;
	CIVector* inputPoint;
	NSNumber* inputSize;
	NSNumber* inputRotation;
	NSNumber* inputDecay;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputPoint; 
@property (nonatomic,retain) NSNumber * inputSize; 
@property (nonatomic,retain) NSNumber * inputRotation; 
@property (nonatomic,retain) NSNumber * inputDecay; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputRotation;
-(NSNumber *)inputDecay;
-(void)setInputDecay:(NSNumber *)arg1 ;
-(NSNumber *)inputSize;
-(void)setInputSize:(NSNumber *)arg1 ;
-(id)_geomKernel;
-(id)_colorKernel;
-(void)setInputRotation:(NSNumber *)arg1 ;
-(CIVector *)inputPoint;
-(void)setInputPoint:(CIVector *)arg1 ;
@end

