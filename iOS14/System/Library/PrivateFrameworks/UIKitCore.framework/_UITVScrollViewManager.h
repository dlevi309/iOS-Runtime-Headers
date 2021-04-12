/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(id<_UITVScrollViewManagerDelegate>)delegate;
-(void)setTargetOffset:(CGPoint)arg1 ;
-(void)_scrollAnimationDidEnd:(id)arg1 ;
-(void)_scrollToContentOffset:(CGPoint)arg1 ;
-(CASpringAnimation *)scrollAnimation;
-(void)_removeScreenshotViewIfNeeded;
-(void)setDelegate:(id<_UITVScrollViewManagerDelegate>)arg1 ;
-(BOOL)useCustomMaskForScrolling;
-(void)setSnapshotViewForWindow:(UIView *)arg1 ;
-(UIView *)snapshotViewForWindow;
-(void)setUseCustomMaskForScrolling:(BOOL)arg1 ;
-(id)_customScrollViewMaskForScrolling:(CGRect)arg1 ;
-(void)setScrollStyle:(long long)arg1 ;
-(id)initWithScrollView:(id)arg1 scrollStyle:(long long)arg2 ;
-(void)setScrollAnimation:(CASpringAnimation *)arg1 ;
-(void)_observeScrollViewDidScroll:(id)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)_tearDown;
-(long long)scrollStyle;
-(long long)_currentPage;
-(CGPoint)targetOffset;
-(UIScrollView *)scrollView;
-(void)dealloc;
@end

