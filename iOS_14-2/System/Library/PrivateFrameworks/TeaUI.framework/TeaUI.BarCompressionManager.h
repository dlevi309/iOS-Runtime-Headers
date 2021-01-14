/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/TUDynamicBarAnimatorDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>

@interface TeaUI.BarCompressionManager : NSObject <UIScrollViewDelegate, TUDynamicBarAnimatorDelegate, UITableViewDelegate, UICollectionViewDelegate> {

	 delegate;
	 isEnabled;
	 shouldExpandAtBottom;
	 $__lazy_storage_$_state;
	 scrollView;
	 proxyMultiDelegate;
	 barAnimator;
	 navigationBarAnimation;
	 toolbarAnimation;
	 barState;
	 sceneStateManager;
	 observingToken;
	 lastContentOffset;
	 initialContentOffset;
	 scrollDebounce;
	 _lastBarCompressEvent;

}
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)dynamicBarAnimatorOutputsDidChange:(id)arg1 ;
-(void)dynamicBarAnimatorWillEnterSteadyState:(id)arg1 ;
-(BOOL)dynamicBarAnimator:(id)arg1 canHideBarsByDraggingWithOffset:(double)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint*)arg3 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg1 ;
-(id)init;
-(void)voiceOverStatusDidChange;
@end

