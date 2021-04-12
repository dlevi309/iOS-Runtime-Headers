/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <libobjc.A.dylib/TUDynamicBarAnimatorDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>

@interface TeaUI.BarCompressionManager : NSObject <TUDynamicBarAnimatorDelegate, UIScrollViewDelegate, UITableViewDelegate, UICollectionViewDelegate> {

	 delegate;
	 scrollView;
	 proxyMultiDelegate;
	 barAnimator;
	 navigationBarAnimation;
	 toolbarAnimation;
	 barState;
	 applicationStateManager;
	 observingToken;
	 lastContentOffset;
	 initialContentOffset;
	 scrollDebounce;

}
-(void)dynamicBarAnimatorWillEnterSteadyState:(id)arg1 ;
-(void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg1 ;
-(void)dynamicBarAnimatorOutputsDidChange:(id)arg1 ;
-(BOOL)dynamicBarAnimator:(id)arg1 canHideBarsByDraggingWithOffset:(double)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint*)arg3 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(id)init;
-(void)voiceOverStatusDidChange;
@end

