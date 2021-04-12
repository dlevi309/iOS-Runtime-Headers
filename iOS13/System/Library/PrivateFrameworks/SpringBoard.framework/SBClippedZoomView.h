/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

