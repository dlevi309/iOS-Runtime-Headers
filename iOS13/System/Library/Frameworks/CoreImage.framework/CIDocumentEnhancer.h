/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIDocumentEnhancer : CIFilter {

	CIImage* inputImage;
	NSNumber* inputAmount;

}

@property (nonatomic,copy) NSNumber * inputAmount; 
+(id)customAttributes;
-(id)outputImage;
-(NSNumber *)inputAmount;
-(void)setInputAmount:(NSNumber *)arg1 ;
@end

