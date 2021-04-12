/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
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
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(unsigned)depthDataType;
-(id)depthDataByConvertingToDepthDataType:(unsigned)arg1 ;
-(id)depthDataByReplacingDepthDataMapWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(CVBufferRef)depthDataMap;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
-(AVCameraCalibrationData *)cameraCalibrationData;
-(long long)depthDataAccuracy;
-(float)portraitScore;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 auxiliaryMetadata:(CGImageMetadataRef)arg2 ;
-(CGImageMetadataRef)copyAuxiliaryMetadata;
-(CFStringRef)auxiliaryImageType;
-(BOOL)isDepthDataFiltered;
-(float)portraitLightingEffectStrength;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 depthMetadataDictionary:(id)arg2 ;
-(float)depthBlurEffectSimulatedAperture;
-(id)depthBlurEffectRenderingParameters;
-(BOOL)portraitScoreIsHigh;
-(NSArray *)availableDepthDataTypes;
-(CVBufferRef)_copyPixelBufferRepresentationWithPixelFormatType:(unsigned)arg1 ;
-(short)depthDataVersionMajor;
-(short)depthDataVersionMinor;
-(long long)depthDataQuality;
-(id)depthDataByApplyingExifOrientation:(unsigned)arg1 ;
@end

