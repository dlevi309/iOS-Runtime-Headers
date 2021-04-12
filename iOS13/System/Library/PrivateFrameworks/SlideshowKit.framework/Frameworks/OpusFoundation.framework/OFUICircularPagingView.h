/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol OFUICircularPagingViewDelegate;
@class OFUICircularPagingViewController, UIScrollView, UIView, NSString;

@interface OFUICircularPagingView : OFUIView <UIScrollViewDelegate> {

	double _gapBetweenPages;
	OFUICircularPagingViewController* _circularPagingViewController;
	id<OFUICircularPagingViewDelegate> _delegate;
	UIScrollView* _scrollView;
	UIView* _previousPagingView;
	UIView* _currentPagingView;
	UIView* _nextPagingView;
	BOOL _rotationInProgress;
	BOOL _scrollViewIsMoving;

}

@property (assign,nonatomic) OFUICircularPagingViewController * circularPagingViewController;              //@synthesize circularPagingViewController=_circularPagingViewController - In the implementation block
@property (assign,nonatomic) id<OFUICircularPagingViewDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<OFUICircularPagingViewDelegate>)delegate;
-(void)setDelegate:(id<OFUICircularPagingViewDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)commonInit;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)reloadData;
-(void)_updateLayout;
-(void)didRotate;
-(void)setCircularPagingViewController:(OFUICircularPagingViewController *)arg1 ;
-(void)willAnimateRotation;
-(CGRect)_frameForScrollView;
-(CGRect)_frameForPageAtIndex:(unsigned long long)arg1 ;
-(id)pagingViewAtIndex:(unsigned long long)arg1 ;
-(OFUICircularPagingViewController *)circularPagingViewController;
@end

