/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)inputAmount;
-(void)setInputAmount:(NSNumber *)arg1 ;
-(id)outputImage;
@end

