/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UIPageController;

@interface UIPageControllerScrollView : UIScrollView {

	UIPageController* _pageController;

}

@property (assign,nonatomic) UIPageController * pageController;              //@synthesize pageController=_pageController - In the implementation block
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1 ;
-(void)_scrollViewWillBeginDragging;
-(void)_scrollViewDidEndDecelerating;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2 ;
-(unsigned long long)_abuttedPagingEdges;
-(UIPageController *)pageController;
-(void)setPageController:(UIPageController *)arg1 ;
@end

