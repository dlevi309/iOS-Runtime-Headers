/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIScrollView.h>

@protocol UIScrollViewDelegate;
@class WKScrollViewDelegateForwarder, WKWebView;

@interface WKScrollView : UIScrollView {

	WeakObjCPtr<id<UIScrollViewDelegate> > _externalDelegate;
	WKScrollViewDelegateForwarder* _delegateForwarder;
	BOOL _contentInsetAdjustmentBehaviorWasExternallyOverridden;
	double _keyboardBottomInsetAdjustment;
	BOOL _scrollEnabledByClient;
	BOOL _scrollEnabledInternal;
	BOOL _zoomEnabledByClient;
	BOOL _zoomEnabledInternal;
	WKWebView*<UIScrollViewDelegate> _internalDelegate;

}

@property (assign,nonatomic) WKWebView*<UIScrollViewDelegate> internalDelegate;                          //@synthesize internalDelegate=_internalDelegate - In the implementation block
@property (nonatomic,readonly) BOOL _contentInsetAdjustmentBehaviorWasExternallyOverridden; 
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)setContentInsetAdjustmentBehavior:(long long)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(BOOL)arg2 lastAdjustment:(double*)arg3 ;
-(UIEdgeInsets)_systemContentInset;
-(double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(BOOL*)arg5 ;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(BOOL)_contentInsetAdjustmentBehaviorWasExternallyOverridden;
-(void)_setContentInsetAdjustmentBehaviorInternal:(long long)arg1 ;
-(WKWebView*<UIScrollViewDelegate>)internalDelegate;
-(void)setInternalDelegate:(WKWebView*<UIScrollViewDelegate>)arg1 ;
-(void)_setScrollEnabledInternal:(BOOL)arg1 ;
-(void)_setContentSizePreservingContentOffsetDuringRubberband:(CGSize)arg1 ;
-(void)_setZoomEnabledInternal:(BOOL)arg1 ;
-(void)_updateDelegate;
-(CGSize)_currentTopLeftRubberbandAmount;
-(void)_restoreContentOffsetWithRubberbandAmount:(CGSize)arg1 ;
-(void)_updateScrollability;
-(void)_updateZoomability;
@end

