/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSData, CIVector, NSNumber;

@interface RAWGainMap : RAWFilter {

	CIImage* inputImage;
	NSData* inputGainMapData;
	CIVector* inputGainMapApplyRegion;
	CIVector* inputGainMapSize;
	NSNumber* inputGainMapRowPitch;
	NSNumber* inputGainMapColPitch;
	NSNumber* inputGainMapNumPlanes;
	NSNumber* inputGainMapExecute;
	id inputColorSpace;
	CIImage* _gainMapImg;

}
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)outputImage;
-(void)setDefaults;
-(id)makeMapSampler;
@end

