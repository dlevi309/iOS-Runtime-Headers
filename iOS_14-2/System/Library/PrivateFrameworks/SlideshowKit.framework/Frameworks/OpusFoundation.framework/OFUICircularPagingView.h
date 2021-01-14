/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateLayout;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<OFUICircularPagingViewDelegate>)delegate;
-(void)didRotate;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)commonInit;
-(void)setDelegate:(id<OFUICircularPagingViewDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)reloadData;
-(id)initWithCoder:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)dealloc;
-(CGRect)_frameForScrollView;
-(void)setCircularPagingViewController:(OFUICircularPagingViewController *)arg1 ;
-(void)willAnimateRotation;
-(CGRect)_frameForPageAtIndex:(unsigned long long)arg1 ;
-(id)pagingViewAtIndex:(unsigned long long)arg1 ;
-(OFUICircularPagingViewController *)circularPagingViewController;
@end

