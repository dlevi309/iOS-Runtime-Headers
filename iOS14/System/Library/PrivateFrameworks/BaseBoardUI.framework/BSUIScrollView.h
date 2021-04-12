/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<BSUIScrollViewDelegate>)delegate;
-(void)_willBeginDraggingNotification:(id)arg1 ;
-(SCD_Struct_BS3)currentScrollContext;
-(void)_bs_willBeginScrolling;
-(BOOL)setContentOffset:(CGPoint)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_bs_didEndScrolling;
-(void)setDelegate:(id<BSUIScrollViewDelegate>)arg1 ;
-(void)_bs_didScrollWithContext:(SCD_Struct_BS3)arg1 ;
-(BOOL)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_notifyDidScroll;
-(void)_didDidEndDeceleratingNotification:(id)arg1 ;
-(BOOL)isScrolling;
-(void)_didEndScrollAnimationNotification:(id)arg1 ;
-(void)_setContentOffset:(CGPoint)arg1 animation:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)_didEndDraggingNotification:(id)arg1 ;
-(void)dealloc;
@end

