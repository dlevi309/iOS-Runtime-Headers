/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)inputIntensity;
-(void)setInputIntensity:(NSNumber *)arg1 ;
-(NSNumber *)inputThreshold;
-(void)setInputThreshold:(NSNumber *)arg1 ;
-(NSNumber *)inputSoftness;
-(void)setInputSoftness:(NSNumber *)arg1 ;
-(id)outputImage;
@end

