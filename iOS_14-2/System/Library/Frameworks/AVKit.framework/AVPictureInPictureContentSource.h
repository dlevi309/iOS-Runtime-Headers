/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

@class UIWindow;


@protocol AVPictureInPictureContentSource <NSObject>
@property (nonatomic,readonly) CGRect avkit_videoRectInWindow; 
@property (nonatomic,readonly) BOOL avkit_isVisible; 
@property (nonatomic,readonly) UIWindow * avkit_window; 
@required
-(UIWindow *)avkit_window;
-(CGRect)avkit_videoRectInWindow;
-(id)avkit_makePlayerControllerIfNeeded:(id)arg1;
-(id)avkit_pictureInPictureViewController;
-(void)avkit_startRoutingVideoToPictureInPictureViewController:(id)arg1;
-(void)avkit_stopRoutingVideoToPictureInPictureViewController:(id)arg1;
-(BOOL)avkit_isVisible;
-(void)avkit_beginReducingResourcesForPictureInPictureViewController:(id)arg1 playerController:(id)arg2;
-(void)avkit_endReducingResourcesForPictureInPictureViewController:(id)arg1 playerController:(id)arg2;
-(void)avkit_willBeginStoppingPictureInPictureForPictureInPictureViewController:(id)arg1;

@end

