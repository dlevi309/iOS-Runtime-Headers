/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RawCamera-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSData;

@interface RAWLensCorrectionDistortionFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputDistortionAmount;
	NSData* inputDistortionMap;
	NSNumber* inputDistortionMapWidth;
	NSNumber* inputDistortionMapHeight;
	id inputColorSpace;
	CIImage* mapImg;

}
+(id)customAttributes;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)customAttributes;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)outputImage;
-(BOOL)makeMapImages;
-(CGRect)mapPoint:(CGPoint)arg1 extent:(CGRect)arg2 map:(const vec2*)arg3 mapWidth:(int)arg4 mapHeight:(int)arg5 amount:(float)arg6 ;
@end

