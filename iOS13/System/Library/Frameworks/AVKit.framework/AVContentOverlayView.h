/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVTouchIgnoringView.h>

@protocol AVContentOverlayViewDelegate;
@interface AVContentOverlayView : AVTouchIgnoringView {

	id<AVContentOverlayViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AVContentOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AVContentOverlayViewDelegate>)delegate;
-(void)setDelegate:(id<AVContentOverlayViewDelegate>)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)_didRemoveSubview:(id)arg1 ;
@end

