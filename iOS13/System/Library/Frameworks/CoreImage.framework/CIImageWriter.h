/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSString, NSNumber, CIFilter;

@interface CIImageWriter : CIFilter {

	CIImage* inputImage;
	NSString* inputFilename;
	NSNumber* inputShouldDumpInputValues;
	CIFilter* inputOriginalFilter;

}

@property (retain) CIImage * inputImage; 
@property (retain) NSString * inputFilename; 
@property (retain) NSNumber * inputShouldDumpInputValues; 
@property (retain) CIFilter * inputOriginalFilter; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputShouldDumpInputValues;
-(NSString *)inputFilename;
-(void)setInputFilename:(NSString *)arg1 ;
-(void)setInputShouldDumpInputValues:(NSNumber *)arg1 ;
-(CIFilter *)inputOriginalFilter;
-(void)setInputOriginalFilter:(CIFilter *)arg1 ;
@end

