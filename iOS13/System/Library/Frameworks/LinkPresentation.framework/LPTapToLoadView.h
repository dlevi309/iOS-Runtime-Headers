/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol LPTapToLoadViewDelegate;
@class LPTextView, UIView, LPTapToLoadViewStyle, UILongPressGestureRecognizer, NSString;

@interface LPTapToLoadView : LPComponentView <CAAnimationDelegate, UIGestureRecognizerDelegate> {

	LPTextView* _captionView;
	UIView* _progressView;
	LPTapToLoadViewStyle* _style;
	UIView* _highlightView;
	UILongPressGestureRecognizer* _highlightGestureRecognizer;
	BOOL _wasTapped;
	/*^block*/id _animateOutCompletionHandler;
	id<LPTapToLoadViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<LPTapToLoadViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<LPTapToLoadViewDelegate>)delegate;
-(void)setDelegate:(id<LPTapToLoadViewDelegate>)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(id)arg1 ;
-(void)_didScroll;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2 ;
-(void)_highlightLongPressRecognized:(id)arg1 ;
-(void)_tapRecognized:(id)arg1 ;
-(void)layoutComponentView;
-(void)animateOutWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_buildViews;
-(id)_createIndeterminateProgressIndicator;
-(void)_animateToProgressView;
@end

