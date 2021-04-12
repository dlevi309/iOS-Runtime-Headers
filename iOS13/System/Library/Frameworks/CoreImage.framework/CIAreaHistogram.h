/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIAreaHistogram : CIFilter {

	CIImage* inputImage;
	CIVector* inputExtent;
	NSNumber* inputScale;
	NSNumber* inputCount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputCount; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(NSNumber *)inputScale;
-(IRect)_netExtent;
-(BOOL)_inputsAreOK;
-(id)outputImageNonMPS;
-(id)outputData;
-(void)setInputScale:(NSNumber *)arg1 ;
-(NSNumber *)inputCount;
-(void)setInputCount:(NSNumber *)arg1 ;
@end

