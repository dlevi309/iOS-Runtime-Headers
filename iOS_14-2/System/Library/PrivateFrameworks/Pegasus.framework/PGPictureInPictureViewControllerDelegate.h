/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/


@protocol PGPictureInPictureViewControllerDelegate <NSObject>
@required
-(void)pictureInPictureViewController:(id)arg1 updateHostedWindowSize:(CGSize)arg2 animationType:(long long)arg3 initialSpringVelocity:(double)arg4;
-(void)pictureInPictureViewControllerHostedWindowSizeChangeBegan:(id)arg1;
-(void)pictureInPictureViewControllerHostedWindowSizeChangeEnded:(id)arg1;
-(void)pictureInPictureViewController:(id)arg1 didReceiveCommand:(id)arg2;
-(void)pictureInPictureViewController:(id)arg1 didTransitionToStashed:(BOOL)arg2 shouldBeginOrEndInterruption:(BOOL)arg3;

@end

