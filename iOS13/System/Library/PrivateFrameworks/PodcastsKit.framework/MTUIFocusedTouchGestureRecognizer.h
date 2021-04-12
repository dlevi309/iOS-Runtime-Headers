/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/PodcastsKit-Structs.h>
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
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(UIView *)focusedView;
-(id)initWithFocusedView:(id)arg1 touchAllowance:(UIEdgeInsets)arg2 ;
-(UIEdgeInsets)touchAllowance;
-(void)setTouchAllowance:(UIEdgeInsets)arg1 ;
@end

