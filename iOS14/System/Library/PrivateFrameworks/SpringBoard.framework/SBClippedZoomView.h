/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBZoomView.h>

@class SBFullscreenZoomView, UIView;

@interface SBClippedZoomView : SBZoomView {

	SBFullscreenZoomView* _fullscreenZoomViewToClip;
	UIView* _clippingView;

}
-(id)initWithClippingFrame:(CGRect)arg1 fullscreenZoomView:(id)arg2 ;
@end

