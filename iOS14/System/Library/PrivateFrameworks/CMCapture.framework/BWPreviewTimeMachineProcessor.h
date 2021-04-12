/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWPreviewTimeMachineProcessor <NSObject>
@property (readonly) SCD_Struct_BW2 frameDimensions; 
@required
-(SCD_Struct_BW2)frameDimensions;
-(void)detectMotionOnStoredFramesWithSmartCameraDiagnostics:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)suspendWithPTSRange:(SCD_Struct_BW39)arg1 completionHandler:(/*^block*/id)arg2;
-(void)resume;

@end

