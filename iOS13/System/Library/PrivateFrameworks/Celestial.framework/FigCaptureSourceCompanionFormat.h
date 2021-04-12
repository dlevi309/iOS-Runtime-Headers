/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@interface FigCaptureSourceCompanionFormat : NSObject {

	int _formatIndex;
	SCD_Struct_BW19 _fesDimensions;
	SCD_Struct_BW19 _fesInputCropDimensions;
	SCD_Struct_BW19 _outputCropDimensionsWhenFesIsEnabled;
	SCD_Struct_BW19 _sensorCropDimensions;
	BOOL _sifrEnabled;

}

@property (readonly) int formatIndex;                                                   //@synthesize formatIndex=_formatIndex - In the implementation block
@property (readonly) SCD_Struct_BW19 fesDimensions;                                     //@synthesize fesDimensions=_fesDimensions - In the implementation block
@property (readonly) SCD_Struct_BW19 fesInputCropDimensions;                            //@synthesize fesInputCropDimensions=_fesInputCropDimensions - In the implementation block
@property (readonly) SCD_Struct_BW19 outputCropDimensionsWhenFesIsEnabled;              //@synthesize outputCropDimensionsWhenFesIsEnabled=_outputCropDimensionsWhenFesIsEnabled - In the implementation block
@property (readonly) SCD_Struct_BW19 sensorCropDimensions;                              //@synthesize sensorCropDimensions=_sensorCropDimensions - In the implementation block
@property (readonly) BOOL sifrEnabled;                                                  //@synthesize sifrEnabled=_sifrEnabled - In the implementation block
-(void)dealloc;
-(id)description;
-(int)formatIndex;
-(SCD_Struct_BW19)sensorCropDimensions;
-(SCD_Struct_BW19)fesDimensions;
-(SCD_Struct_BW19)fesInputCropDimensions;
-(BOOL)sifrEnabled;
-(SCD_Struct_BW19)outputCropDimensionsWhenFesIsEnabled;
-(id)initWithCompanionFormatDictionary:(id)arg1 ;
@end

