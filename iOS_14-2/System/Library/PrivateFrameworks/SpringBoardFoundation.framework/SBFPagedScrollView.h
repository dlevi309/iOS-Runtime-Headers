/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPageViews:(NSArray *)arg1 ;
-(double)pageRelativeScrollOffset;
-(SCD_Struct_SB2)currentScrollInterval;
-(BOOL)scrollToPageAtIndex:(unsigned long long)arg1 withAnimationSettings:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(NSRange)visiblePageRange;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)scrollToPageAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(void)_layoutScrollView;
-(void)setVisiblePageRange:(NSRange)arg1 ;
-(void)_bs_willBeginScrolling;
-(void)_bs_didEndScrolling;
-(unsigned long long)currentPageIndex;
-(void)_bs_didScrollWithContext:(SCD_Struct_SB3)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)scrollToPageAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(double)unclippedPageRelativeScrollOffset;
-(void)_updateCurrentPageForScrollOffset;
-(void)_updateVisiblePages;
-(void)setGestureEnabled:(BOOL)arg1 ;
-(BOOL)resetContentOffsetToCurrentPage;
-(NSArray *)pageViews;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(CGPoint)contentOffsetForPageAtIndex:(unsigned long long)arg1 ;
-(void)layoutPages;
-(BOOL)gestureEnabled;
@end

