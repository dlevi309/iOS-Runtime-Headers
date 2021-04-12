/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)temperature;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setTemperature:(double)arg1 ;
-(void)setTint:(double)arg1 ;
-(double)tint;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputVectorsForFilter:(id)arg1 ;
@end

