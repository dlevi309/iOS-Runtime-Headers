/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVTouchIgnoringView.h>

@protocol AVContentOverlayViewDelegate;
@interface AVContentOverlayView : AVTouchIgnoringView {

	id<AVContentOverlayViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AVContentOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didRemoveSubview:(id)arg1 ;
-(id<AVContentOverlayViewDelegate>)delegate;
-(void)setDelegate:(id<AVContentOverlayViewDelegate>)arg1 ;
-(void)didAddSubview:(id)arg1 ;
@end

