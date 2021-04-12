/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIRepeatingPressGestureRecognizer.h>

@class UIView, UIScrollView;

@interface UIScrollViewDirectionalPressGestureRecognizer : _UIRepeatingPressGestureRecognizer {

	BOOL _hasBeenModified;
	UIView* _originalView;
	UIScrollView* _scrollView;
	long long _activePressType;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) long long activePressType;                   //@synthesize activePressType=_activePressType - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setAllowedTouchTypes:(id)arg1 ;
-(void)setAllowedPressTypes:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(long long)activePressType;
-(void)_setEnabledIfAllowed:(BOOL)arg1 ;
-(void)_addToViewIfAllowed:(id)arg1 ;
-(void)_resetToOriginalViewIfAllowed;
@end

