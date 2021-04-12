/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@interface FigCaptureSessionPreparedBracket : NSObject {

	unsigned _outputFormat;
	SCD_Struct_BW2 _outputDimensions;
	unsigned _imageCount;
	int _colorSpaceProperties;

}

@property (assign,nonatomic) unsigned outputFormat;                        //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 outputDimensions;              //@synthesize outputDimensions=_outputDimensions - In the implementation block
@property (assign,nonatomic) unsigned imageCount;                          //@synthesize imageCount=_imageCount - In the implementation block
@property (assign,nonatomic) int colorSpaceProperties;                     //@synthesize colorSpaceProperties=_colorSpaceProperties - In the implementation block
-(void)setOutputFormat:(unsigned)arg1 ;
-(unsigned)outputFormat;
-(int)colorSpaceProperties;
-(void)setColorSpaceProperties:(int)arg1 ;
-(void)setOutputDimensions:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)outputDimensions;
-(void)setImageCount:(unsigned)arg1 ;
-(unsigned)imageCount;
@end

