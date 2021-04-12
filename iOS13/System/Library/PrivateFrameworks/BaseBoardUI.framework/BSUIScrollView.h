/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/

#import <BaseBoardUI/BaseBoardUI-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSString;

@interface BSUIScrollView : UIScrollView <UIScrollViewDelegate> {

	BOOL _isScrolling;
	BOOL _preventDidEndScrolling;
	BOOL _didScroll;
	/*^block*/id _scrollCompletion;
	CGPoint _previousContentOffset;
	CGPoint _initialContentOffset;
	BOOL _scrolling;

}

@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling;                     //@synthesize scrolling=_scrolling - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BS3 currentScrollContext; 
@property (assign,nonatomic,__weak) id<BSUIScrollViewDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<BSUIScrollViewDelegate>)delegate;
-(void)setDelegate:(id<BSUIScrollViewDelegate>)arg1 ;
-(BOOL)isScrolling;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_notifyDidScroll;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)_setContentOffset:(CGPoint)arg1 animation:(id)arg2 ;
-(void)_willBeginDraggingNotification:(id)arg1 ;
-(void)_didEndDraggingNotification:(id)arg1 ;
-(void)_didDidEndDeceleratingNotification:(id)arg1 ;
-(void)_didEndScrollAnimationNotification:(id)arg1 ;
-(long long)_activeMethod;
-(BOOL)_setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 withAnimation:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_animationForAnimationSettings:(id)arg1 ;
-(void)_setScrollCompletion:(/*^block*/id)arg1 ;
-(void)_setContentOffset:(CGPoint)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_setCurrentContentOffsetImmediatelyIfScrollInterruptionAnimated:(BOOL)arg1 ;
-(void)_setScrolling:(BOOL)arg1 ;
-(SCD_Struct_BS3)currentScrollContext;
-(void)_bs_didScrollWithContext:(SCD_Struct_BS3)arg1 ;
-(void)_updateScrolling;
-(void)_bs_willBeginScrolling;
-(void)_bs_didEndScrolling;
-(BOOL)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)setContentOffset:(CGPoint)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

