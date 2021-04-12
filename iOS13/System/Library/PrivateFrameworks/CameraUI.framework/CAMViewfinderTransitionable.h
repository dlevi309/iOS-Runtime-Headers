/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

@class CAMPreviewView;


@protocol CAMViewfinderTransitionable
@property (nonatomic,readonly) CAMPreviewView * previewView; 
@property (nonatomic,readonly) long long desiredAspectRatio; 
@required
-(CAMPreviewView *)previewView;
-(void)removeInflightBlurAnimations;
-(void)prepareForResumingUsingCrossfade;
-(long long)desiredAspectRatio;

@end

