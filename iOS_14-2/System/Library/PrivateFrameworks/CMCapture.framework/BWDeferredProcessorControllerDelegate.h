/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWDeferredProcessorControllerDelegate <BWStillImageProcessorControllerDelegate>
@required
-(void)processorController:(id)arg1 didDetermineReferenceFrame:(opaqueCMSampleBufferRef)arg2 processorInput:(id)arg3 err:(int)arg4;
-(void)processorController:(id)arg1 didProcessInferencesForSkinMask:(const void*)arg2 skyMask:(const void*)arg3 personMask:(const void*)arg4 faceObservations:(id)arg5 processorInput:(id)arg6 err:(int)arg7;

@end

