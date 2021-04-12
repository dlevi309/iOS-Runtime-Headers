/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CICircularMaskFromPointImage : CIFilter {

	CIImage* inputImage;
	CIImage* inputCoordinate;
	NSNumber* inputInnerRadius;
	NSNumber* inputOuterRadius;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputCoordinate; 
@property (nonatomic,copy) NSNumber * inputInnerRadius; 
@property (nonatomic,copy) NSNumber * inputOuterRadius; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_kernelDraw;
-(CIImage *)inputCoordinate;
-(void)setInputCoordinate:(CIImage *)arg1 ;
-(NSNumber *)inputInnerRadius;
-(void)setInputInnerRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputOuterRadius;
-(void)setInputOuterRadius:(NSNumber *)arg1 ;
@end

