/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CISingleChannelColorMap : CIFilter {

	CIImage* inputImage;
	NSNumber* inputChannelIndex;
	NSNumber* inputShouldNormalize;
	NSNumber* inputColorMapIndex;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputChannelIndex; 
@property (nonatomic,retain) NSNumber * inputShouldNormalize; 
@property (nonatomic,retain) NSNumber * inputColorMapIndex; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputChannelIndex;
-(void)setInputChannelIndex:(NSNumber *)arg1 ;
-(NSNumber *)inputShouldNormalize;
-(void)setInputShouldNormalize:(NSNumber *)arg1 ;
-(NSNumber *)inputColorMapIndex;
-(void)setInputColorMapIndex:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

