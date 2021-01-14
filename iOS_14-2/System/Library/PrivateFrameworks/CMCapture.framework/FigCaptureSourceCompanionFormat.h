/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@interface FigCaptureSourceCompanionFormat : NSObject {

	int _formatIndex;
	SCD_Struct_BW2 _fesDimensions;
	SCD_Struct_BW2 _fesInputCropDimensions;
	SCD_Struct_BW2 _outputCropDimensionsWhenFesIsEnabled;
	SCD_Struct_BW2 _sensorCropDimensions;
	BOOL _sifrEnabled;

}

@property (readonly) int formatIndex;                                                  //@synthesize formatIndex=_formatIndex - In the implementation block
@property (readonly) SCD_Struct_BW2 fesDimensions;                                     //@synthesize fesDimensions=_fesDimensions - In the implementation block
@property (readonly) SCD_Struct_BW2 fesInputCropDimensions;                            //@synthesize fesInputCropDimensions=_fesInputCropDimensions - In the implementation block
@property (readonly) SCD_Struct_BW2 outputCropDimensionsWhenFesIsEnabled;              //@synthesize outputCropDimensionsWhenFesIsEnabled=_outputCropDimensionsWhenFesIsEnabled - In the implementation block
@property (readonly) SCD_Struct_BW2 sensorCropDimensions;                              //@synthesize sensorCropDimensions=_sensorCropDimensions - In the implementation block
@property (readonly) BOOL sifrEnabled;                                                 //@synthesize sifrEnabled=_sifrEnabled - In the implementation block
-(SCD_Struct_BW2)fesInputCropDimensions;
-(SCD_Struct_BW2)sensorCropDimensions;
-(SCD_Struct_BW2)outputCropDimensionsWhenFesIsEnabled;
-(id)initWithCompanionFormatDictionary:(id)arg1 ;
-(id)description;
-(SCD_Struct_BW2)fesDimensions;
-(int)formatIndex;
-(BOOL)sifrEnabled;
-(void)dealloc;
@end

