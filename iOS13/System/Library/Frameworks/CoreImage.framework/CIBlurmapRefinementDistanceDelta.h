/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputThreshold;
-(void)setInputThreshold:(NSNumber *)arg1 ;
-(CIImage *)inputSecondaryImage;
-(void)setInputSecondaryImage:(CIImage *)arg1 ;
-(NSNumber *)inputScalingFactor;
-(void)setInputScalingFactor:(NSNumber *)arg1 ;
-(NSNumber *)inputDistance;
-(void)setInputDistance:(NSNumber *)arg1 ;
@end

