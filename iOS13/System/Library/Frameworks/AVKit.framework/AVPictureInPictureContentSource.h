/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

@class UIWindow;


@protocol AVPictureInPictureContentSource <NSObject>
@property (nonatomic,readonly) CGRect avkit_videoRectInWindow; 
@property (nonatomic,readonly) BOOL avkit_isVisible; 
@property (nonatomic,readonly) UIWindow * avkit_window; 
@required
-(id)avkit_makePlayerControllerIfNeeded:(id)arg1;
-(id)avkit_pictureInPictureViewController;
-(void)avkit_startRoutingVideoToPictureInPictureViewController:(id)arg1;
-(void)avkit_stopRoutingVideoToPictureInPictureViewController:(id)arg1;
-(CGRect)avkit_videoRectInWindow;
-(BOOL)avkit_isVisible;
-(UIWindow *)avkit_window;

@end

