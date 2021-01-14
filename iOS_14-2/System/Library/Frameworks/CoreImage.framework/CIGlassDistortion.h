/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIGlassDistortion : CIFilter {

	CIImage* inputImage;
	CIImage* inputTexture;
	CIVector* inputCenter;
	NSNumber* inputScale;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTexture; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputScale; 
+(id)customAttributes;
-(id)_kernel;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputCenter;
-(void)setInputCenter:(CIVector *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputTexture:(CIImage *)arg1 ;
-(CIImage *)inputTexture;
@end

