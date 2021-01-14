/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIDissolveTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	NSNumber* inputTime;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) NSNumber * inputTime; 
+(id)customAttributes;
-(NSNumber *)inputTime;
-(id)_kernel;
-(void)setInputTime:(NSNumber *)arg1 ;
-(CIImage *)inputTargetImage;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_fadeKernel;
-(id)outputImage;
-(CIImage *)inputImage;
@end

