/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PIHighKeyHDR : CIFilter {

	CIImage* inputImage;
	NSNumber* inputStrength;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputStrength; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(id)_highKeyHDR;
@end

