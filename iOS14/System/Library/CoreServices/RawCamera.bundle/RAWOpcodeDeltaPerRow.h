/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary;

@interface RAWOpcodeDeltaPerRow : CIFilter {

	CIImage* inputImage;
	NSDictionary* arguments;

}

@property (retain) CIImage * inputImage; 
@property (nonatomic,retain) NSDictionary * arguments; 
-(void)setArguments:(NSDictionary *)arg1 ;
-(NSDictionary *)arguments;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(id)initWithArguments:(id)arg1 ;
@end

