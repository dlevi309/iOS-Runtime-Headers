/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAllowedTouchTypes:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setAllowedPressTypes:(id)arg1 ;
-(long long)activePressType;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_setEnabledIfAllowed:(BOOL)arg1 ;
-(void)_addToViewIfAllowed:(id)arg1 ;
-(void)_resetToOriginalViewIfAllowed;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)reset;
-(UIScrollView *)scrollView;
@end

