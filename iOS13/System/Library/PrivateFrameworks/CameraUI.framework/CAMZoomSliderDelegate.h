/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMZoomSliderDelegate <NSObject>
@optional
-(void)willShowZoomSlider:(id)arg1 withAnimationDuration:(double)arg2;
-(void)willHideZoomSlider:(id)arg1 withAnimationDuration:(double)arg2;

@required
-(void)zoomSliderDidBeginAutozooming:(id)arg1;
-(void)zoomSliderDidEndAutozooming:(id)arg1;
-(void)zoomSliderDidEndZooming:(id)arg1;

@end

