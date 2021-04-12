/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_kernelDraw;
-(CIImage *)inputCoordinate;
-(void)setInputCoordinate:(CIImage *)arg1 ;
-(NSNumber *)inputInnerRadius;
-(void)setInputInnerRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputOuterRadius;
-(void)setInputOuterRadius:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

