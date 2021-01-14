/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(void)_setContentSizePreservingContentOffsetDuringRubberband:(CGSize)arg1 ;
-(BOOL)_contentInsetAdjustmentBehaviorWasExternallyOverridden;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id)delegate;
-(void)_updateZoomability;
-(UIEdgeInsets)_systemContentInset;
-(void)_updateScrollability;
-(WKWebView*<UIScrollViewDelegate>)internalDelegate;
-(void)_updateDelegate;
-(void)setDelegate:(id)arg1 ;
-(void)_setContentInsetAdjustmentBehaviorInternal:(long long)arg1 ;
-(void)_setZoomEnabledInternal:(BOOL)arg1 ;
-(void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(BOOL)arg2 lastAdjustment:(double*)arg3 ;
-(void)_setScrollEnabledInternal:(BOOL)arg1 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(CGSize)_currentTopLeftRubberbandAmount;
-(void)setContentInsetAdjustmentBehavior:(long long)arg1 ;
-(void)setInternalDelegate:(WKWebView*<UIScrollViewDelegate>)arg1 ;
-(double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(BOOL*)arg5 ;
-(void)_restoreContentOffsetWithRubberbandAmount:(CGSize)arg1 ;
-(void)dealloc;
@end

