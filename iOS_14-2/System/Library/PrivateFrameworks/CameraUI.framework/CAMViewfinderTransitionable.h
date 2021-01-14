/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

@class CAMPreviewView;


@protocol CAMViewfinderTransitionable
@property (nonatomic,readonly) CAMPreviewView * previewView; 
@property (nonatomic,readonly) long long desiredAspectRatio; 
@required
-(long long)desiredAspectRatio;
-(CAMPreviewView *)previewView;
-(void)removeInflightBlurAnimations;
-(void)prepareForResumingUsingCrossfade;

@end

