/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol BWDeferredProcessorControllerDelegate <BWStillImageProcessorControllerDelegate>
@required
-(void)processorController:(id)arg1 didDetermineReferenceFrame:(opaqueCMSampleBufferRef)arg2 processorInput:(id)arg3 err:(int)arg4;
-(void)processorController:(id)arg1 didProcessInferencesForSkinMask:(const void*)arg2 personMask:(const void*)arg3 faceObservations:(id)arg4 processorInput:(id)arg5 err:(int)arg6;

@end

