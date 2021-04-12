/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface CFXFaceTrackingUtilities : NSObject
+(CGSize)faceRectScaleFactorForInterfaceOrientation:(long long)arg1 andDeviceInterfaceOrientation:(long long)arg2 ;
+(BOOL)isFaceAnchorInRange:(id)arg1 ;
+(CGSize)renderSizeForBufferSize:(CGSize)arg1 orientation:(long long)arg2 ;
+(SCD_Struct_JT9)adjustIntrinsics:(SCD_Struct_JT9)arg1 forRenderSize:(CGSize)arg2 capturedSize:(CGSize)arg3 interfaceOrientation:(long long)arg4 ;
+(CGSize)planeSizeInModelSpaceWithFaceAnchor:(id)arg1 bufferSize:(CGSize)arg2 ;
+(SCNVector3)pointOnFaceMesh;
+(BOOL)inputBufferIsLandscapeAspect:(CGSize)arg1 ;
+(SCD_Struct_JT12)CFX_projectionMatrixWithFaceAnchor:(id)arg1 bufferSize:(CGSize)arg2 ;
+(SCNVector3)CFX_modelPointFromCompositionPoint:(CGPoint)arg1 withFaceAnchor:(id)arg2 bufferSize:(CGSize)arg3 ;
+(SCNVector3)CFX_screenPointFromModelPoint:(SCNVector3)arg1 withFaceAnchor:(id)arg2 locatedOnFace:(BOOL)arg3 bufferSize:(CGSize)arg4 ;
+(double)maxCameraToFaceDistance;
+(CGPoint)compositionPointFromScreenPoint:(CGPoint)arg1 locatedOnFace:(BOOL)arg2 withFaceAnchor:(id)arg3 bufferSize:(CGSize)arg4 ;
+(CGPoint)screenPointFromCompositionPoint:(CGPoint)arg1 locatedOnFace:(BOOL)arg2 withFaceAnchor:(id)arg3 bufferSize:(CGSize)arg4 ;
+(CGRect)screenRectOfFaceWithFaceAnchor:(id)arg1 bufferSize:(CGSize)arg2 ;
@end

