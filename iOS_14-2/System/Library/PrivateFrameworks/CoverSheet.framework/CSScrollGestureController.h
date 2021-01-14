/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)conformsToCSEventHandling;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(id)succinctDescription;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id<CSScrollGestureControllerDelegate>)delegate;
-(BOOL)handleEvent:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)debugDescription;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(void)setScrollingStrategy:(long long)arg1 ;
-(void)setDelegate:(id<CSScrollGestureControllerDelegate>)arg1 ;
-(NSString *)description;
-(void)invalidate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(long long)scrollingStrategy;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(id)initWithScrollableView:(id)arg1 ;
-(void)_horizontalScrollFailureGestureRecognizerChanged:(id)arg1 ;
-(void)_updateForScrollingStrategy:(long long)arg1 fromScrollingStrategy:(long long)arg2 ;
-(CSHorizontalScrollFailureRecognizer *)horizontalFailureGestureRecognizer;
-(BOOL)_shouldFailHorizontalSwipesForScrollingStrategy:(long long)arg1 ;
-(BOOL)_shouldAllowScrollForScrollingStrategy:(long long)arg1 ;
-(void)setHorizontalFailureGestureRecognizer:(CSHorizontalScrollFailureRecognizer *)arg1 ;
@end

