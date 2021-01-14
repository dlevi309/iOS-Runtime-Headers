/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/


@protocol ICDocCamDebugMovieControllerDelegate <NSObject>
@required
-(id)videoPreviewLayer;
-(long long)statusBarOrientation;
-(void)enableUIElementsForMovieRecording:(BOOL)arg1;
-(void)showErrorForMovieRecording:(id)arg1;
-(void)pauseCaptureSessionForMovieRecording;
-(void)resumeCaptureSessionForMovieRecording;
-(void)enableRecordButton:(BOOL)arg1;
-(void)changeRecordButtonTitle:(id)arg1;

@end

