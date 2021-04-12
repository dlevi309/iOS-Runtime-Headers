/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUJSProxy.h>
#import <libobjc.A.dylib/NUJSDepthPropertiesExport.h>

@class NUJSAVCameraCalibrationData, NUJSCGImageMetadata;

@interface NUJSDepthProperties : NUJSProxy <NUJSDepthPropertiesExport>

@property (readonly) id<NUAuxiliaryImageProperties> depthProperties; 
@property (readonly) NUJSAVCameraCalibrationData * cameraCalibrationData; 
@property (readonly) NUJSCGImageMetadata * depthMetaData; 
-(NUJSAVCameraCalibrationData *)cameraCalibrationData;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id<NUAuxiliaryImageProperties>)depthProperties;
-(id)initWithDepthProperties:(id)arg1 context:(id)arg2 ;
-(NUJSCGImageMetadata *)depthMetaData;
@end

