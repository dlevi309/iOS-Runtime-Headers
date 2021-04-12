/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol BWPreviewTimeMachineProcessor <NSObject>
@property (readonly) SCD_Struct_BW10 frameDimensions; 
@required
-(void)resume;
-(SCD_Struct_BW10)frameDimensions;
-(void)detectMotionOnStoredFramesWithSmartCameraDiagnostics:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)suspendWithPTSRange:(SCD_Struct_BW11)arg1 completionHandler:(/*^block*/id)arg2;

@end

