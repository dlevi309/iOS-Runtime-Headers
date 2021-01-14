/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMZoomSliderDelegate <NSObject>
@optional
-(void)willShowZoomSlider:(id)arg1 withAnimationDuration:(double)arg2;
-(void)willHideZoomSlider:(id)arg1 withAnimationDuration:(double)arg2;

@required
-(void)zoomSliderDidEndZooming:(id)arg1;
-(void)zoomSliderDidEndAutozooming:(id)arg1;
-(void)zoomSliderDidBeginAutozooming:(id)arg1;

@end

