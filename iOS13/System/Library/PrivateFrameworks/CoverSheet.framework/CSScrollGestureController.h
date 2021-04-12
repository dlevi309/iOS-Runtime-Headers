/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/CSEventHandling.h>

@protocol CSScrollableView, CSScrollGestureControllerDelegate;
@class UIScrollView, UIView, UIGestureRecognizer, CSHorizontalScrollFailureRecognizer, NSString;

@interface CSScrollGestureController : NSObject <UIGestureRecognizerDelegate, BSDescriptionProviding, CSEventHandling> {

	UIScrollView* _scrollView;
	UIView*<CSScrollableView> _scrollableView;
	long long _scrollingStrategy;
	UIGestureRecognizer* _scrollViewGestureRecognizer;
	id<CSScrollGestureControllerDelegate> _delegate;
	CSHorizontalScrollFailureRecognizer* _horizontalFailureGestureRecognizer;

}

@property (nonatomic,retain) CSHorizontalScrollFailureRecognizer * horizontalFailureGestureRecognizer;              //@synthesize horizontalFailureGestureRecognizer=_horizontalFailureGestureRecognizer - In the implementation block
@property (assign,nonatomic) long long scrollingStrategy;                                                           //@synthesize scrollingStrategy=_scrollingStrategy - In the implementation block
@property (assign,nonatomic,__weak) id<CSScrollGestureControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)invalidate;
-(id<CSScrollGestureControllerDelegate>)delegate;
-(void)setDelegate:(id<CSScrollGestureControllerDelegate>)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)handleEvent:(id)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(long long)scrollingStrategy;
-(void)setScrollingStrategy:(long long)arg1 ;
-(id)initWithScrollableView:(id)arg1 ;
-(void)_horizontalScrollFailureGestureRecognizerChanged:(id)arg1 ;
-(void)_updateForScrollingStrategy:(long long)arg1 fromScrollingStrategy:(long long)arg2 ;
-(CSHorizontalScrollFailureRecognizer *)horizontalFailureGestureRecognizer;
-(BOOL)_shouldFailHorizontalSwipesForScrollingStrategy:(long long)arg1 ;
-(BOOL)_shouldAllowScrollForScrollingStrategy:(long long)arg1 ;
-(void)setHorizontalFailureGestureRecognizer:(CSHorizontalScrollFailureRecognizer *)arg1 ;
@end

