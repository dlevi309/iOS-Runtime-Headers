/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol PVEffectTransformable
@required
-(void)setTransform:(id)arg1;
-(id)cameraTransform;
-(PVCGPointQuad*)cornersAtTime:(SCD_Struct_PV22)arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 scale:(CGPoint)arg4 viewSize:(CGSize)arg5 viewOrigin:(int)arg6;
-(BOOL)bounds:(CGRect*)arg1 atTime:(SCD_Struct_PV22)arg2 forcePosterFrame:(BOOL)arg3 includeDropShadow:(BOOL)arg4 includeMasks:(BOOL)arg5;
-(id)transformAtTime:(SCD_Struct_PV22)arg1 forcePosterFrame:(BOOL)arg2 includeTransformAnimation:(BOOL)arg3 viewSize:(CGSize)arg4 viewOrigin:(int)arg5;
-(id)cameraProjection;
-(id)transformAtTime:(SCD_Struct_PV22)arg1 forcePosterFrame:(BOOL)arg2 viewSize:(CGSize)arg3 viewOrigin:(int)arg4;
-(void)setTopLevelGroupTransform:(id)arg1;
-(void)enableCameraOverride:(id)arg1 projection:(id)arg2;
-(void)disableCameraOverride;
-(BOOL)isCameraOverrideEnabled;

@end

