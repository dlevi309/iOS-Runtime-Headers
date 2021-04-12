/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UIView;

@interface TSKScrollView : UIScrollView {

	unsigned long long mAnimatingContentOffsetCount;
	BOOL _mayPassScrollEventsToNextResponder;
	BOOL _shouldDisableScrollingWhenCursorIsHidden;
	CGRect _scrollableAreaBounds;

}

@property (assign,nonatomic) id<UIScrollViewDelegate><TSKScrollViewDelegate> delegate; 
@property (nonatomic,readonly) UIView * contentView; 
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
@property (assign,nonatomic) BOOL mayPassScrollEventsToNextResponder;                               //@synthesize mayPassScrollEventsToNextResponder=_mayPassScrollEventsToNextResponder - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableScrollingWhenCursorIsHidden;                         //@synthesize shouldDisableScrollingWhenCursorIsHidden=_shouldDisableScrollingWhenCursorIsHidden - In the implementation block
@property (nonatomic,readonly) CGRect scrollableAreaBounds;                                         //@synthesize scrollableAreaBounds=_scrollableAreaBounds - In the implementation block
@property (nonatomic,readonly) CGRect tsk_bounds; 
-(BOOL)isScrolling;
-(UIView *)contentView;
-(void)layoutSubviews;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(CGRect)visibleFrame;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(CGSize)tsk_contentSize;
-(CGRect)tsk_bounds;
-(void)hideScrollIndicators;
-(BOOL)mayPassScrollEventsToNextResponder;
-(void)setMayPassScrollEventsToNextResponder:(BOOL)arg1 ;
-(BOOL)shouldDisableScrollingWhenCursorIsHidden;
-(void)setShouldDisableScrollingWhenCursorIsHidden:(BOOL)arg1 ;
-(CGRect)scrollableAreaBounds;
@end

