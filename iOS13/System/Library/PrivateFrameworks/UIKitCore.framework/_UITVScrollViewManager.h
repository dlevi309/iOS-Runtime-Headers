/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIScrollViewScrollObserver.h>

@protocol _UITVScrollViewManagerDelegate;
@class UIScrollView, CASpringAnimation, UIView, NSString;

@interface _UITVScrollViewManager : NSObject <_UIScrollViewScrollObserver> {

	BOOL _delegateScrollViewManagerDidFinishScrolling;
	BOOL _useCustomMaskForScrolling;
	id<_UITVScrollViewManagerDelegate> _delegate;
	UIScrollView* _scrollView;
	long long _scrollStyle;
	CASpringAnimation* _scrollAnimation;
	UIView* _snapshotViewForWindow;
	CGPoint _targetOffset;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) CASpringAnimation * scrollAnimation;                             //@synthesize scrollAnimation=_scrollAnimation - In the implementation block
@property (assign,nonatomic) long long scrollStyle;                                           //@synthesize scrollStyle=_scrollStyle - In the implementation block
@property (nonatomic,retain) UIView * snapshotViewForWindow;                                  //@synthesize snapshotViewForWindow=_snapshotViewForWindow - In the implementation block
@property (assign,nonatomic) BOOL useCustomMaskForScrolling;                                  //@synthesize useCustomMaskForScrolling=_useCustomMaskForScrolling - In the implementation block
@property (assign,nonatomic) CGPoint targetOffset;                                            //@synthesize targetOffset=_targetOffset - In the implementation block
@property (assign,nonatomic,__weak) id<_UITVScrollViewManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<_UITVScrollViewManagerDelegate>)delegate;
-(void)setDelegate:(id<_UITVScrollViewManagerDelegate>)arg1 ;
-(void)_tearDown;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)_observeScrollViewDidScroll:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(long long)_currentPage;
-(void)_scrollAnimationDidEnd:(id)arg1 ;
-(void)setTargetOffset:(CGPoint)arg1 ;
-(long long)scrollStyle;
-(void)_scrollToContentOffset:(CGPoint)arg1 ;
-(CASpringAnimation *)scrollAnimation;
-(void)_removeScreenshotViewIfNeeded;
-(BOOL)useCustomMaskForScrolling;
-(CGPoint)targetOffset;
-(void)setSnapshotViewForWindow:(UIView *)arg1 ;
-(UIView *)snapshotViewForWindow;
-(void)setUseCustomMaskForScrolling:(BOOL)arg1 ;
-(id)_customScrollViewMaskForScrolling:(CGRect)arg1 ;
-(id)initWithScrollView:(id)arg1 scrollStyle:(long long)arg2 ;
-(void)setScrollStyle:(long long)arg1 ;
-(void)setScrollAnimation:(CASpringAnimation *)arg1 ;
@end

