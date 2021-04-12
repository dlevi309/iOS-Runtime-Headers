/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RawCamera-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSData, NSNumber;

@interface RAWLensCorrectionVignetteFilter : CIFilter {

	CIImage* inputImage;
	NSData* inputVignetteTable;
	NSNumber* inputVignetteAmount;
	id inputColorSpace;
	CIImage* vigImg;

}
+(id)customAttributes;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)customAttributes;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)outputImage;
-(BOOL)makeMapImages;
@end

