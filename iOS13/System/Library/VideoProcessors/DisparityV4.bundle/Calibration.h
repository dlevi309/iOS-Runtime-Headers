/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/DisparityV4.bundle/DisparityV4
*/


#import <DisparityV4/DisparityV4-Structs.h>
@class NSDictionary, NSString;

@interface Calibration : NSObject {

	AdaptiveCorrectionRef _adc;
	CalModel _initialCalibration;
	SCD_Struct_Ca19 _pixelBufferDimensions[2];
	NSDictionary* _metadata[2];
	DistortionModel _distModels[2];
	DistortionModel _undistModels[2];
	 _orientationVector;
	unsigned _keypointsCount;
	double* _adaptiveCorrectionKeypointsDistorted[2];
	NSDictionary* _staticParametersByPortType;
	AdaptiveCorrectionConfig _adaptiveCorrectionConfig;
	float _focalLength[2];
	CGPoint _opticalCenter[2];
	CGSize _rawSensorSize[2];
	float _ddf[2];
	CGPoint _distortionOpticalCenter[2];
	NSString* _portTypeName[2];
	 _limitDistances_mm;
	float _nearLimitDisparity;
	float _midLimitDisparity;
	SCD_Struct_St15 _auxiliaryPaddingHInv;
	SCD_Struct_St15 _rectReferenceToReference;
	SCD_Struct_St15 _rectReferenceToAuxiliary;
	SCD_Struct_St15 _referenceToRectReference;
	CalModel _correctedCalibration;

}

@property (nonatomic,readonly) float referenceMagnification; 
@property (nonatomic,readonly) CalModel correctedCalibration;                         //@synthesize correctedCalibration=_correctedCalibration - In the implementation block
@property (assign,nonatomic)  orientationVector;                                      //@synthesize orientationVector=_orientationVector - In the implementation block
@property (nonatomic,readonly) float nearLimitDisparity;                              //@synthesize nearLimitDisparity=_nearLimitDisparity - In the implementation block
@property (nonatomic,readonly) float midLimitDisparity;                               //@synthesize midLimitDisparity=_midLimitDisparity - In the implementation block
@property (nonatomic,readonly) SCD_Struct_St15 auxiliaryPaddingHInv;                  //@synthesize auxiliaryPaddingHInv=_auxiliaryPaddingHInv - In the implementation block
@property (nonatomic,readonly) SCD_Struct_St15 rectReferenceToReference;              //@synthesize rectReferenceToReference=_rectReferenceToReference - In the implementation block
@property (nonatomic,readonly) SCD_Struct_St15 rectReferenceToAuxiliary;              //@synthesize rectReferenceToAuxiliary=_rectReferenceToAuxiliary - In the implementation block
@property (nonatomic,readonly) SCD_Struct_St15 referenceToRectReference;              //@synthesize referenceToRectReference=_referenceToRectReference - In the implementation block
-(void)dealloc;
-(void)releaseResources;
-(BOOL)_computeAdcDistortionModels;
-(int)_computeCenteredRectificationHomographies;
-(int)_computePaddedAuxiliaryRectificationHomography;
-(int)allocateResourcesForMaxNumPoints:(unsigned)arg1 ;
-(int)extractParametersFromOptions:(id)arg1 adaptiveCorrectionConfig:(AdaptiveCorrectionConfig)arg2 ;
-(int)extractParametersFromReferenceMetadata:(id)arg1 auxiliaryMetadata:(id)arg2 useReferenceFrame:(BOOL)arg3 ;
-(int)computeInitialCalibration;
-(int)computeCalibration;
-(float)referenceMagnification;
-(void)setKeypointsForReference:(double*)arg1 auxiliary:(double*)arg2 keypointCount:(unsigned)arg3 ;
-(DistortionModel)distModelFor:(int)arg1 ;
-(DistortionModel)undistModelFor:(int)arg1 ;
-(void)setBufferDimensions:(SCD_Struct_Ca19)arg1 forBufferType:(int)arg2 ;
-(int)computeStereoRectificationHomographies:;
-(CalModel)correctedCalibration;
-()orientationVector;
-(void)setOrientationVector:;
-(float)nearLimitDisparity;
-(float)midLimitDisparity;
-(SCD_Struct_St15)auxiliaryPaddingHInv;
-(SCD_Struct_St15)rectReferenceToReference;
-(SCD_Struct_St15)rectReferenceToAuxiliary;
-(SCD_Struct_St15)referenceToRectReference;
@end

