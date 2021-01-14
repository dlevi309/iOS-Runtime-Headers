/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(id)hueSatLumTable;
-(NSArray *)inputCorrections;
-(void)setInputCorrections:(NSArray *)arg1 ;
@end

