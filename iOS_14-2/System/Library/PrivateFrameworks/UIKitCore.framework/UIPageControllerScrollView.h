/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UIPageController;

@interface UIPageControllerScrollView : UIScrollView {

	UIPageController* _pageController;

}

@property (assign,nonatomic) UIPageController * pageController;              //@synthesize pageController=_pageController - In the implementation block
-(UIPageController *)pageController;
-(void)setBounds:(CGRect)arg1 ;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)setPageController:(UIPageController *)arg1 ;
-(unsigned long long)_abuttedPagingEdges;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2 ;
-(void)_scrollViewWillBeginDragging;
-(void)_scrollViewDidEndDecelerating;
@end

