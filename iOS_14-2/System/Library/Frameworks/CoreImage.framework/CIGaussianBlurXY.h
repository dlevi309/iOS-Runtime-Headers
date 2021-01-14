/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_isIdentity;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputSigmaX:(NSNumber *)arg1 ;
-(NSNumber *)inputSigmaY;
-(void)setInputSigmaY:(NSNumber *)arg1 ;
-(NSNumber *)inputSigmaX;
@end

