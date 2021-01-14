/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIBarsSwipeTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	NSNumber* inputAngle;
	NSNumber* inputWidth;
	NSNumber* inputBarOffset;
	NSNumber* inputTime;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) NSNumber * inputAngle; 
@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) NSNumber * inputBarOffset; 
@property (nonatomic,retain) NSNumber * inputTime; 
+(id)customAttributes;
-(NSNumber *)inputTime;
-(id)_kernel;
-(void)setInputTime:(NSNumber *)arg1 ;
-(CIImage *)inputTargetImage;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputAngle;
-(void)setInputAngle:(NSNumber *)arg1 ;
-(NSNumber *)inputWidth;
-(void)setInputWidth:(NSNumber *)arg1 ;
-(NSNumber *)inputBarOffset;
-(void)setInputBarOffset:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

