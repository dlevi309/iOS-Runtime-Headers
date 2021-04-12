/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PITempTintFilter : CIFilter {

	CIImage* _inputImage;
	double _temperature;
	double _tint;

}

@property (nonatomic,retain) CIImage * inputImage;              //@synthesize inputImage=_inputImage - In the implementation block
@property (assign,nonatomic) double temperature;                //@synthesize temperature=_temperature - In the implementation block
@property (assign,nonatomic) double tint;                       //@synthesize tint=_tint - In the implementation block
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(double)temperature;
-(void)setTemperature:(double)arg1 ;
-(double)tint;
-(void)setTint:(double)arg1 ;
-(void)setInputVectorsForFilter:(id)arg1 ;
@end

