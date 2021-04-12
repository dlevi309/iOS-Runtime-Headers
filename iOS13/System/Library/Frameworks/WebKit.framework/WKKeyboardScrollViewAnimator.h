/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKKeyboardScrollableInternal.h>

@protocol WKKeyboardScrollViewAnimatorDelegate;
@class NSString;

@interface WKKeyboardScrollViewAnimator : NSObject <WKKeyboardScrollableInternal> {

	WeakObjCPtr<UIScrollView> _scrollView;
	RetainPtr<WKKeyboardScrollingAnimator>* _animator;
	BOOL _delegateRespondsToIsKeyboardScrollable;
	BOOL _delegateRespondsToDistanceForIncrement;
	BOOL _delegateRespondsToWillScroll;
	BOOL _delegateRespondsToDidFinishScrolling;
	id<WKKeyboardScrollViewAnimatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WKKeyboardScrollViewAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<WKKeyboardScrollViewAnimatorDelegate>)delegate;
-(void)setDelegate:(id<WKKeyboardScrollViewAnimatorDelegate>)arg1 ;
-(CGPoint)contentOffset;
-(id)initWithScrollView:(id)arg1 ;
-(void)handleKeyEvent:(id)arg1 ;
-(void)didFinishScrolling;
-(BOOL)isKeyboardScrollable;
-(double)distanceForIncrement:(unsigned char)arg1 inDirection:(unsigned char)arg2 ;
-(RectEdges<bool>)rubberbandableDirections;
-(CGPoint)boundedContentOffset:(CGPoint)arg1 ;
-(void)scrollWithScrollToExtentAnimationTo:(CGPoint)arg1 ;
-(CGSize)interactiveScrollVelocity;
-(RectEdges<bool>)scrollableDirectionsFromOffset:(CGPoint)arg1 ;
-(void)scrollToContentOffset:(FloatPoint)arg1 animated:(BOOL)arg2 ;
-(BOOL)beginWithEvent:(id)arg1 ;
-(BOOL)scrollTriggeringKeyIsPressed;
-(void)willStartInteractiveScroll;
@end

