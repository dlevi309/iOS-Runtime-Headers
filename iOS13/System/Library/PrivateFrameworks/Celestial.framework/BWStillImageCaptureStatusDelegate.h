/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol BWStillImageCaptureStatusDelegate <NSObject>
@required
-(void)stillImageCoordinator:(id)arg1 willBeginCaptureForSettings:(id)arg2 resolvedCaptureSettings:(id)arg3 photoManifest:(id)arg4;
-(void)stillImageCoordinator:(id)arg1 willCapturePhotoForSettings:(id)arg2 sisActive:(BOOL)arg3 error:(int)arg4;
-(void)stillImageCoordinator:(id)arg1 didResolveStillImagePTS:(SCD_Struct_BW2)arg2 forSettings:(id)arg3 resolvedCaptureSettings:(id)arg4 isPreBracketedEV0:(BOOL)arg5;
-(void)stillImageCoordinator:(id)arg1 didSelectNewReferenceFrameWithPTS:(SCD_Struct_BW2)arg2 transform:(id)arg3 forSettings:(id)arg4;
-(void)stillImageCoordinator:(id)arg1 didCapturePhotoForSettings:(id)arg2;
-(void)stillImageCoordinator:(id)arg1 willPrepareStillImageCaptureWithSettings:(id)arg2 clientInitiated:(BOOL)arg3;
-(void)stillImageCoordinator:(id)arg1 didCancelMomentCaptureForSettingsID:(long long)arg2 streamingDisruptionEndPTS:(SCD_Struct_BW2)arg3;

@end

