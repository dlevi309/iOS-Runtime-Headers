/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSValue;

@interface CIAffineTile : CIFilter {

	CIImage* inputImage;
	NSValue* inputTransform;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSValue * inputTransform; 
+(id)customAttributes;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSValue *)inputTransform;
-(void)setInputTransform:(NSValue *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

