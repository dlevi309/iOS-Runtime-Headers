/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@interface FigCaptureSessionPreparedBracket : NSObject {

	unsigned _outputFormat;
	SCD_Struct_BW19 _outputDimensions;
	unsigned _imageCount;
	int _colorSpaceProperties;

}

@property (assign,nonatomic) unsigned outputFormat;                         //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW19 outputDimensions;              //@synthesize outputDimensions=_outputDimensions - In the implementation block
@property (assign,nonatomic) unsigned imageCount;                           //@synthesize imageCount=_imageCount - In the implementation block
@property (assign,nonatomic) int colorSpaceProperties;                      //@synthesize colorSpaceProperties=_colorSpaceProperties - In the implementation block
-(unsigned)outputFormat;
-(void)setOutputFormat:(unsigned)arg1 ;
-(unsigned)imageCount;
-(void)setImageCount:(unsigned)arg1 ;
-(int)colorSpaceProperties;
-(void)setOutputDimensions:(SCD_Struct_BW19)arg1 ;
-(void)setColorSpaceProperties:(int)arg1 ;
-(SCD_Struct_BW19)outputDimensions;
@end

