/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIGaussianBlurXY : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSigmaX;
	NSNumber* inputSigmaY;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputSigmaX; 
@property (nonatomic,retain) NSNumber * inputSigmaY; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(BOOL)_isIdentity;
-(NSNumber *)inputSigmaX;
-(void)setInputSigmaX:(NSNumber *)arg1 ;
-(NSNumber *)inputSigmaY;
-(void)setInputSigmaY:(NSNumber *)arg1 ;
@end

