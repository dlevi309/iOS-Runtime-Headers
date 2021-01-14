/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CILumaMap : CIFilter {

	CIImage* inputImage;
	CIImage* _tableImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
+(id)customAttributes;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setDefaults;
-(id)outputImage;
-(const char*)lumaTable;
-(CIImage *)inputImage;
-(void)dealloc;
@end

