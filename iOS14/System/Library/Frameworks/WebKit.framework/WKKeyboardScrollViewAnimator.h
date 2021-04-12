/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)didFinishScrolling;
-(void)handleKeyEvent:(id)arg1 ;
-(id)initWithScrollView:(id)arg1 ;
-(id)init;
-(id<WKKeyboardScrollViewAnimatorDelegate>)delegate;
-(void)scrollWithScrollToExtentAnimationTo:(CGPoint)arg1 ;
-(void)willStartInteractiveScroll;
-(BOOL)scrollTriggeringKeyIsPressed;
-(void)setDelegate:(id<WKKeyboardScrollViewAnimatorDelegate>)arg1 ;
-(void)scrollToContentOffset:(FloatPoint)arg1 animated:(BOOL)arg2 ;
-(BOOL)isKeyboardScrollable;
-(RectEdges<bool>)rubberbandableDirections;
-(RectEdges<bool>)scrollableDirectionsFromOffset:(CGPoint)arg1 ;
-(void)invalidate;
-(double)distanceForIncrement:(unsigned char)arg1 inDirection:(unsigned char)arg2 ;
-(BOOL)beginWithEvent:(id)arg1 ;
-(CGPoint)boundedContentOffset:(CGPoint)arg1 ;
-(CGPoint)contentOffset;
-(CGSize)interactiveScrollVelocity;
-(void)dealloc;
@end

