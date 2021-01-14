/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInputPoint:(CIVector *)arg1 ;
-(NSNumber *)inputSize;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputRotation;
-(NSNumber *)inputDecay;
-(void)setInputDecay:(NSNumber *)arg1 ;
-(void)setInputSize:(NSNumber *)arg1 ;
-(id)outputImage;
-(id)_colorKernel;
-(id)_geomKernel;
-(CIImage *)inputImage;
-(void)setInputRotation:(NSNumber *)arg1 ;
-(CIVector *)inputPoint;
@end

