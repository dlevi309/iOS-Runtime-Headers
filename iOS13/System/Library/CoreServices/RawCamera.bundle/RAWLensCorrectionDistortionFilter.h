/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)customAttributes;
-(id)outputImage;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(BOOL)makeMapImages;
-(CGRect)mapPoint:(CGPoint)arg1 extent:(CGRect)arg2 map:(const vec2*)arg3 mapWidth:(int)arg4 mapHeight:(int)arg5 amount:(float)arg6 ;
@end

