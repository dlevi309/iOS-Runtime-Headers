/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIPageViewController, _UIQueuingScrollView, UIPageControl;

@interface _UIPageViewControllerContentView : UIView {

	UIPageViewController* _pageViewController;
	_UIQueuingScrollView* _scrollView;
	UIPageControl* _pageControl;

}

@property (nonatomic,readonly) _UIQueuingScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UIPageControl * pageControl;                    //@synthesize pageControl=_pageControl - In the implementation block
-(BOOL)canBecomeFocused;
-(id)preferredFocusedView;
-(double)_pageSpacing;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 andPageViewController:(id)arg2 ;
-(void)invalidatePageViewController;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)_scrollViewFrame;
-(UIPageControl *)pageControl;
-(void)_setupPageControl:(id)arg1 ;
-(_UIQueuingScrollView *)scrollView;
@end

