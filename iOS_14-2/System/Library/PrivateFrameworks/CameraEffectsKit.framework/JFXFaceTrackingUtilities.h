/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface JFXFaceTrackingUtilities : NSObject
+(SCD_Struct_JF13)adjustIntrinsics:(SCD_Struct_JF13)arg1 forRenderSize:(CGSize)arg2 capturedSize:(CGSize)arg3 interfaceOrientation:(long long)arg4 ;
+(id)JFX_faceAnchorWithFaceAnchor:(id)arg1 forInterfaceOrientation:(long long)arg2 ;
+(SCD_Struct_JF14)JFX_projectionMatrixWithFaceAnchor:(id)arg1 bufferSize:(CGSize)arg2 ;
+(CGRect)screenRectOfFaceWithFaceAnchor:(id)arg1 atTime:(SCD_Struct_JF3)arg2 invertedY:(BOOL)arg3 bufferSize:(out CGSize*)arg4 transformAnimation:(id)arg5 interfaceOrientation:(long long)arg6 ;
+(1)pointOnFaceMesh;
+(CGRect)rectAtNormalizedPointinCenteredSquareInFaceRect:(CGPoint)arg1 atTime:(SCD_Struct_JF3)arg2 withFaceAnchor:(id)arg3 scaleRelativeToCenterSquare:(double)arg4 relativeToBounds:(CGRect)arg5 transformAnimation:(id)arg6 interfaceOrientation:(long long)arg7 ;
+(double)rollAngleFromFaceAnchor:(id)arg1 forInterfaceOrientation:(long long)arg2 ;
+(BOOL)isFaceAnchorInRange:(id)arg1 ;
+(CGSize)faceRectScaleFactorForInterfaceOrientation:(long long)arg1 andDeviceInterfaceOrientation:(long long)arg2 ;
@end

