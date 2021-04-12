/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSData, NSNumber;

@interface RAWVignetteTable : RAWFilter {

	CIImage* inputImage;
	NSData* inputVignetteTableData;
	NSNumber* inputVignetteTableDataSize;
	id inputColorSpace;
	CIImage* vigImg;

}
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)outputImage;
-(BOOL)makeMapImages;
@end

