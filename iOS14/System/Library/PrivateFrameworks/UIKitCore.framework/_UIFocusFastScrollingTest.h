/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)peakScrollVelocity;
-(void)setPeakScrollVelocity:(double)arg1 ;
-(double)delayBetweenScrolls;
-(void)_performFocusFastScrolling;
-(unsigned long long)numberOfScrollsToPerform;
-(void)setNumberOfScrollsToPerform:(unsigned long long)arg1 ;
-(void)setDelayBetweenScrolls:(double)arg1 ;
-(void)main;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)reset;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancel;
-(UIScrollView *)scrollView;
-(id)initWithIdentifier:(id)arg1 ;
@end

