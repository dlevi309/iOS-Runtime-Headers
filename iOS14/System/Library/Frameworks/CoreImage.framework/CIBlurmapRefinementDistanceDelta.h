/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIBlurmapRefinementDistanceDelta : CIFilter {

	CIImage* inputImage;
	CIImage* inputSecondaryImage;
	NSNumber* inputThreshold;
	NSNumber* inputDistance;
	NSNumber* inputScalingFactor;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputSecondaryImage; 
@property (retain) NSNumber * inputDistance; 
@property (retain) NSNumber * inputThreshold; 
@property (retain) NSNumber * inputScalingFactor; 
-(NSNumber *)inputDistance;
-(NSNumber *)inputScalingFactor;
-(void)setInputScalingFactor:(NSNumber *)arg1 ;
-(void)setInputDistance:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputThreshold;
-(void)setInputThreshold:(NSNumber *)arg1 ;
-(CIImage *)inputSecondaryImage;
-(void)setInputSecondaryImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

