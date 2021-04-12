/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SBLockOverlayView *)overlayView;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 overlayView:(id)arg2 ;
@end

