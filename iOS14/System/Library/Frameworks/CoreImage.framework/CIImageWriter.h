/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(NSNumber *)inputShouldDumpInputValues;
-(NSString *)inputFilename;
-(void)setInputFilename:(NSString *)arg1 ;
-(void)setInputShouldDumpInputValues:(NSNumber *)arg1 ;
-(CIFilter *)inputOriginalFilter;
-(void)setInputOriginalFilter:(CIFilter *)arg1 ;
@end

