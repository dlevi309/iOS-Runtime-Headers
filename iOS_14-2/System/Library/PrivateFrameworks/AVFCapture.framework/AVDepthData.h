/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVDepthDataInternal, NSArray, AVCameraCalibrationData;

@interface AVDepthData : NSObject {

	AVDepthDataInternal* _internal;

}

@property (readonly) NSArray * availableDepthDataTypes; 
@property (readonly) unsigned depthDataType; 
@property (readonly) CVBufferRef depthDataMap; 
@property (readonly) long long depthDataQuality; 
@property (getter=isDepthDataFiltered,readonly) BOOL depthDataFiltered; 
@property (readonly) long long depthDataAccuracy; 
@property (readonly) AVCameraCalibrationData * cameraCalibrationData; 
+(void)initialize;
+(id)_allSupportedDepthDataPixelFormatTypes;
+(id)depthDataFromDictionaryRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)debugDescription;
-(id)description;
-(float)portraitLightingEffectStrength;
-(float)depthBlurEffectSimulatedAperture;
-(id)depthBlurEffectRenderingParameters;
-(BOOL)portraitScoreIsHigh;
-(NSArray *)availableDepthDataTypes;
-(CVBufferRef)_copyPixelBufferRepresentationWithPixelFormatType:(unsigned)arg1 ;
-(short)depthDataVersionMajor;
-(short)depthDataVersionMinor;
-(long long)depthDataQuality;
-(id)depthDataByApplyingExifOrientation:(unsigned)arg1 ;
-(unsigned)depthDataType;
-(id)depthDataByConvertingToDepthDataType:(unsigned)arg1 ;
-(CVBufferRef)depthDataMap;
-(id)depthDataByReplacingDepthDataMapWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
-(long long)depthDataAccuracy;
-(float)portraitScore;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 depthMetadataDictionary:(id)arg2 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 auxiliaryMetadata:(CGImageMetadataRef)arg2 ;
-(AVCameraCalibrationData *)cameraCalibrationData;
-(BOOL)isDepthDataFiltered;
-(CGImageMetadataRef)copyAuxiliaryMetadata;
-(CFStringRef)auxiliaryImageType;
-(void)dealloc;
@end

