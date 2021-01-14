/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, CIColor, NSNumber;

@interface CICopyMachineTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIVector* inputExtent;
	CIColor* inputColor;
	NSNumber* inputTime;
	NSNumber* inputAngle;
	NSNumber* inputWidth;
	NSNumber* inputOpacity;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) CIColor * inputColor; 
@property (nonatomic,retain) NSNumber * inputTime; 
@property (nonatomic,retain) NSNumber * inputAngle; 
@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) NSNumber * inputOpacity; 
+(id)customAttributes;
-(NSNumber *)inputTime;
-(id)_kernel;
-(CIColor *)inputColor;
-(void)setInputTime:(NSNumber *)arg1 ;
-(CIImage *)inputTargetImage;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(NSNumber *)inputAngle;
-(void)setInputAngle:(NSNumber *)arg1 ;
-(NSNumber *)inputWidth;
-(void)setInputWidth:(NSNumber *)arg1 ;
-(void)setInputColor:(CIColor *)arg1 ;
-(void)setInputOpacity:(NSNumber *)arg1 ;
-(NSNumber *)inputOpacity;
-(id)outputImage;
-(CIImage *)inputImage;
@end

