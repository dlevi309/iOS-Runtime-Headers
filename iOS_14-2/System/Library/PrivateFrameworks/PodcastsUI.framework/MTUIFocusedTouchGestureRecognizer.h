/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
*/

#import <PodcastsUI/PodcastsUI-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableSet, UIView;

@interface MTUIFocusedTouchGestureRecognizer : UIGestureRecognizer {

	NSMutableSet* _activeTouches;
	BOOL _didTouchOutside;
	UIView* _focusedView;
	UIEdgeInsets _touchAllowance;

}

@property (nonatomic,readonly) UIView * focusedView;                   //@synthesize focusedView=_focusedView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets touchAllowance;              //@synthesize touchAllowance=_touchAllowance - In the implementation block
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(UIView *)focusedView;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithFocusedView:(id)arg1 touchAllowance:(UIEdgeInsets)arg2 ;
-(UIEdgeInsets)touchAllowance;
-(void)setTouchAllowance:(UIEdgeInsets)arg1 ;
@end

