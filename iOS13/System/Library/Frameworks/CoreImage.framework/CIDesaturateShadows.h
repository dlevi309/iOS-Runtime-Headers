/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIDesaturateShadows : CIFilter {

	CIImage* inputImage;
	NSNumber* inputIntensity;
	NSNumber* inputThreshold;
	NSNumber* inputSoftness;

}

@property (nonatomic,retain) NSNumber * inputIntensity; 
@property (nonatomic,retain) NSNumber * inputThreshold; 
@property (nonatomic,retain) NSNumber * inputSoftness; 
+(id)customAttributes;
-(id)outputImage;
-(NSNumber *)inputIntensity;
-(void)setInputIntensity:(NSNumber *)arg1 ;
-(NSNumber *)inputThreshold;
-(void)setInputThreshold:(NSNumber *)arg1 ;
-(NSNumber *)inputSoftness;
-(void)setInputSoftness:(NSNumber *)arg1 ;
@end

