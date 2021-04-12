/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <AVKit/AVHomeIPCameraBehavior.h>
#import <libobjc.A.dylib/HFCameraClipScrubbing.h>

@protocol HUCameraPlayerAVBehaviorDelegate;
@class NSString;

@interface HUCameraPlayerAVBehavior : AVHomeIPCameraBehavior <HFCameraClipScrubbing> {

	id<HUCameraPlayerAVBehaviorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HUCameraPlayerAVBehaviorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<HUCameraPlayerAVBehaviorDelegate>)delegate;
-(void)setDelegate:(id<HUCameraPlayerAVBehaviorDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)beginScrubbing;
-(void)pictureInPictureActionButtonTapped;
-(void)playbackControlsDidChangePlayerVolume:(float)arg1 ;
-(void)playbackControlsDidToggleMuted:(BOOL)arg1 ;
-(void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)arg1 ;
-(void)endScrubbingWithTargetTime:(double)arg1 ;
-(void)scrubToTime:(double)arg1 ;
@end

