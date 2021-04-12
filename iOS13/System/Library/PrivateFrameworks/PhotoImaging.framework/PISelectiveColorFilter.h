/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray;

@interface PISelectiveColorFilter : CIFilter {

	CIImage* _inputImage;
	NSArray* _inputCorrections;

}

@property (nonatomic,retain) CIImage * inputImage;                    //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,retain) NSArray * inputCorrections;              //@synthesize inputCorrections=_inputCorrections - In the implementation block
+(id)convertFromIPT:(id)arg1 ;
+(id)selectiveColorKernels;
+(id)convertToIPT:(id)arg1 ;
+(double)iptHueAngleFromRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
+(void)iptFromLinearInto:(float*)arg1 fromRed:(float)arg2 green:(float)arg3 blue:(float)arg4 ;
+(float)hueAngleFrom:(const float*)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)hueSatLumTable;
-(NSArray *)inputCorrections;
-(void)setInputCorrections:(NSArray *)arg1 ;
@end

