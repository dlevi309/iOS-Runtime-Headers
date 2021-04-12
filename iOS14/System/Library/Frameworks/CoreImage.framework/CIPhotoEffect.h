/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CIPhotoEffect : CIFilter {

	CIImage* inputImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
+(id)customAttributes;
-(id)cubeName;
-(id)cubeColorSpaceName;
-(id)init;
-(int)_defaultVersion;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)cubePath;
-(void)setDefaults;
-(int)_maxVersion;
-(id)outputImage;
-(CIImage *)inputImage;
@end

