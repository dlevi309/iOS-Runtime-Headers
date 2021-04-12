/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMSuggestionDelegate <NSObject>
@required
-(void)captureController:(id)arg1 didOutputFlashActive:(BOOL)arg2;
-(void)captureController:(id)arg1 didOutputTorchActive:(BOOL)arg2;
-(void)captureController:(id)arg1 didOutputHDRSuggestion:(BOOL)arg2;
-(void)captureController:(id)arg1 didOutputLowLightStatus:(long long)arg2;
-(void)captureController:(id)arg1 didOutputLowLightModeDurationMapping:(CGSize)arg2;

@end

