/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIOpacity : CIFilter {

	CIImage* inputImage;
	NSNumber* inputOpacity;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputOpacity; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputOpacity:(NSNumber *)arg1 ;
-(NSNumber *)inputOpacity;
-(id)outputImage;
-(CIImage *)inputImage;
@end

