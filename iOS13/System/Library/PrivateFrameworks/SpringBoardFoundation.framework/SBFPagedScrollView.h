/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <BaseBoardUI/BSUIScrollView.h>

@class NSArray;

@interface SBFPagedScrollView : BSUIScrollView {

	BOOL _changingScrollViewLayout;
	BOOL _gestureEnabled;
	NSArray* _pageViews;
	unsigned long long _currentPageIndex;
	NSRange _visiblePageRange;

}

@property (assign,nonatomic) unsigned long long currentPageIndex;              //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (assign,nonatomic) NSRange visiblePageRange;                         //@synthesize visiblePageRange=_visiblePageRange - In the implementation block
@property (nonatomic,copy) NSArray * pageViews;                                //@synthesize pageViews=_pageViews - In the implementation block
@property (assign,nonatomic) BOOL gestureEnabled;                              //@synthesize gestureEnabled=_gestureEnabled - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)layoutSubviews;
-(NSArray *)pageViews;
-(void)setPageViews:(NSArray *)arg1 ;
-(unsigned long long)currentPageIndex;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(void)_bs_didScrollWithContext:(SCD_Struct_SB1)arg1 ;
-(void)_bs_willBeginScrolling;
-(void)_bs_didEndScrolling;
-(void)_layoutScrollView;
-(void)_updateVisiblePages;
-(void)layoutPages;
-(BOOL)resetContentOffsetToCurrentPage;
-(BOOL)scrollToPageAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(CGPoint)contentOffsetForPageAtIndex:(unsigned long long)arg1 ;
-(void)_updateCurrentPageForScrollOffset;
-(double)unclippedPageRelativeScrollOffset;
-(void)setVisiblePageRange:(NSRange)arg1 ;
-(SCD_Struct_SB3)currentScrollInterval;
-(void)setGestureEnabled:(BOOL)arg1 ;
-(BOOL)scrollToPageAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)scrollToPageAtIndex:(unsigned long long)arg1 withAnimationSettings:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(double)pageRelativeScrollOffset;
-(NSRange)visiblePageRange;
-(BOOL)gestureEnabled;
@end

