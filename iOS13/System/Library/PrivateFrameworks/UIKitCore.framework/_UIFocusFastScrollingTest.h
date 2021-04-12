/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusTest.h>

@protocol UIFocusItem;
@class NSTimer, UIScrollView;

@interface _UIFocusFastScrollingTest : _UIFocusTest {

	unsigned long long _currentScroll;
	CGPoint _originalContentOffset;
	id<UIFocusItem> _originalFocusedItem;
	NSTimer* _delayTimer;
	UIScrollView* _scrollView;
	double _peakScrollVelocity;
	unsigned long long _numberOfScrollsToPerform;
	double _delayBetweenScrolls;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) double peakScrollVelocity;                                //@synthesize peakScrollVelocity=_peakScrollVelocity - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfScrollsToPerform;              //@synthesize numberOfScrollsToPerform=_numberOfScrollsToPerform - In the implementation block
@property (assign,nonatomic) double delayBetweenScrolls;                               //@synthesize delayBetweenScrolls=_delayBetweenScrolls - In the implementation block
-(void)cancel;
-(void)main;
-(id)initWithIdentifier:(id)arg1 ;
-(void)reset;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)_performFocusFastScrolling;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)peakScrollVelocity;
-(void)setPeakScrollVelocity:(double)arg1 ;
-(unsigned long long)numberOfScrollsToPerform;
-(void)setNumberOfScrollsToPerform:(unsigned long long)arg1 ;
-(double)delayBetweenScrolls;
-(void)setDelayBetweenScrolls:(double)arg1 ;
@end

