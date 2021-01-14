/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <SiriUI/_SiriUIContentPlatterScrollViewDelegate.h>
#import <SiriUI/SiriUIDarkening.h>

@protocol SiriUIContentPlatterViewDelegate;
@class NSArray, SiriUIPanDismissalGestureRecognizer, _SiriUIContentPlatterScrollView, SiriUIContentPlatterDarkenMaskView, PLPlatterView, NSString;

@interface SiriUIContentPlatterView : UIView <UIScrollViewDelegate, _SiriUIContentPlatterScrollViewDelegate, SiriUIDarkening> {

	BOOL _platterNeedsLayout;
	BOOL _shouldAllowDismissalWhileScrollable;
	id<SiriUIContentPlatterViewDelegate> _delegate;
	NSArray* _contentViews;
	SiriUIPanDismissalGestureRecognizer* _dismissalGestureRecognizer;
	_SiriUIContentPlatterScrollView* _scrollView;
	SiriUIContentPlatterDarkenMaskView* _darkenMaskView;
	double _currentContentOffset;
	PLPlatterView* _platterView;
	UIEdgeInsets _contentInsets;

}

@property (getter=_scrollView,nonatomic,retain) _SiriUIContentPlatterScrollView * scrollView;                                                                                  //@synthesize scrollView=_scrollView - In the implementation block
@property (getter=_darkenMaskView,nonatomic,retain) SiriUIContentPlatterDarkenMaskView * darkenMaskView;                                                                       //@synthesize darkenMaskView=_darkenMaskView - In the implementation block
@property (assign,setter=_setPlatterNeedsLayout:,getter=_platterNeedsLayout,nonatomic) BOOL platterNeedsLayout;                                                                //@synthesize platterNeedsLayout=_platterNeedsLayout - In the implementation block
@property (assign,setter=_setShouldAllowDismissalWhileScrollable:,getter=_shouldAllowDismissalWhenScrollable,nonatomic) BOOL shouldAllowDismissalWhileScrollable;              //@synthesize shouldAllowDismissalWhileScrollable=_shouldAllowDismissalWhileScrollable - In the implementation block
@property (assign,setter=_setCurrentContentOffset:,getter=_currentContentOffset,nonatomic) double currentContentOffset;                                                        //@synthesize currentContentOffset=_currentContentOffset - In the implementation block
@property (nonatomic,retain) PLPlatterView * platterView;                                                                                                                      //@synthesize platterView=_platterView - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIContentPlatterViewDelegate> delegate;                                                                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * contentViews;                                                                                                                           //@synthesize contentViews=_contentViews - In the implementation block
@property (assign,getter=isScrollEnabled,nonatomic) BOOL scrollEnabled; 
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                                                                                                       //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) SiriUIPanDismissalGestureRecognizer * dismissalGestureRecognizer;                                                                                 //@synthesize dismissalGestureRecognizer=_dismissalGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double darkenIntensity; 
-(BOOL)isScrollEnabled;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(id)_scrollView;
-(PLPlatterView *)platterView;
-(NSArray *)contentViews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentViews:(NSArray *)arg1 ;
-(void)setPlatterView:(PLPlatterView *)arg1 ;
-(id<SiriUIContentPlatterViewDelegate>)delegate;
-(UIEdgeInsets)contentInsets;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)setDelegate:(id<SiriUIContentPlatterViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setScrollView:(_SiriUIContentPlatterScrollView *)arg1 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setNeedsLayout;
-(BOOL)shouldAllowSimultaneousGestureRecognizersForScrollView:(id)arg1 ;
-(void)_setPlatterNeedsLayout:(BOOL)arg1 ;
-(BOOL)_platterNeedsLayout;
-(void)_updateContentFullyScrolled;
-(id)_darkenMaskView;
-(double)darkenIntensity;
-(double)_currentContentOffset;
-(SiriUIPanDismissalGestureRecognizer *)dismissalGestureRecognizer;
-(void)_setShouldAllowDismissalWhileScrollable:(BOOL)arg1 ;
-(void)_setCurrentContentOffset:(double)arg1 ;
-(BOOL)_shouldAllowDismissalWhenScrollable;
-(void)setDarkenIntensity:(double)arg1 ;
-(void)setDismissalGestureRecognizer:(SiriUIPanDismissalGestureRecognizer *)arg1 ;
-(id)contentPlatterScrollView;
-(void)setDarkenMaskView:(SiriUIContentPlatterDarkenMaskView *)arg1 ;
@end

