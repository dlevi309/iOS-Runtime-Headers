/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIBackdropView, SBLockOverlayView;

@interface SBLoginAppContainerOverlayWrapperView : UIView {

	_UIBackdropView* _backdropView;
	SBLockOverlayView* _overlayView;

}

@property (nonatomic,readonly) SBLockOverlayView * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
-(void)layoutSubviews;
-(SBLockOverlayView *)overlayView;
-(id)initWithFrame:(CGRect)arg1 overlayView:(id)arg2 ;
@end

