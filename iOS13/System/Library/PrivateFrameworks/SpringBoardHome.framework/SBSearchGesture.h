/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSHashTable, SBSearchScrollView, UIPanGestureRecognizer, NSMutableSet, UIView, NSString;

@interface SBSearchGesture : NSObject <UIScrollViewDelegate, BSDescriptionProviding> {

	NSHashTable* _observers;
	SBSearchScrollView* _scrollView;
	BOOL _suppressObserverCallbacks;
	UIPanGestureRecognizer* _panGestureRecognizer;
	double _lastOffset;
	NSMutableSet* _disabledReasons;
	BOOL _isDismissing;
	BOOL _ignoreScrollingEnded;
	BOOL _animatingResetOrReveal;
	UIView* _targetView;

}

@property (nonatomic,retain) UIView * targetView;                                                        //@synthesize targetView=_targetView - In the implementation block
@property (getter=isAnimatingResetOrReveal,nonatomic,readonly) BOOL animatingResetOrReveal;              //@synthesize animatingResetOrReveal=_animatingResetOrReveal - In the implementation block
@property (getter=isShowingSearch,nonatomic,readonly) BOOL showingSearch; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)searchHeaderHeight;
-(id)init;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(UIView *)targetView;
-(void)setTargetView:(UIView *)arg1 ;
-(void)requireGestureRecognizerToFail:(id)arg1 ;
-(void)setDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)resetAnimated:(BOOL)arg1 ;
-(void)revealAnimated:(BOOL)arg1 ;
-(void)updateForRotation;
-(void)_notifyThaWeStartedShowingOrHiding;
-(void)_updateForFinalContentOffset;
-(void)_updateForScrollingEnded;
-(void)_updateScrollingEnabled;
-(BOOL)_isShowingSearch;
-(BOOL)isShowingSearch;
-(BOOL)isAnimatingResetOrReveal;
@end

