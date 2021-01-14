/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIPinchGestureRecognizer.h>

@class UIScrollView;

@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer {

	UIScrollView* _scrollView;
	SEL _scrollViewAction;
	unsigned _hasParentScrollView : 1;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)_analyticsIsGestureHandled;
-(double)_hysteresis;
-(void)_transformChangedWithEvent:(id)arg1 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(UIScrollView *)scrollView;
@end

