/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIRefreshControlHosting.h>

@class UIScrollView, NSString;

@interface _UIScrollViewRefreshControlHost : NSObject <_UIRefreshControlHosting> {

	UIScrollView* _scrollView;
	BOOL _refreshControlAutomaticContentOffsetAdjustmentEnabledNeedsReset;
	BOOL _refreshControlAutomaticContentOffsetAdjustmentEnabledWhenLastIdle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL refreshControlInsetsAffectScrollViewRubberBanding; 
@property (__weak,readonly) UIScrollView * scrollView; 
-(UIScrollView *)scrollView;
-(id)initWithScrollView:(id)arg1 ;
-(BOOL)refreshControlInsetsAffectScrollViewRubberBanding;
-(void)incrementInsetHeight:(double)arg1 ;
-(void)decrementInsetHeight:(double)arg1 ;
-(void)refreshControl:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 ;
@end

