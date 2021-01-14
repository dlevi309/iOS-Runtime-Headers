/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PHVideoScrubberViewInteractionDelegate.h>

@class PHVideoScrubberView, UIScrollView, NSString;

@interface QLVideoScrubberView : UIView <PHVideoScrubberViewInteractionDelegate> {

	BOOL _userInteractingWithScrubber;
	BOOL _touchGestureIsActive;
	PHVideoScrubberView* _photosScrubber;

}

@property (assign,nonatomic) BOOL touchGestureIsActive;                                         //@synthesize touchGestureIsActive=_touchGestureIsActive - In the implementation block
@property (getter=isUserInteractingWithScrubber) BOOL userInteractingWithScrubber;              //@synthesize userInteractingWithScrubber=_userInteractingWithScrubber - In the implementation block
@property (readonly) UIScrollView * scrollView; 
@property (readonly) PHVideoScrubberView * photosScrubber;                                      //@synthesize photosScrubber=_photosScrubber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)videoScrubberView:(id)arg1 didEndDeceleratingInScrollView:(id)arg2 ;
-(void)videoScrubberView:(id)arg1 willBeginDeceleratingInScrollView:(id)arg2 ;
-(void)videoScrubberView:(id)arg1 didEndDraggingInScrollView:(id)arg2 ;
-(void)videoScrubberView:(id)arg1 willBeginDraggingInScrollView:(id)arg2 ;
-(void)didEndTouchingVideoScrubberView:(id)arg1 ;
-(void)didBeginTouchingVideoScrubberView:(id)arg1 ;
-(void)setUserInteractingWithScrubber:(BOOL)arg1 ;
-(BOOL)touchGestureIsActive;
-(void)setTouchGestureIsActive:(BOOL)arg1 ;
-(BOOL)isUserInteractingWithScrubber;
-(PHVideoScrubberView *)photosScrubber;
-(void)_updateUserInteractingWithScrubberIfNeeded;
-(UIScrollView *)scrollView;
@end

