/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIScrollView, NSArray, UIPageControl, NSTimer, NSString;

@interface UIKBTutorialMultipageView : UIView <UIScrollViewDelegate> {

	UIScrollView* _pageScrollView;
	NSArray* _pageViews;
	UIPageControl* _pageControl;
	NSTimer* _nextPageScrollTimer;
	double _pagingInterval;

}

@property (nonatomic,retain) UIScrollView * pageScrollView;              //@synthesize pageScrollView=_pageScrollView - In the implementation block
@property (nonatomic,retain) NSArray * pageViews;                        //@synthesize pageViews=_pageViews - In the implementation block
@property (nonatomic,retain) UIPageControl * pageControl;                //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,retain) NSTimer * nextPageScrollTimer;              //@synthesize nextPageScrollTimer=_nextPageScrollTimer - In the implementation block
@property (assign,nonatomic) double pagingInterval;                      //@synthesize pagingInterval=_pagingInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(double)pagingInterval;
-(UIPageControl *)pageControl;
-(void)scrollToNextPage;
-(void)configMediaView;
-(UIScrollView *)pageScrollView;
-(NSTimer *)nextPageScrollTimer;
-(void)setNextPageScrollTimer:(NSTimer *)arg1 ;
-(id)initWithPageViews:(id)arg1 pagingInterval:(double)arg2 ;
-(void)resetPageScrolling;
-(void)setPageScrollView:(UIScrollView *)arg1 ;
-(NSArray *)pageViews;
-(void)setPageViews:(NSArray *)arg1 ;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(void)setPagingInterval:(double)arg1 ;
@end

